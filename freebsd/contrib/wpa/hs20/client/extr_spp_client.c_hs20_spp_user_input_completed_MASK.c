
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xml_node_t ;
struct hs20_osu_client {int xml; int http; } ;


 int VAR_0 ;
 int * FUNC_0 (struct hs20_osu_client*,int *,char const*,char*) ;
 scalar_t__ FUNC_1 (struct hs20_osu_client*,int *,char*) ;
 scalar_t__ FUNC_2 (int ) ;
 int * FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static xml_node_t * FUNC_6(struct hs20_osu_client *VAR_1,
          const char *VAR_2)
{
 xml_node_t *VAR_3, *VAR_4;

 VAR_3 = FUNC_0(VAR_1, ((void*)0), VAR_2,
           "User input completed");
 if (VAR_3 == ((void*)0))
  return ((void*)0);

 VAR_4 = FUNC_3(VAR_1->http, VAR_3);
 if (!VAR_4) {
  if (FUNC_2(VAR_1->http) < 0)
   return ((void*)0);
  FUNC_4(VAR_0, "Try to finish with re-opened connection");
  VAR_3 = FUNC_0(VAR_1, ((void*)0), VAR_2,
            "User input completed");
  if (VAR_3 == ((void*)0))
   return ((void*)0);
  VAR_4 = FUNC_3(VAR_1->http, VAR_3);
  if (VAR_4 == ((void*)0))
   return ((void*)0);
  FUNC_4(VAR_0, "Continue with new connection");
 }

 if (FUNC_1(VAR_1, VAR_4, "sppPostDevDataResponse") < 0) {
  FUNC_4(VAR_0, "SPP validation failed");
  FUNC_5(VAR_1->xml, VAR_4);
  return ((void*)0);
 }

 return VAR_4;
}

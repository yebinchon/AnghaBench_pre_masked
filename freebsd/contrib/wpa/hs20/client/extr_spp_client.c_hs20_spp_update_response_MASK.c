
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xml_node_t ;
struct hs20_osu_client {int xml; int http; } ;


 int VAR_0 ;
 int * FUNC_0 (struct hs20_osu_client*,char const*,char const*,char const*) ;
 scalar_t__ FUNC_1 (struct hs20_osu_client*,int *,char*) ;
 int FUNC_2 (struct hs20_osu_client*,int *) ;
 scalar_t__ FUNC_3 (int ) ;
 int * FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (struct hs20_osu_client*,char*,char const*,char const*) ;
 int FUNC_7 (int ,int *) ;

__attribute__((used)) static int FUNC_8(struct hs20_osu_client *VAR_1,
        const char *VAR_2,
        const char *VAR_3,
        const char *VAR_4)
{
 xml_node_t *VAR_5, *VAR_6;
 int VAR_7;

 FUNC_6(VAR_1, "Building sppUpdateResponse sppStatus='%s' error_code='%s'",
        VAR_3, VAR_4);
 VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_3,
      VAR_4);
 if (VAR_5 == ((void*)0))
  return -1;
 VAR_6 = FUNC_4(VAR_1->http, VAR_5);
 if (!VAR_6) {
  if (FUNC_3(VAR_1->http) < 0)
   return -1;
  FUNC_5(VAR_0, "Try to finish with re-opened connection");
  VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_3,
       VAR_4);
  if (VAR_5 == ((void*)0))
   return -1;
  VAR_6 = FUNC_4(VAR_1->http, VAR_5);
  if (VAR_6 == ((void*)0))
   return -1;
  FUNC_5(VAR_0, "Continue with new connection");
 }

 if (FUNC_1(VAR_1, VAR_6, "sppExchangeComplete") < 0) {
  FUNC_5(VAR_0, "SPP validation failed");
  FUNC_7(VAR_1->xml, VAR_6);
  return -1;
 }

 VAR_7 = FUNC_2(VAR_1, VAR_6);
 FUNC_7(VAR_1->xml, VAR_6);
 return VAR_7;
}

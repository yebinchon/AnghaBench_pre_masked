
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xml_node_t ;
typedef int xml_namespace_t ;
struct hs20_osu_client {int xml; int http; } ;


 int VAR_0 ;
 int * FUNC_0 (struct hs20_osu_client*,int **,char const*,char*) ;
 int FUNC_1 (struct hs20_osu_client*,char*,int *) ;
 scalar_t__ FUNC_2 (struct hs20_osu_client*,int *,char*) ;
 int FUNC_3 (struct hs20_osu_client*,int *) ;
 int * FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static xml_node_t * FUNC_7(struct hs20_osu_client *VAR_1,
          xml_node_t *VAR_2,
          const char *VAR_3,
          const char *VAR_4)
{
 xml_namespace_t *VAR_5;
 xml_node_t *VAR_6, *VAR_7;
 int VAR_8;

 FUNC_5(VAR_0, "Client certificate enrollment");

 VAR_8 = FUNC_3(VAR_1, VAR_2);
 if (VAR_8 < 0)
  FUNC_5(VAR_0, "EST simpleEnroll failed");

 VAR_6 = FUNC_0(VAR_1, &VAR_5, VAR_3,
           VAR_8 == 0 ?
           "Certificate enrollment completed" :
           "Certificate enrollment failed");
 if (VAR_6 == ((void*)0))
  return ((void*)0);

 VAR_7 = FUNC_4(VAR_1->http, VAR_6);
 if (VAR_7 == ((void*)0))
  return ((void*)0);

 FUNC_1(VAR_1, "Received response to certificate enrollment "
   "completed", VAR_7);

 if (FUNC_2(VAR_1, VAR_7, "sppPostDevDataResponse") < 0) {
  FUNC_5(VAR_0, "SPP validation failed");
  FUNC_6(VAR_1->xml, VAR_7);
  return ((void*)0);
 }

 return VAR_7;
}

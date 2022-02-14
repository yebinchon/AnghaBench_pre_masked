
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xml_node_t ;
typedef int xml_namespace_t ;
struct hs20_osu_client {int xml; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int *,char*,char const*) ;
 int * FUNC_1 (int ,int *,int *,char*) ;
 int * FUNC_2 (int ,int ,char*,int **,char*) ;

__attribute__((used)) static xml_node_t * FUNC_3(struct hs20_osu_client *VAR_1,
           const char *VAR_2,
           const char *VAR_3,
           const char *VAR_4)
{
 xml_namespace_t *VAR_5;
 xml_node_t *VAR_6, *VAR_7;

 VAR_6 = FUNC_2(VAR_1->xml, VAR_0, "spp", &VAR_5,
     "sppUpdateResponse");
 if (VAR_6 == ((void*)0))
  return ((void*)0);

 FUNC_0(VAR_1->xml, VAR_6, VAR_5, "sppVersion", "1.0");
 FUNC_0(VAR_1->xml, VAR_6, VAR_5, "sessionID", VAR_2);
 FUNC_0(VAR_1->xml, VAR_6, VAR_5, "sppStatus", VAR_3);

 if (VAR_4) {
  VAR_7 = FUNC_1(VAR_1->xml, VAR_6, VAR_5, "sppError");
  if (VAR_7)
   FUNC_0(VAR_1->xml, VAR_7, ((void*)0), "errorCode",
       VAR_4);
 }

 return VAR_6;
}

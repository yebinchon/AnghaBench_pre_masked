
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xml_node_t ;
struct hs20_osu_client {int xml; int fqdn; } ;


 int VAR_0 ;
 int * FUNC_0 (int ,char const*) ;
 int FUNC_1 (struct hs20_osu_client*,int *,int *,char const*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int ,int *) ;

void FUNC_5(struct hs20_osu_client *VAR_1, const char *VAR_2,
      const char *VAR_3)
{
 xml_node_t *VAR_4, *VAR_5;
 int VAR_6;

 VAR_1->fqdn = FUNC_2("wi-fi.org");

 VAR_4 = FUNC_0(VAR_1->xml, VAR_2);
 if (VAR_4 == ((void*)0)) {
  FUNC_3(VAR_0, "PPS file %s could not be parsed",
      VAR_2);
  return;
 }

 VAR_5 = FUNC_0(VAR_1->xml, VAR_3);
 if (VAR_5 == ((void*)0)) {
  FUNC_3(VAR_0, "Add file %s could not be parsed",
      VAR_3);
  FUNC_4(VAR_1->xml, VAR_4);
  return;
 }

 VAR_6 = FUNC_1(VAR_1, VAR_5, VAR_4, VAR_2);
 FUNC_3(VAR_0, "oma_dm_add --> %d", VAR_6);

 FUNC_4(VAR_1->xml, VAR_4);
 FUNC_4(VAR_1->xml, VAR_5);
}

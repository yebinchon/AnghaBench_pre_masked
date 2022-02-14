
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xml_node_t ;
struct hs20_osu_client {int xml; } ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (int *,char*,char*) ;
 int * FUNC_3 (int ,int *,char*) ;
 int * FUNC_4 (int ,char const*) ;
 int FUNC_5 (int ,char*,char const*) ;
 int FUNC_6 (int ,int *) ;
 char* FUNC_7 (int ,int *) ;
 int FUNC_8 (int ,char*) ;

__attribute__((used)) static int FUNC_9(struct hs20_osu_client *VAR_1, const char *VAR_2)
{
 xml_node_t *VAR_3, *VAR_4;
 char *VAR_5 = ((void*)0);

 VAR_3 = FUNC_4(VAR_1->xml, VAR_2);
 if (VAR_3 == ((void*)0)) {
  FUNC_5(VAR_0, "Could not read or parse '%s'", VAR_2);
  return -1;
 }

 VAR_4 = FUNC_3(VAR_1->xml, VAR_3, "HomeSP/FQDN");
 if (VAR_4)
  VAR_5 = FUNC_7(VAR_1->xml, VAR_4);

 FUNC_6(VAR_1->xml, VAR_3);

 if (VAR_5) {
  FILE *VAR_6 = FUNC_1("pps-fqdn", "w");
  if (VAR_6) {
   FUNC_2(VAR_6, "%s", VAR_5);
   FUNC_0(VAR_6);
  }
  FUNC_8(VAR_1->xml, VAR_5);
  return 0;
 }

 FUNC_8(VAR_1->xml, VAR_5);
 return -1;
}

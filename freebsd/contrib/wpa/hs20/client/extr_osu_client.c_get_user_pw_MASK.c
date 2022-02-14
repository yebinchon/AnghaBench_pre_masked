
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xml_node_t ;
struct hs20_osu_client {int xml; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int * FUNC_1 (int ,int *,char const*) ;
 int * FUNC_2 (int ,int *,char*) ;
 int FUNC_3 (int ,char*,...) ;
 char* FUNC_4 (int ,int *,int *) ;
 char* FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,char*) ;

void FUNC_7(struct hs20_osu_client *VAR_1, xml_node_t *VAR_2,
   const char *VAR_3, char **VAR_4, char **VAR_5)
{
 xml_node_t *VAR_6;

 VAR_6 = FUNC_1(VAR_1->xml, VAR_2,
         "Credential/UsernamePassword/Username");
 if (VAR_6)
  *VAR_4 = FUNC_5(VAR_1->xml, VAR_6);

 VAR_6 = FUNC_1(VAR_1->xml, VAR_2,
         "Credential/UsernamePassword/Password");
 if (VAR_6)
  *VAR_5 = FUNC_4(VAR_1->xml, VAR_6, ((void*)0));

 VAR_6 = FUNC_1(VAR_1->xml, VAR_2, VAR_3);
 if (VAR_6) {
  xml_node_t *VAR_7;
  VAR_7 = FUNC_2(VAR_1->xml, VAR_6, "Username");
  if (VAR_7) {
   FUNC_6(VAR_1->xml, *VAR_4);
   *VAR_4 = FUNC_5(VAR_1->xml, VAR_7);
   FUNC_3(VAR_0, "Use OSU username '%s'", *VAR_4);
  }

  VAR_7 = FUNC_2(VAR_1->xml, VAR_6, "Password");
  if (VAR_7) {
   FUNC_0(*VAR_5);
   *VAR_5 = FUNC_4(VAR_1->xml, VAR_7, ((void*)0));
   FUNC_3(VAR_0, "Use OSU password");
  }
 }
}

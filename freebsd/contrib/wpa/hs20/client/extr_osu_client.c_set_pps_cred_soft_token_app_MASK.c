
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xml_node_t ;
struct hs20_osu_client {int xml; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,char*) ;
 char* FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static void FUNC_3(struct hs20_osu_client *VAR_1, int VAR_2,
     xml_node_t *VAR_3)
{
 char *VAR_4 = FUNC_1(VAR_1->xml, VAR_3);
 if (VAR_4 == ((void*)0))
  return;
 FUNC_0(VAR_0, "- Credential/UsernamePassword/SoftTokenApp = %s",
     VAR_4);

 FUNC_2(VAR_1->xml, VAR_4);
}

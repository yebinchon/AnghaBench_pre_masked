
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xml_node_t ;
struct hs20_osu_client {int xml; int ifname; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int,char*,char*) ;
 int FUNC_1 (int ,char*,...) ;
 char* FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static void FUNC_4(struct hs20_osu_client *VAR_1, int VAR_2,
      xml_node_t *VAR_3)
{
 char *VAR_4 = FUNC_2(VAR_1->xml, VAR_3);
 if (VAR_4 == ((void*)0))
  return;
 FUNC_1(VAR_0, "- Credential/UsernamePassword/Username = %s",
     VAR_4);
 if (FUNC_0(VAR_1->ifname, VAR_2, "username", VAR_4) < 0)
  FUNC_1(VAR_0, "Failed to set cred username");
 FUNC_3(VAR_1->xml, VAR_4);
}

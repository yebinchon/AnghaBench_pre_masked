
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xml_node_t ;
struct hs20_osu_client {int ifname; int xml; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,char*) ;
 scalar_t__ FUNC_1 (int ,int,char*,char const*) ;
 int FUNC_2 (int ,char*,...) ;
 char* FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static void FUNC_5(struct hs20_osu_client *VAR_1,
       int VAR_2, xml_node_t *VAR_3)
{
 char *VAR_4 = FUNC_3(VAR_1->xml, VAR_3);
 const char *VAR_5 = ((void*)0);

 if (!VAR_4)
  return;
 FUNC_2(VAR_0,
     "- Credential/UsernamePassword/EAPMethod/InnerMethod = %s",
     VAR_4);
 if (FUNC_0(VAR_4, "PAP") == 0)
  VAR_5 = "auth=PAP";
 else if (FUNC_0(VAR_4, "CHAP") == 0)
  VAR_5 = "auth=CHAP";
 else if (FUNC_0(VAR_4, "MS-CHAP") == 0)
  VAR_5 = "auth=MSCHAP";
 else if (FUNC_0(VAR_4, "MS-CHAP-V2") == 0)
  VAR_5 = "auth=MSCHAPV2";
 FUNC_4(VAR_1->xml, VAR_4);
 if (!VAR_5) {
  FUNC_2(VAR_0, "Unknown InnerMethod value");
  return;
 }

 if (FUNC_1(VAR_1->ifname, VAR_2, "phase2", VAR_5) < 0)
  FUNC_2(VAR_0, "Failed to set cred phase2");
}

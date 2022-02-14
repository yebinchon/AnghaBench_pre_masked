
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xml_node_t ;
struct hs20_osu_client {int ifname; int xml; } ;






 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,int,char*,char const*) ;
 int FUNC_2 (int ,char*,...) ;
 char* FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static void FUNC_5(struct hs20_osu_client *VAR_1,
          int VAR_2, xml_node_t *VAR_3)
{
 char *VAR_4 = FUNC_3(VAR_1->xml, VAR_3);
 int VAR_5;
 const char *VAR_6 = ((void*)0);

 if (!VAR_4)
  return;
 FUNC_2(VAR_0,
     "- Credential/UsernamePassword/EAPMethod/EAPType = %s", VAR_4);
 VAR_5 = FUNC_0(VAR_4);
 switch (VAR_5) {
 case 129:
  VAR_6 = "TLS";
  break;
 case 128:
  VAR_6 = "TTLS";
  break;
 case 131:
  VAR_6 = "PEAP";
  break;
 case 130:
  VAR_6 = "PWD";
  break;
 }
 FUNC_4(VAR_1->xml, VAR_4);
 if (!VAR_6) {
  FUNC_2(VAR_0, "Unknown EAPType value");
  return;
 }

 if (FUNC_1(VAR_1->ifname, VAR_2, "eap", VAR_6) < 0)
  FUNC_2(VAR_0, "Failed to set cred eap");
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xml_node_t ;
struct hs20_osu_client {int xml; int ifname; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ,int *,char*) ;
 scalar_t__ FUNC_1 (int ,int,char*,char*) ;
 int FUNC_2 (int ,char*,...) ;
 char* FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static void FUNC_5(struct hs20_osu_client *VAR_2, int VAR_3,
        xml_node_t *VAR_4)
{
 xml_node_t *VAR_5;
 char *VAR_6;

 VAR_5 = FUNC_0(VAR_2->xml, VAR_4, "SSID");
 if (VAR_5 == ((void*)0))
  return;
 VAR_6 = FUNC_3(VAR_2->xml, VAR_5);
 if (VAR_6 == ((void*)0))
  return;
 FUNC_2(VAR_0, "- Policy/SPExclusionList/<X+>/SSID = %s", VAR_6);
 if (FUNC_1(VAR_2->ifname, VAR_3, "excluded_ssid", VAR_6) < 0)
  FUNC_2(VAR_1, "Failed to set cred excluded_ssid");
 FUNC_4(VAR_2->xml, VAR_6);
}

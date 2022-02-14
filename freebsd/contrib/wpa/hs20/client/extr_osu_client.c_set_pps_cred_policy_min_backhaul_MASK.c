
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xml_node_t ;
struct hs20_osu_client {int xml; int ifname; } ;


 int VAR_0 ;
 int * FUNC_0 (int ,int *,char*) ;
 scalar_t__ FUNC_1 (char*,char*) ;
 scalar_t__ FUNC_2 (int ,int,char*,char*) ;
 int FUNC_3 (int ,char*,...) ;
 char* FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static void FUNC_6(struct hs20_osu_client *VAR_1, int VAR_2,
          xml_node_t *VAR_3)
{
 xml_node_t *VAR_4;
 char *VAR_5, *VAR_6 = ((void*)0), *VAR_7 = ((void*)0);
 int VAR_8;

 VAR_4 = FUNC_0(VAR_1->xml, VAR_3, "NetworkType");
 if (VAR_4 == ((void*)0)) {
  FUNC_3(VAR_0, "Ignore MinBackhaulThreshold without mandatory NetworkType node");
  return;
 }

 VAR_5 = FUNC_4(VAR_1->xml, VAR_4);
 if (VAR_5 == ((void*)0))
  return;
 FUNC_3(VAR_0, "- Policy/MinBackhaulThreshold/<X+>/NetworkType = %s",
     VAR_5);
 if (FUNC_1(VAR_5, "home") == 0)
  VAR_8 = 1;
 else if (FUNC_1(VAR_5, "roaming") == 0)
  VAR_8 = 0;
 else {
  FUNC_3(VAR_0, "Ignore MinBackhaulThreshold with invalid NetworkType");
  FUNC_5(VAR_1->xml, VAR_5);
  return;
 }
 FUNC_5(VAR_1->xml, VAR_5);

 VAR_4 = FUNC_0(VAR_1->xml, VAR_3, "DLBandwidth");
 if (VAR_4)
  VAR_6 = FUNC_4(VAR_1->xml, VAR_4);

 VAR_4 = FUNC_0(VAR_1->xml, VAR_3, "ULBandwidth");
 if (VAR_4)
  VAR_7 = FUNC_4(VAR_1->xml, VAR_4);

 if (VAR_6 == ((void*)0) && VAR_7 == ((void*)0)) {
  FUNC_3(VAR_0, "Ignore MinBackhaulThreshold without either DLBandwidth or ULBandwidth nodes");
  return;
 }

 if (VAR_6)
  FUNC_3(VAR_0, "- Policy/MinBackhaulThreshold/<X+>/DLBandwidth = %s",
      VAR_6);
 if (VAR_7)
  FUNC_3(VAR_0, "- Policy/MinBackhaulThreshold/<X+>/ULBandwidth = %s",
      VAR_7);

 if (VAR_8) {
  if (VAR_6 &&
      FUNC_2(VAR_1->ifname, VAR_2, "min_dl_bandwidth_home", VAR_6) < 0)
   FUNC_3(VAR_0, "Failed to set cred bandwidth limit");
  if (VAR_7 &&
      FUNC_2(VAR_1->ifname, VAR_2, "min_ul_bandwidth_home", VAR_7) < 0)
   FUNC_3(VAR_0, "Failed to set cred bandwidth limit");
 } else {
  if (VAR_6 &&
      FUNC_2(VAR_1->ifname, VAR_2, "min_dl_bandwidth_roaming", VAR_6) <
      0)
   FUNC_3(VAR_0, "Failed to set cred bandwidth limit");
  if (VAR_7 &&
      FUNC_2(VAR_1->ifname, VAR_2, "min_ul_bandwidth_roaming", VAR_7) <
      0)
   FUNC_3(VAR_0, "Failed to set cred bandwidth limit");
 }

 FUNC_5(VAR_1->xml, VAR_6);
 FUNC_5(VAR_1->xml, VAR_7);
}

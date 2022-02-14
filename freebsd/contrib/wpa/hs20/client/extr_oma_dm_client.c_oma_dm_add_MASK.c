
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xml_node_t ;
struct hs20_osu_client {int no_reconnect; int pps_cred_set; int ifname; int pps_fname; int xml; } ;
typedef int fname ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct hs20_osu_client*,char*) ;
 int * FUNC_1 (int ,int *,char*) ;
 int FUNC_2 (struct hs20_osu_client*,char*,int *,char*,int) ;
 int FUNC_3 (struct hs20_osu_client*,char*,int *,int *,char const*) ;
 scalar_t__ FUNC_4 (char const*) ;
 int FUNC_5 (int ,int,char*,char*) ;
 int FUNC_6 (char*,char const*,int) ;
 scalar_t__ FUNC_7 (char*,char*,int) ;
 scalar_t__ FUNC_8 (int ,char*) ;
 int FUNC_9 (int ,char*,...) ;
 char* FUNC_10 (int ,int *) ;
 int FUNC_11 (int ,char*) ;

__attribute__((used)) static int FUNC_12(struct hs20_osu_client *VAR_7, xml_node_t *VAR_8,
        xml_node_t *VAR_9, const char *VAR_10)
{
 xml_node_t *VAR_11;
 char *VAR_12;
 char VAR_13[300];
 int VAR_14;

 VAR_11 = FUNC_1(VAR_7->xml, VAR_8, "Item/Target/LocURI");
 if (VAR_11 == ((void*)0)) {
  FUNC_9(VAR_6, "No Target LocURI node found");
  return VAR_1;
 }
 VAR_12 = FUNC_10(VAR_7->xml, VAR_11);
 if (VAR_12 == ((void*)0)) {
  FUNC_9(VAR_5, "No LocURI node text found");
  return VAR_1;
 }
 FUNC_9(VAR_6, "Target LocURI: %s", VAR_12);
 if (FUNC_7(VAR_12, "./Wi-Fi/", 8) != 0) {
  FUNC_9(VAR_6, "Unsupported Add Target LocURI");
  FUNC_11(VAR_7->xml, VAR_12);
  return VAR_4;
 }

 VAR_11 = FUNC_1(VAR_7->xml, VAR_8, "Item/Data");
 if (VAR_11 == ((void*)0)) {
  FUNC_9(VAR_6, "No Data node found");
  FUNC_11(VAR_7->xml, VAR_12);
  return VAR_1;
 }

 if (VAR_10 && FUNC_4(VAR_10)) {
  VAR_14 = FUNC_3(VAR_7, VAR_12, VAR_8, VAR_9, VAR_10);
  if (VAR_14 != VAR_3) {
   FUNC_11(VAR_7->xml, VAR_12);
   return VAR_14;
  }
  VAR_14 = 0;
  FUNC_6(VAR_13, VAR_10, sizeof(VAR_13));
 } else
  VAR_14 = FUNC_2(VAR_7, VAR_12, VAR_11, VAR_13, sizeof(VAR_13));
 FUNC_11(VAR_7->xml, VAR_12);
 if (VAR_14 < 0)
  return VAR_14 == -2 ? VAR_0 :
   VAR_2;

 if (VAR_7->no_reconnect == 2) {
  FUNC_5(VAR_7->pps_fname, sizeof(VAR_7->pps_fname), "%s",
       VAR_13);
  VAR_7->pps_cred_set = 1;
  return VAR_3;
 }

 FUNC_9(VAR_6, "Updating wpa_supplicant credentials");
 FUNC_0(VAR_7, VAR_13);

 if (VAR_7->no_reconnect)
  return VAR_3;

 FUNC_9(VAR_6, "Requesting reconnection with updated configuration");
 if (FUNC_8(VAR_7->ifname, "INTERWORKING_SELECT auto") < 0)
  FUNC_9(VAR_6, "Failed to request wpa_supplicant to reconnect");

 return VAR_3;
}

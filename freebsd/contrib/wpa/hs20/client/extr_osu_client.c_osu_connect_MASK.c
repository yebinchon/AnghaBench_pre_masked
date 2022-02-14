
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_ctrl {int dummy; } ;
struct hs20_osu_client {char* ifname; int no_reconnect; scalar_t__ osu_ssid; } ;
typedef int fname ;
typedef int dir ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (struct hs20_osu_client*,char const*) ;
 int FUNC_2 (struct hs20_osu_client*,char const*) ;
 int FUNC_3 (struct wpa_ctrl*,char*,char*,int) ;
 int * FUNC_4 (char*,int) ;
 struct wpa_ctrl* FUNC_5 (char const*) ;
 int FUNC_6 (char*,int,char*,char*) ;
 scalar_t__ FUNC_7 (char const*,scalar_t__) ;
 scalar_t__ FUNC_8 (char const*) ;
 scalar_t__ FUNC_9 (char const*,int,char*,char*) ;
 scalar_t__ FUNC_10 (char const*,int,char*,char const*) ;
 int FUNC_11 (char*,int,char*,int) ;
 scalar_t__ FUNC_12 (char const*,int) ;
 scalar_t__ FUNC_13 (char const*,char*) ;
 int FUNC_14 (struct wpa_ctrl*) ;
 int FUNC_15 (struct wpa_ctrl*) ;
 int FUNC_16 (int ,char*) ;
 int FUNC_17 (struct hs20_osu_client*,char*) ;

__attribute__((used)) static int FUNC_18(struct hs20_osu_client *VAR_2, const char *VAR_3,
         const char *VAR_4, const char *VAR_5, const char *VAR_6,
         unsigned int VAR_7, int VAR_8,
         const char *VAR_9, const char *VAR_10)
{
 int VAR_11;
 const char *VAR_12 = VAR_2->ifname;
 char VAR_13[200];
 struct wpa_ctrl *VAR_14;
 int VAR_15;

 if (VAR_5 && VAR_5[0] == '\0')
  VAR_5 = ((void*)0);

 if (VAR_2->osu_ssid) {
  if (FUNC_7(VAR_4, VAR_2->osu_ssid) == 0) {
   FUNC_16(VAR_0,
       "Enforced OSU SSID matches ANQP info");
   VAR_5 = ((void*)0);
  } else if (VAR_5 && FUNC_7(VAR_5, VAR_2->osu_ssid) == 0) {
   FUNC_16(VAR_0,
       "Enforced OSU SSID matches RSN[OSEN] info");
   VAR_4 = VAR_5;
  } else {
   FUNC_16(VAR_1, "Enforced OSU SSID did not match");
   FUNC_17(VAR_2, "Enforced OSU SSID did not match");
   return -1;
  }
 }

 VAR_11 = FUNC_0(VAR_12);
 if (VAR_11 < 0)
  return -1;
 if (FUNC_10(VAR_12, VAR_11, "ssid", VAR_4) < 0)
  return -1;
 if (VAR_5)
  VAR_9 = VAR_10;
 if (VAR_9 && FUNC_8(VAR_9) > 0) {
  char VAR_16[255], VAR_17[300];
  if (FUNC_4(VAR_16, sizeof(VAR_16)) == ((void*)0))
   return -1;
  FUNC_6(VAR_17, sizeof(VAR_17), "%s/osu-ca.pem", VAR_16);

  if (VAR_5 && FUNC_10(VAR_12, VAR_11, "ssid", VAR_5) < 0)
   return -1;

  if (FUNC_9(VAR_12, VAR_11, "proto", "OSEN") < 0 ||
      FUNC_9(VAR_12, VAR_11, "key_mgmt", "OSEN") < 0 ||
      FUNC_9(VAR_12, VAR_11, "pairwise", "CCMP") < 0 ||
      FUNC_9(VAR_12, VAR_11, "group", "GTK_NOT_USED CCMP") < 0 ||
      FUNC_9(VAR_12, VAR_11, "eap", "WFA-UNAUTH-TLS") < 0 ||
      FUNC_9(VAR_12, VAR_11, "ocsp", "2") < 0 ||
      FUNC_10(VAR_12, VAR_11, "identity", VAR_9) < 0 ||
      FUNC_10(VAR_12, VAR_11, "ca_cert", VAR_17) < 0)
   return -1;
 } else if (VAR_5) {
  FUNC_16(VAR_1, "No OSU_NAI set for RSN[OSEN]");
  FUNC_17(VAR_2, "No OSU_NAI set for RSN[OSEN]");
  return -1;
 } else {
  if (FUNC_9(VAR_12, VAR_11, "key_mgmt", "NONE") < 0)
   return -1;
 }

 VAR_14 = FUNC_5(VAR_12);
 if (VAR_14 == ((void*)0))
  return -1;

 FUNC_16(VAR_1, "Associate with OSU SSID");
 FUNC_17(VAR_2, "Associate with OSU SSID");
 FUNC_11(VAR_13, sizeof(VAR_13), "SELECT_NETWORK %d", VAR_11);
 if (FUNC_13(VAR_12, VAR_13) < 0)
  return -1;

 VAR_15 = FUNC_3(VAR_14, "CTRL-EVENT-CONNECTED",
    VAR_13, sizeof(VAR_13));

 FUNC_15(VAR_14);
 FUNC_14(VAR_14);

 if (VAR_15 < 0) {
  FUNC_16(VAR_1, "Could not connect");
  FUNC_17(VAR_2, "Could not connect to OSU network");
  FUNC_16(VAR_1, "Remove OSU network connection");
  FUNC_11(VAR_13, sizeof(VAR_13), "REMOVE_NETWORK %d", VAR_11);
  FUNC_13(VAR_12, VAR_13);
  return -1;
 }

 FUNC_17(VAR_2, "Waiting for IP address for subscription registration");
 if (FUNC_12(VAR_12, 15) < 0) {
  FUNC_16(VAR_1, "Could not get IP address for WLAN - try connection anyway");
 }

 if (VAR_8) {
  if (VAR_15 < 0)
   return -1;
  FUNC_16(VAR_1, "No production connection used for testing purposes");
  FUNC_17(VAR_2, "No production connection used for testing purposes");
  return 0;
 }

 VAR_2->no_reconnect = 1;
 if (VAR_7 & 0x02) {
  FUNC_16(VAR_0, "Calling cmd_prov from osu_connect");
  VAR_15 = FUNC_2(VAR_2, VAR_6);
 } else if (VAR_7 & 0x01) {
  FUNC_16(VAR_0,
      "Calling cmd_oma_dm_prov from osu_connect");
  VAR_15 = FUNC_1(VAR_2, VAR_6);
 }

 FUNC_16(VAR_1, "Remove OSU network connection");
 FUNC_17(VAR_2, "Remove OSU network connection");
 FUNC_11(VAR_13, sizeof(VAR_13), "REMOVE_NETWORK %d", VAR_11);
 FUNC_13(VAR_12, VAR_13);

 if (VAR_15 < 0)
  return -1;

 FUNC_16(VAR_1, "Requesting reconnection with updated configuration");
 FUNC_17(VAR_2, "Requesting reconnection with updated configuration");
 if (FUNC_13(VAR_2->ifname, "INTERWORKING_SELECT auto") < 0) {
  FUNC_16(VAR_1, "Failed to request wpa_supplicant to reconnect");
  FUNC_17(VAR_2, "Failed to request wpa_supplicant to reconnect");
  return -1;
 }

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wpa_ie ;
typedef int u8 ;
struct wpa_supplicant {struct wpa_ssid* current_ssid; int eapol; int bssid; TYPE_1__* conf; } ;
struct wpa_ssid {size_t ssid_len; int key_mgmt; int ssid; } ;
struct TYPE_2__ {int ap_scan; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct wpa_supplicant*,int ) ;
 scalar_t__ FUNC_1 (struct wpa_supplicant*,int ,size_t) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *,int ,size_t) ;
 int FUNC_4 (struct wpa_supplicant*,int ,char*,...) ;
 int FUNC_5 (struct wpa_supplicant*,int *) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct wpa_supplicant*,int ,char*,...) ;
 int FUNC_8 (int *,size_t) ;
 struct wpa_ssid* FUNC_9 (struct wpa_supplicant*) ;
 int FUNC_10 (struct wpa_supplicant*) ;
 int FUNC_11 (struct wpa_supplicant*,struct wpa_ssid*) ;
 int FUNC_12 (struct wpa_supplicant*,struct wpa_ssid*) ;
 scalar_t__ FUNC_13 (struct wpa_supplicant*,int *,struct wpa_ssid*,int *,size_t*) ;
 int FUNC_14 (struct wpa_supplicant*) ;
 scalar_t__ FUNC_15 (struct wpa_supplicant*,struct wpa_ssid*) ;
 int FUNC_16 (struct wpa_supplicant*) ;
 int FUNC_17 (struct wpa_supplicant*,struct wpa_ssid*) ;

__attribute__((used)) static int FUNC_18(struct wpa_supplicant *VAR_3)
{
 struct wpa_ssid *VAR_4, *VAR_5;
 u8 VAR_6[VAR_2];
 size_t VAR_7;
 int VAR_8;

 if (VAR_3->conf->ap_scan == 1 && VAR_3->current_ssid) {
  FUNC_14(VAR_3);

  if (VAR_3->current_ssid->ssid_len == 0)
   return 0;
  VAR_8 = FUNC_5(VAR_3, VAR_6);
  if (VAR_8 < 0) {
   FUNC_7(VAR_3, VAR_1,
    "Failed to read SSID from driver");
   return 0;
  }
  VAR_7 = VAR_8;

  if (VAR_7 == VAR_3->current_ssid->ssid_len &&
      FUNC_3(VAR_6, VAR_3->current_ssid->ssid,
         VAR_7) == 0)
   return 0;

  FUNC_7(VAR_3, VAR_0,
   "Driver-initiated BSS selection changed the SSID to %s",
   FUNC_8(VAR_6, VAR_7));

 }

 FUNC_4(VAR_3, VAR_0, "Select network based on association "
  "information");
 VAR_4 = FUNC_9(VAR_3);
 if (VAR_4 == ((void*)0)) {
  FUNC_7(VAR_3, VAR_1,
   "No network configuration found for the current AP");
  return -1;
 }

 if (FUNC_15(VAR_3, VAR_4)) {
  FUNC_4(VAR_3, VAR_0, "Selected network is disabled");
  return -1;
 }

 if (FUNC_0(VAR_3, VAR_3->bssid) ||
     FUNC_1(VAR_3, VAR_4->ssid, VAR_4->ssid_len)) {
  FUNC_4(VAR_3, VAR_0, "Selected BSS is disallowed");
  return -1;
 }

 VAR_8 = FUNC_17(VAR_3, VAR_4);
 if (VAR_8 > 0) {
  FUNC_4(VAR_3, VAR_0, "Selected network is temporarily "
   "disabled for %d second(s)", VAR_8);
  return -1;
 }

 FUNC_4(VAR_3, VAR_0, "Network configuration found for the "
  "current AP");
 if (FUNC_6(VAR_4->key_mgmt)) {
  u8 VAR_9[80];
  size_t VAR_10 = sizeof(VAR_9);
  if (FUNC_13(VAR_3, ((void*)0), VAR_4,
           VAR_9, &VAR_10) < 0)
   FUNC_4(VAR_3, VAR_0, "Could not set WPA suites");
 } else {
  FUNC_12(VAR_3, VAR_4);
 }

 if (VAR_3->current_ssid && VAR_3->current_ssid != VAR_4)
  FUNC_2(VAR_3->eapol);
 VAR_5 = VAR_3->current_ssid;
 VAR_3->current_ssid = VAR_4;

 FUNC_14(VAR_3);

 FUNC_11(VAR_3, VAR_3->current_ssid);
 FUNC_10(VAR_3);
 if (VAR_5 != VAR_3->current_ssid)
  FUNC_16(VAR_3);

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct wps_credential {int mac_addr; } ;
struct wpa_supplicant {TYPE_1__* conf; int bssid; } ;
struct wpa_ssid {int proto; int pairwise_cipher; int ssid_len; int * ssid; } ;
struct wpa_ie_data {int pairwise_cipher; } ;
struct wpa_driver_capa {int key_mgmt; int enc; } ;
struct wpa_bss {int dummy; } ;
struct TYPE_2__ {int ap_scan; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct wpa_bss* FUNC_0 (struct wpa_supplicant*,int ,int *,int ) ;
 scalar_t__* FUNC_1 (struct wpa_bss*,int ) ;
 scalar_t__* FUNC_2 (struct wpa_bss*,int ) ;
 scalar_t__ FUNC_3 (struct wpa_supplicant*,struct wpa_driver_capa*) ;
 scalar_t__ FUNC_4 (scalar_t__ const*,scalar_t__ const,struct wpa_ie_data*) ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static void FUNC_6(struct wpa_supplicant *VAR_9,
      struct wpa_ssid *VAR_10,
      const struct wps_credential *VAR_11)
{
 struct wpa_driver_capa VAR_12;
 struct wpa_bss *VAR_13;
 const u8 *VAR_14;
 struct wpa_ie_data VAR_15;
 int VAR_16 = 0, VAR_17 = 0;
 if (FUNC_3(VAR_9, &VAR_12))
  return;

 if (VAR_10->ssid == ((void*)0))
  return;
 VAR_13 = FUNC_0(VAR_9, VAR_11->mac_addr, VAR_10->ssid, VAR_10->ssid_len);
 if (!VAR_13)
  VAR_13 = FUNC_0(VAR_9, VAR_9->bssid,
      VAR_10->ssid, VAR_10->ssid_len);
 if (VAR_13 == ((void*)0)) {
  FUNC_5(VAR_0, "WPS: The AP was not found from BSS "
      "table - use credential as-is");
  return;
 }

 FUNC_5(VAR_0, "WPS: AP found from BSS table");

 VAR_14 = FUNC_1(VAR_13, VAR_1);
 if (VAR_14 && FUNC_4(VAR_14, 2 + VAR_14[1], &VAR_15) == 0) {
  VAR_16 = 1;
  if (VAR_15.pairwise_cipher & VAR_2)
   VAR_17 = 1;
 } else {
  VAR_14 = FUNC_2(VAR_13, VAR_6);
  if (VAR_14 && FUNC_4(VAR_14, 2 + VAR_14[1], &VAR_15) == 0 &&
      VAR_15.pairwise_cipher & VAR_2)
   VAR_17 = 1;
 }

 if (VAR_14 == ((void*)0) && (VAR_10->proto & VAR_8) &&
     (VAR_10->pairwise_cipher & VAR_3)) {






  FUNC_5(VAR_0, "WPS: The AP did not yet advertise WPA "
      "support - use credential as-is");
  return;
 }

 if (VAR_17 && !(VAR_10->pairwise_cipher & VAR_2) &&
     (VAR_10->pairwise_cipher & VAR_3) &&
     (VAR_12.key_mgmt & VAR_5)) {
  FUNC_5(VAR_0, "WPS: Add CCMP into the credential "
      "based on scan results");
  if (VAR_9->conf->ap_scan == 1)
   VAR_10->pairwise_cipher |= VAR_2;
  else
   VAR_10->pairwise_cipher = VAR_2;
 }

 if (VAR_16 && !(VAR_10->proto & VAR_7) &&
     (VAR_10->proto & VAR_8) &&
     (VAR_12.enc & VAR_4)) {
  FUNC_5(VAR_0, "WPS: Add WPA2 into the credential "
      "based on scan results");
  if (VAR_9->conf->ap_scan == 1)
   VAR_10->proto |= VAR_7;
  else
   VAR_10->proto = VAR_7;
 }
}

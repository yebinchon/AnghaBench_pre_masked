
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef char u8 ;
struct wps_registrar {int multi_ap_backhaul_ssid_len; char* multi_ap_backhaul_ssid; char* multi_ap_backhaul_network_key; int multi_ap_backhaul_network_key_len; struct wpabuf* extra_cred; int force_per_enrollee_psk; int disable_auto_conf; scalar_t__ skip_cred_build; } ;
struct wps_credential {int ssid_len; int auth_type; int encr_type; int key_len; struct wps_credential* mac_addr; struct wps_credential* key; struct wps_credential* ssid; } ;
struct TYPE_4__ {scalar_t__ multi_ap_ext; } ;
struct wps_data {char* use_cred; char* mac_addr_e; int auth_type; int encr_type; char* new_psk; int new_psk_len; TYPE_1__* wps; struct wps_credential cred; scalar_t__ use_psk_key; TYPE_2__ peer_dev; } ;
struct wpabuf {int dummy; } ;
typedef int r ;
typedef int hex ;
typedef int dummy ;
struct TYPE_3__ {char* ssid; int ssid_len; int encr_types_rsn; int encr_types_wpa; scalar_t__ wps_state; char* psk; char* network_key; int network_key_len; struct wps_registrar* registrar; scalar_t__ psk_set; scalar_t__ ap; int encr_types; int auth_types; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 char* FUNC_0 (char*,int,int*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (struct wps_credential*,char*,int) ;
 int FUNC_4 (struct wps_credential*,int ,int) ;
 scalar_t__ FUNC_5 (char*,int) ;
 int FUNC_6 () ;
 int FUNC_7 (int ,char*,char*,int) ;
 int FUNC_8 (int ,char*,struct wpabuf*) ;
 int FUNC_9 (int ,char*,char*,int) ;
 int FUNC_10 (int ,char*,...) ;
 int FUNC_11 (char*,int,char*,int) ;
 struct wpabuf* FUNC_12 (int) ;
 int FUNC_13 (struct wpabuf*) ;
 int FUNC_14 (struct wpabuf*) ;
 int FUNC_15 (struct wpabuf*) ;
 int FUNC_16 (struct wpabuf*,int ) ;
 int FUNC_17 (struct wpabuf*,struct wpabuf*) ;
 scalar_t__ FUNC_18 (struct wpabuf*,struct wps_credential*) ;
 scalar_t__ VAR_13 ;

int FUNC_19(struct wps_data *VAR_14, struct wpabuf *VAR_15)
{
 struct wpabuf *VAR_16;
 struct wps_registrar *VAR_17 = VAR_14->wps->registrar;

 if (VAR_14->wps->registrar->skip_cred_build)
  goto skip_cred_build;

 FUNC_10(VAR_2, "WPS:  * Credential");
 if (VAR_14->use_cred) {
  FUNC_3(&VAR_14->cred, VAR_14->use_cred, sizeof(VAR_14->cred));
  goto use_provided;
 }
 FUNC_4(&VAR_14->cred, 0, sizeof(VAR_14->cred));

 if (VAR_14->peer_dev.multi_ap_ext == VAR_4 &&
     VAR_17->multi_ap_backhaul_ssid_len) {
  FUNC_10(VAR_2, "WPS: Use backhaul STA credentials");
  FUNC_3(VAR_14->cred.ssid, VAR_17->multi_ap_backhaul_ssid,
     VAR_17->multi_ap_backhaul_ssid_len);
  VAR_14->cred.ssid_len = VAR_17->multi_ap_backhaul_ssid_len;

  VAR_14->cred.auth_type = VAR_6;
  VAR_14->cred.encr_type = VAR_8;



  FUNC_3(VAR_14->cred.mac_addr, VAR_14->mac_addr_e, VAR_1);
  if (VAR_17->multi_ap_backhaul_network_key) {
   FUNC_3(VAR_14->cred.key,
      VAR_17->multi_ap_backhaul_network_key,
      VAR_17->multi_ap_backhaul_network_key_len);
   VAR_14->cred.key_len =
    VAR_17->multi_ap_backhaul_network_key_len;
  }
  goto use_provided;
 }

 FUNC_3(VAR_14->cred.ssid, VAR_14->wps->ssid, VAR_14->wps->ssid_len);
 VAR_14->cred.ssid_len = VAR_14->wps->ssid_len;


 FUNC_10(VAR_2,
     "WPS: Own auth types 0x%x - masked Enrollee auth types 0x%x",
     VAR_14->wps->auth_types, VAR_14->auth_type);
 if (VAR_14->auth_type & VAR_6)
  VAR_14->auth_type = VAR_6;
 else if (VAR_14->auth_type & VAR_7)
  VAR_14->auth_type = VAR_7;
 else if (VAR_14->auth_type & VAR_5)
  VAR_14->auth_type = VAR_5;
 else {
  FUNC_10(VAR_2, "WPS: Unsupported auth_type 0x%x",
      VAR_14->auth_type);
  return -1;
 }
 VAR_14->cred.auth_type = VAR_14->auth_type;

 FUNC_10(VAR_2,
     "WPS: Own encr types 0x%x (rsn: 0x%x, wpa: 0x%x) - masked Enrollee encr types 0x%x",
     VAR_14->wps->encr_types, VAR_14->wps->encr_types_rsn,
     VAR_14->wps->encr_types_wpa, VAR_14->encr_type);
 if (VAR_14->wps->ap && VAR_14->auth_type == VAR_6)
  VAR_14->encr_type &= VAR_14->wps->encr_types_rsn;
 else if (VAR_14->wps->ap && VAR_14->auth_type == VAR_7)
  VAR_14->encr_type &= VAR_14->wps->encr_types_wpa;
 if (VAR_14->auth_type == VAR_6 ||
     VAR_14->auth_type == VAR_7) {
  if (VAR_14->encr_type & VAR_8)
   VAR_14->encr_type = VAR_8;
  else if (VAR_14->encr_type & VAR_10)
   VAR_14->encr_type = VAR_10;
  else {
   FUNC_10(VAR_2, "WPS: No suitable encryption "
       "type for WPA/WPA2");
   return -1;
  }
 } else {
  if (VAR_14->encr_type & VAR_9)
   VAR_14->encr_type = VAR_9;




  else {
   FUNC_10(VAR_2, "WPS: No suitable encryption "
       "type for non-WPA/WPA2 mode");
   return -1;
  }
 }
 VAR_14->cred.encr_type = VAR_14->encr_type;



 FUNC_3(VAR_14->cred.mac_addr, VAR_14->mac_addr_e, VAR_1);

 if (VAR_14->wps->wps_state == VAR_12 && VAR_14->wps->ap &&
     !VAR_14->wps->registrar->disable_auto_conf) {
  u8 VAR_18[16];

  if (FUNC_6() != 1 ||
      FUNC_5(VAR_18, sizeof(VAR_18)) < 0) {
   FUNC_10(VAR_3,
       "WPS: Could not generate random PSK");
   return -1;
  }
  FUNC_1(VAR_14->new_psk);
  VAR_14->new_psk = FUNC_0(VAR_18, sizeof(VAR_18), &VAR_14->new_psk_len);
  if (VAR_14->new_psk == ((void*)0))
   return -1;
  VAR_14->new_psk_len--;
  while (VAR_14->new_psk_len &&
         VAR_14->new_psk[VAR_14->new_psk_len - 1] == '=')
   VAR_14->new_psk_len--;
  FUNC_7(VAR_2, "WPS: Generated passphrase",
          VAR_14->new_psk, VAR_14->new_psk_len);
  FUNC_3(VAR_14->cred.key, VAR_14->new_psk, VAR_14->new_psk_len);
  VAR_14->cred.key_len = VAR_14->new_psk_len;
 } else if (!VAR_14->wps->registrar->force_per_enrollee_psk &&
     VAR_14->use_psk_key && VAR_14->wps->psk_set) {
  char VAR_19[65];
  FUNC_10(VAR_2, "WPS: Use PSK format for Network Key");
  FUNC_11(VAR_19, sizeof(VAR_19), VAR_14->wps->psk, 32);
  FUNC_3(VAR_14->cred.key, VAR_19, 32 * 2);
  VAR_14->cred.key_len = 32 * 2;
 } else if (!VAR_14->wps->registrar->force_per_enrollee_psk &&
     VAR_14->wps->network_key) {
  FUNC_3(VAR_14->cred.key, VAR_14->wps->network_key,
     VAR_14->wps->network_key_len);
  VAR_14->cred.key_len = VAR_14->wps->network_key_len;
 } else if (VAR_14->auth_type & (VAR_7 | VAR_6)) {
  char VAR_20[65];

  FUNC_1(VAR_14->new_psk);
  VAR_14->new_psk_len = 32;
  VAR_14->new_psk = FUNC_2(VAR_14->new_psk_len);
  if (VAR_14->new_psk == ((void*)0))
   return -1;
  if (FUNC_6() != 1 ||
      FUNC_5(VAR_14->new_psk, VAR_14->new_psk_len) < 0) {
   FUNC_10(VAR_3,
       "WPS: Could not generate random PSK");
   FUNC_1(VAR_14->new_psk);
   VAR_14->new_psk = ((void*)0);
   return -1;
  }
  FUNC_9(VAR_2, "WPS: Generated per-device PSK",
    VAR_14->new_psk, VAR_14->new_psk_len);
  FUNC_11(VAR_20, sizeof(VAR_20), VAR_14->new_psk,
     VAR_14->new_psk_len);
  FUNC_3(VAR_14->cred.key, VAR_20, VAR_14->new_psk_len * 2);
  VAR_14->cred.key_len = VAR_14->new_psk_len * 2;
 }

use_provided:
 VAR_16 = FUNC_12(200);
 if (VAR_16 == ((void*)0))
  return -1;

 if (FUNC_18(VAR_16, &VAR_14->cred)) {
  FUNC_13(VAR_16);
  return -1;
 }

 FUNC_16(VAR_15, VAR_0);
 FUNC_16(VAR_15, FUNC_15(VAR_16));
 FUNC_17(VAR_15, VAR_16);
 FUNC_13(VAR_16);

skip_cred_build:
 if (VAR_14->wps->registrar->extra_cred) {
  FUNC_10(VAR_2, "WPS:  * Credential (pre-configured)");
  FUNC_17(VAR_15, VAR_14->wps->registrar->extra_cred);
 }

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {int drv_flags; int conf; } ;
struct wpa_ssid {int disabled; void* ssid_len; int key_mgmt; int export_keys; int id; void* psk; int psk_set; int ieee80211w; int dpp_netaccesskey_expiry; void* dpp_netaccesskey_len; void* dpp_netaccesskey; void* dpp_csign_len; void* dpp_csign; int dpp_connector; void* ssid; } ;
struct wpa_driver_capa {int key_mgmt; } ;
struct dpp_authentication {scalar_t__ akm; void* ssid_len; int psk; int psk_set; scalar_t__* passphrase; scalar_t__ connector; int net_access_key_expiry; scalar_t__ net_access_key; scalar_t__ c_sign_key; int ssid; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 void* FUNC_2 (void*) ;
 int FUNC_3 (void*,int ,void*) ;
 int FUNC_4 (scalar_t__) ;
 struct wpa_ssid* FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct wpa_ssid*) ;
 scalar_t__ FUNC_8 (struct wpa_ssid*,char*,scalar_t__*) ;
 int FUNC_9 (struct wpa_ssid*) ;
 int FUNC_10 (struct wpa_supplicant*,struct wpa_driver_capa*) ;
 int FUNC_11 (int ,char*) ;
 int FUNC_12 (scalar_t__) ;
 void* FUNC_13 (scalar_t__) ;
 int FUNC_14 (struct wpa_supplicant*,struct wpa_ssid*) ;
 int FUNC_15 (struct wpa_supplicant*,struct wpa_ssid*) ;

__attribute__((used)) static struct wpa_ssid * FUNC_16(struct wpa_supplicant *VAR_13,
           struct dpp_authentication *VAR_14)
{
 struct wpa_ssid *VAR_15;
 VAR_15 = FUNC_5(VAR_13->conf);
 if (!VAR_15)
  return ((void*)0);
 FUNC_14(VAR_13, VAR_15);
 FUNC_7(VAR_15);
 VAR_15->disabled = 1;

 VAR_15->ssid = FUNC_2(VAR_14->ssid_len);
 if (!VAR_15->ssid)
  goto fail;
 FUNC_3(VAR_15->ssid, VAR_14->ssid, VAR_14->ssid_len);
 VAR_15->ssid_len = VAR_14->ssid_len;

 if (VAR_14->connector) {
  VAR_15->key_mgmt = VAR_7;
  VAR_15->ieee80211w = VAR_2;
  VAR_15->dpp_connector = FUNC_4(VAR_14->connector);
  if (!VAR_15->dpp_connector)
   goto fail;
 }

 if (VAR_14->c_sign_key) {
  VAR_15->dpp_csign = FUNC_2(FUNC_13(VAR_14->c_sign_key));
  if (!VAR_15->dpp_csign)
   goto fail;
  FUNC_3(VAR_15->dpp_csign, FUNC_12(VAR_14->c_sign_key),
     FUNC_13(VAR_14->c_sign_key));
  VAR_15->dpp_csign_len = FUNC_13(VAR_14->c_sign_key);
 }

 if (VAR_14->net_access_key) {
  VAR_15->dpp_netaccesskey =
   FUNC_2(FUNC_13(VAR_14->net_access_key));
  if (!VAR_15->dpp_netaccesskey)
   goto fail;
  FUNC_3(VAR_15->dpp_netaccesskey,
     FUNC_12(VAR_14->net_access_key),
     FUNC_13(VAR_14->net_access_key));
  VAR_15->dpp_netaccesskey_len = FUNC_13(VAR_14->net_access_key);
  VAR_15->dpp_netaccesskey_expiry = VAR_14->net_access_key_expiry;
 }

 if (!VAR_14->connector || FUNC_0(VAR_14->akm) ||
     FUNC_1(VAR_14->akm)) {
  if (!VAR_14->connector)
   VAR_15->key_mgmt = 0;
  if (FUNC_0(VAR_14->akm))
   VAR_15->key_mgmt |= VAR_10 |
    VAR_11 | VAR_8;
  if (FUNC_1(VAR_14->akm))
   VAR_15->key_mgmt |= VAR_12 |
    VAR_9;
  VAR_15->ieee80211w = VAR_1;
  if (VAR_14->passphrase[0]) {
   if (FUNC_8(VAR_15, "psk",
        VAR_14->passphrase) < 0)
    goto fail;
   FUNC_9(VAR_15);
   VAR_15->export_keys = 1;
  } else {
   VAR_15->psk_set = VAR_14->psk_set;
   FUNC_3(VAR_15->psk, VAR_14->psk, VAR_4);
  }
 }

 return VAR_15;
fail:
 FUNC_15(VAR_13, VAR_15);
 FUNC_6(VAR_13->conf, VAR_15->id);
 return ((void*)0);
}

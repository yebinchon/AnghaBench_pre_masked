
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wps_credential {int ssid_len; int auth_type; int encr_type; int key_len; scalar_t__ key; scalar_t__ ssid; } ;
struct hostapd_wpa_psk {int dummy; } ;
struct hostapd_data {int iface; struct hostapd_bss_config* conf; TYPE_1__* iconf; } ;
struct TYPE_5__ {int ssid_len; int ssid_set; int * wpa_passphrase; TYPE_3__* wpa_psk; int * ssid; } ;
struct hostapd_bss_config {int wps_state; int wpa; scalar_t__ ieee80211w; int sae_require_mfp; int auth_algs; TYPE_2__ ssid; int wpa_key_mgmt; scalar_t__ wps_cred_add_sae; int rsn_pairwise; int wpa_pairwise; int wpa_group; } ;
struct TYPE_6__ {int group; int psk; } ;
struct TYPE_4__ {scalar_t__ hw_mode; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (int ,int,int ,int ,int *) ;
 scalar_t__ FUNC_1 (char const*,int ,int) ;
 int FUNC_2 (TYPE_3__**) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,scalar_t__,int) ;
 void* FUNC_5 (int) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int,int ,int ) ;
 int VAR_18 ;

__attribute__((used)) static int FUNC_8(struct hostapd_data *VAR_19,
           const struct wps_credential *VAR_20)
{
 struct hostapd_bss_config *VAR_21 = VAR_19->conf;

 FUNC_6(VAR_2, "WPS: Updating in-memory configuration");

 VAR_21->wps_state = 2;
 if (VAR_20->ssid_len <= VAR_5) {
  FUNC_4(VAR_21->ssid.ssid, VAR_20->ssid, VAR_20->ssid_len);
  VAR_21->ssid.ssid_len = VAR_20->ssid_len;
  VAR_21->ssid.ssid_set = 1;
 }

 if ((VAR_20->auth_type & (VAR_13 | VAR_14)) &&
     (VAR_20->auth_type & (VAR_12 | VAR_15)))
  VAR_21->wpa = 3;
 else if (VAR_20->auth_type & (VAR_13 | VAR_14))
  VAR_21->wpa = 2;
 else if (VAR_20->auth_type & (VAR_12 | VAR_15))
  VAR_21->wpa = 1;
 else
  VAR_21->wpa = 0;

 if (VAR_21->wpa) {
  if (VAR_20->auth_type & (VAR_13 | VAR_12))
   VAR_21->wpa_key_mgmt = VAR_9;
  if (VAR_20->auth_type & (VAR_14 | VAR_15))
   VAR_21->wpa_key_mgmt = VAR_10;

  VAR_21->wpa_pairwise = 0;
  if (VAR_20->encr_type & VAR_16) {
   if (VAR_19->iconf->hw_mode == VAR_0)
    VAR_21->wpa_pairwise |= VAR_7;
   else
    VAR_21->wpa_pairwise |= VAR_6;
  }
  if (VAR_20->encr_type & VAR_17)
   VAR_21->wpa_pairwise |= VAR_8;
  VAR_21->rsn_pairwise = VAR_21->wpa_pairwise;
  VAR_21->wpa_group = FUNC_7(VAR_21->wpa,
           VAR_21->wpa_pairwise,
           VAR_21->rsn_pairwise);

  if (VAR_19->conf->wps_cred_add_sae &&
      (VAR_20->auth_type & VAR_14) &&
      VAR_20->key_len != 2 * VAR_4) {
   VAR_21->wpa_key_mgmt |= VAR_11;






  }

  if (VAR_20->key_len >= 8 && VAR_20->key_len < 64) {
   FUNC_3(VAR_21->ssid.wpa_passphrase);
   VAR_21->ssid.wpa_passphrase = FUNC_5(VAR_20->key_len + 1);
   if (VAR_21->ssid.wpa_passphrase)
    FUNC_4(VAR_21->ssid.wpa_passphrase, VAR_20->key,
       VAR_20->key_len);
   FUNC_2(&VAR_21->ssid.wpa_psk);
  } else if (VAR_20->key_len == 64) {
   FUNC_2(&VAR_21->ssid.wpa_psk);
   VAR_21->ssid.wpa_psk =
    FUNC_5(sizeof(struct hostapd_wpa_psk));
   if (VAR_21->ssid.wpa_psk &&
       FUNC_1((const char *) VAR_20->key,
           VAR_21->ssid.wpa_psk->psk, VAR_4) == 0) {
    VAR_21->ssid.wpa_psk->group = 1;
    FUNC_3(VAR_21->ssid.wpa_passphrase);
    VAR_21->ssid.wpa_passphrase = ((void*)0);
   }
  }
  VAR_21->auth_algs = 1;
 } else {




  VAR_21->auth_algs = 1;
 }




 FUNC_0(0, 100000, VAR_18, VAR_19->iface,
          ((void*)0));

 return 0;
}

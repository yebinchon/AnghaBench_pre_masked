
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wpa_priv_interface {int * drv_priv; TYPE_1__* driver; } ;
struct wpa_driver_auth_params {scalar_t__ ssid_len; size_t ie_len; size_t auth_data_len; int * auth_data; int * ie; int p2p; int local_state_change; int wep_tx_keyidx; scalar_t__* wep_key_len; int * wep_key; int auth_alg; int ssid; int bssid; int freq; } ;
struct privsep_cmd_authenticate {int ie_len; int auth_data_len; scalar_t__ ssid_len; int p2p; int local_state_change; int wep_tx_keyidx; scalar_t__* wep_key_len; int * wep_key; int auth_alg; int ssid; int bssid; int freq; } ;
typedef int params ;
struct TYPE_2__ {int (* authenticate ) (int *,struct wpa_driver_auth_params*) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct wpa_driver_auth_params*,int ,int) ;
 int FUNC_1 (int *,struct wpa_driver_auth_params*) ;
 int FUNC_2 (int ,char*,...) ;

__attribute__((used)) static void FUNC_3(struct wpa_priv_interface *VAR_2,
          void *VAR_3, size_t VAR_4)
{
 struct wpa_driver_auth_params VAR_5;
 struct privsep_cmd_authenticate *VAR_6;
 int VAR_7, VAR_8;

 if (VAR_2->drv_priv == ((void*)0) || VAR_2->driver->authenticate == ((void*)0))
  return;

 if (VAR_4 < sizeof(*VAR_6)) {
  FUNC_2(VAR_0, "Invalid authentication request");
  return;
 }

 VAR_6 = VAR_3;
 if (sizeof(*VAR_6) + VAR_6->ie_len + VAR_6->auth_data_len > VAR_4) {
  FUNC_2(VAR_0, "Authentication request overflow");
  return;
 }

 FUNC_0(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.freq = VAR_6->freq;
 VAR_5.bssid = VAR_6->bssid;
 VAR_5.ssid = VAR_6->ssid;
 if (VAR_6->ssid_len > VAR_1)
  return;
 VAR_5.ssid_len = VAR_6->ssid_len;
 VAR_5.auth_alg = VAR_6->auth_alg;
 for (VAR_8 = 0; VAR_8 < 4; VAR_8++) {
  if (VAR_6->wep_key_len[VAR_8]) {
   VAR_5.wep_key[VAR_8] = VAR_6->wep_key[VAR_8];
   VAR_5.wep_key_len[VAR_8] = VAR_6->wep_key_len[VAR_8];
  }
 }
 VAR_5.wep_tx_keyidx = VAR_6->wep_tx_keyidx;
 VAR_5.local_state_change = VAR_6->local_state_change;
 VAR_5.p2p = VAR_6->p2p;
 if (VAR_6->ie_len) {
  VAR_5.ie = (u8 *) (VAR_6 + 1);
  VAR_5.ie_len = VAR_6->ie_len;
 }
 if (VAR_6->auth_data_len) {
  VAR_5.auth_data = ((u8 *) (VAR_6 + 1)) + VAR_6->ie_len;
  VAR_5.auth_data_len = VAR_6->auth_data_len;
 }

 VAR_7 = VAR_2->driver->authenticate(VAR_2->drv_priv, &VAR_5);
 FUNC_2(VAR_0, "drv->authenticate: res=%d", VAR_7);
}

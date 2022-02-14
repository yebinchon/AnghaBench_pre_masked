
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct wpa_priv_interface {int * drv_priv; TYPE_2__* driver; } ;
struct TYPE_3__ {int channel; int freq; int mode; } ;
struct wpa_driver_associate_params {int* bssid; scalar_t__ ssid_len; int* wpa_ie; size_t wpa_ie_len; int mode; int auth_alg; int key_mgmt_suite; int group_suite; int pairwise_suite; TYPE_1__ freq; int ssid; } ;
struct privsep_cmd_associate {int wpa_ie_len; int* bssid; scalar_t__ ssid_len; int mode; int auth_alg; int key_mgmt_suite; int group_suite; int pairwise_suite; int channel; int freq; int hwmode; int ssid; } ;
typedef int params ;
struct TYPE_4__ {int (* associate ) (int *,struct wpa_driver_associate_params*) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct wpa_driver_associate_params*,int ,int) ;
 int FUNC_1 (int *,struct wpa_driver_associate_params*) ;
 int FUNC_2 (int ,char*,...) ;

__attribute__((used)) static void FUNC_3(struct wpa_priv_interface *VAR_2,
       void *VAR_3, size_t VAR_4)
{
 struct wpa_driver_associate_params VAR_5;
 struct privsep_cmd_associate *VAR_6;
 u8 *VAR_7;
 int VAR_8;

 if (VAR_2->drv_priv == ((void*)0) || VAR_2->driver->associate == ((void*)0))
  return;

 if (VAR_4 < sizeof(*VAR_6)) {
  FUNC_2(VAR_0, "Invalid association request");
  return;
 }

 VAR_6 = VAR_3;
 if (sizeof(*VAR_6) + VAR_6->wpa_ie_len > VAR_4) {
  FUNC_2(VAR_0, "Association request overflow");
  return;
 }

 FUNC_0(&VAR_5, 0, sizeof(VAR_5));
 VAR_7 = VAR_6->bssid;
 if (VAR_7[0] | VAR_7[1] | VAR_7[2] | VAR_7[3] | VAR_7[4] | VAR_7[5])
  VAR_5.bssid = VAR_7;
 VAR_5.ssid = VAR_6->ssid;
 if (VAR_6->ssid_len > VAR_1)
  return;
 VAR_5.ssid_len = VAR_6->ssid_len;
 VAR_5.freq.mode = VAR_6->hwmode;
 VAR_5.freq.freq = VAR_6->freq;
 VAR_5.freq.channel = VAR_6->channel;
 if (VAR_6->wpa_ie_len) {
  VAR_5.wpa_ie = (u8 *) (VAR_6 + 1);
  VAR_5.wpa_ie_len = VAR_6->wpa_ie_len;
 }
 VAR_5.pairwise_suite = VAR_6->pairwise_suite;
 VAR_5.group_suite = VAR_6->group_suite;
 VAR_5.key_mgmt_suite = VAR_6->key_mgmt_suite;
 VAR_5.auth_alg = VAR_6->auth_alg;
 VAR_5.mode = VAR_6->mode;

 VAR_8 = VAR_2->driver->associate(VAR_2->drv_priv, &VAR_5);
 FUNC_2(VAR_0, "drv->associate: res=%d", VAR_8);
}

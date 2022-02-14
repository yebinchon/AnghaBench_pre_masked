
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int num_modes; struct hostapd_hw_modes* modes; } ;
struct wpa_supplicant {scalar_t__ wpa_state; scalar_t__ assoc_freq; struct wpa_supplicant* next; TYPE_3__* global; TYPE_1__ hw; } ;
struct wpa_ssid {int frequency; int ht40; scalar_t__ he; int mode; scalar_t__ vht; scalar_t__ p2p_group; scalar_t__ ht; scalar_t__ disable_ht; } ;
struct hostapd_hw_modes {scalar_t__ mode; int ht_capab; TYPE_2__* he_capab; int vht_capab; } ;
struct hostapd_config {scalar_t__ hw_mode; int ieee80211n; int ht_capab; int secondary_channel; int ieee80211ac; int ieee80211ax; int no_pri_sec_switch; int vht_capab; int channel; } ;
struct TYPE_6__ {struct wpa_supplicant* ifaces; } ;
struct TYPE_5__ {scalar_t__ he_supported; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_0 (int,int *) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct wpa_supplicant*,struct wpa_ssid*,struct hostapd_config*,struct hostapd_hw_modes*) ;
 size_t FUNC_3 (int ) ;
 int FUNC_4 (struct wpa_supplicant*,struct hostapd_hw_modes*,int ) ;

int FUNC_5(struct wpa_supplicant *VAR_12,
         struct wpa_ssid *VAR_13,
         struct hostapd_config *VAR_14)
{
 VAR_14->hw_mode = FUNC_0(VAR_13->frequency,
            &VAR_14->channel);

 if (VAR_14->hw_mode == VAR_10) {
  FUNC_1(VAR_9, "Unsupported AP mode frequency: %d MHz",
      VAR_13->frequency);
  return -1;
 }
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int num_modes; int modes; } ;
struct wpa_supplicant {int* own_addr; int assoc_freq; int ifname; TYPE_2__* conf; TYPE_1__ hw; struct wpa_ssid* current_ssid; int drv_priv; int driver; struct hostapd_iface* ifmsh; int drv_flags; } ;
struct wpa_ssid {int frequency; int ht40; scalar_t__ max_oper_chwidth; int vht_center_freq2; int* mesh_basic_rates; scalar_t__ vht; } ;
struct mesh_conf {int dummy; } ;
struct hostapd_iface {int num_bss; struct mesh_conf* mconf; struct hostapd_data** bss; struct hostapd_config* conf; int drv_flags; } ;
struct hostapd_freq_params {int freq; int sec_channel_offset; } ;
struct hostapd_data {int* own_addr; TYPE_3__* conf; int dot11RSNASAERetransPeriod; int max_plinks; struct hostapd_config* iconf; int mesh_sta_free_cb; struct hostapd_iface* iface; int drv_priv; int driver; struct wpa_supplicant* msg_ctx; } ;
struct hostapd_config {int ieee80211h; int ieee80211d; char* country; scalar_t__ hw_mode; int channel; int secondary_channel; scalar_t__ vht_oper_chwidth; int vht_oper_centr_freq_seg0_idx; int vht_oper_centr_freq_seg1_idx; int* basic_rates; TYPE_3__** bss; } ;
typedef int basic_rates_erp ;
struct TYPE_6__ {int start_disabled; int iface; int ap_max_inactivity; int mesh; } ;
struct TYPE_5__ {char* country; int dot11RSNASAERetransPeriod; int max_peer_links; int mesh_max_inactivity; int user_mpm; } ;





 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 struct hostapd_data* FUNC_0 (int *,int *,int *) ;
 struct hostapd_iface* FUNC_1 () ;
 struct hostapd_config* FUNC_2 () ;
 scalar_t__ FUNC_3 (struct hostapd_iface*) ;
 scalar_t__ FUNC_4 (int,int*) ;
 scalar_t__ FUNC_5 (int,int ,int ) ;
 struct mesh_conf* FUNC_6 (struct wpa_supplicant*,struct wpa_ssid*) ;
 int VAR_10 ;
 void* FUNC_7 (int,int) ;
 int FUNC_8 (int*,int*,int) ;
 int* FUNC_9 (int*,int) ;
 int FUNC_10 (int ,int ,int) ;
 scalar_t__ FUNC_11 (struct wpa_supplicant*) ;
 int FUNC_12 (struct wpa_supplicant*,int ,char*) ;
 int FUNC_13 (int ,char*,...) ;
 int FUNC_14 (struct wpa_supplicant*,struct wpa_ssid*,struct hostapd_config*) ;
 int FUNC_15 (struct wpa_supplicant*) ;

__attribute__((used)) static int FUNC_16(struct wpa_supplicant *VAR_11,
        struct wpa_ssid *VAR_12,
        struct hostapd_freq_params *VAR_13)
{
 struct hostapd_iface *VAR_14;
 struct hostapd_data *VAR_15;
 struct hostapd_config *VAR_16;
 struct mesh_conf *VAR_17;
 int VAR_18[] = { 10, 20, 55, 60, 110, 120, 240, -1 };
 int VAR_19;
 int VAR_20;

 if (!VAR_11->conf->user_mpm) {

  FUNC_12(VAR_11, VAR_8,
   "user_mpm is not enabled in configuration");
  return 0;
 }

 VAR_11->ifmsh = VAR_14 = FUNC_1();
 if (!VAR_14)
  return -VAR_1;

 VAR_14->drv_flags = VAR_11->drv_flags;
 VAR_14->num_bss = 1;
 VAR_14->bss = FUNC_7(VAR_11->ifmsh->num_bss,
          sizeof(struct hostapd_data *));
 if (!VAR_14->bss)
  goto out_free;

 VAR_14->bss[0] = VAR_15 = FUNC_0(((void*)0), ((void*)0), ((void*)0));
 if (!VAR_15)
  goto out_free;

 VAR_14->bss[0]->msg_ctx = VAR_11;
 FUNC_8(VAR_15->own_addr, VAR_11->own_addr, VAR_2);
 VAR_15->driver = VAR_11->driver;
 VAR_15->drv_priv = VAR_11->drv_priv;
 VAR_15->iface = VAR_14;
 VAR_15->mesh_sta_free_cb = VAR_10;
 VAR_20 = VAR_12->frequency;
 if (VAR_20 != VAR_13->freq &&
     VAR_20 == VAR_13->freq + VAR_13->sec_channel_offset * 20) {
  FUNC_13(VAR_6, "mesh: pri/sec channels switched");
  VAR_20 = VAR_13->freq;
 }
 VAR_11->assoc_freq = VAR_20;
 VAR_11->current_ssid = VAR_12;


 VAR_16 = FUNC_2();
 if (!VAR_16)
  goto out_free;

 VAR_15->conf = *VAR_16->bss;
 VAR_15->conf->start_disabled = 1;
 VAR_15->conf->mesh = VAR_5;
 VAR_15->conf->ap_max_inactivity = VAR_11->conf->mesh_max_inactivity;

 if (FUNC_5(VAR_12->frequency, VAR_11->hw.modes,
        VAR_11->hw.num_modes) && VAR_11->conf->country[0]) {
  VAR_16->ieee80211h = 1;
  VAR_16->ieee80211d = 1;
  VAR_16->country[0] = VAR_11->conf->country[0];
  VAR_16->country[1] = VAR_11->conf->country[1];
  VAR_16->country[2] = ' ';
 }

 VAR_15->iconf = VAR_16;
 VAR_14->conf = VAR_16;

 VAR_14->bss[0]->max_plinks = VAR_11->conf->max_peer_links;
 VAR_14->bss[0]->dot11RSNASAERetransPeriod =
  VAR_11->conf->dot11RSNASAERetransPeriod;
 FUNC_10(VAR_15->conf->iface, VAR_11->ifname, sizeof(VAR_15->conf->iface));

 VAR_17 = FUNC_6(VAR_11, VAR_12);
 if (!VAR_17)
  goto out_free;
 VAR_14->mconf = VAR_17;


 VAR_16->hw_mode = FUNC_4(VAR_20, &VAR_16->channel);
 if (VAR_16->hw_mode == VAR_9) {
  FUNC_13(VAR_7, "Unsupported mesh mode frequency: %d MHz",
      VAR_20);
  goto out_free;
 }
 if (VAR_12->ht40)
  VAR_16->secondary_channel = VAR_12->ht40;
 if (VAR_16->hw_mode == VAR_3 && VAR_12->vht) {
  if (VAR_12->max_oper_chwidth != VAR_0)
   VAR_16->vht_oper_chwidth = VAR_12->max_oper_chwidth;
  switch (VAR_16->vht_oper_chwidth) {
  case 129:
  case 128:
   FUNC_4(
    VAR_20,
    &VAR_16->vht_oper_centr_freq_seg0_idx);
   VAR_16->vht_oper_centr_freq_seg0_idx += VAR_12->ht40 * 2;
   break;
  case 130:
   FUNC_4(
    VAR_20,
    &VAR_16->vht_oper_centr_freq_seg0_idx);
   VAR_16->vht_oper_centr_freq_seg0_idx += VAR_12->ht40 * 2;
   VAR_16->vht_oper_centr_freq_seg0_idx += 40 / 5;
   break;
  }
  FUNC_4(VAR_12->vht_center_freq2,
           &VAR_16->vht_oper_centr_freq_seg1_idx);
 }

 if (VAR_12->mesh_basic_rates == ((void*)0)) {







  if (VAR_16->hw_mode == VAR_4) {
   VAR_16->basic_rates = FUNC_9(VAR_18,
            sizeof(VAR_18));
   if (!VAR_16->basic_rates)
    goto out_free;
  }
 } else {
  VAR_19 = 0;
  while (1) {
   if (VAR_12->mesh_basic_rates[VAR_19] < 1)
    break;
   VAR_19++;
  }
  VAR_16->basic_rates = FUNC_7(VAR_19 + 1, sizeof(int));
  if (VAR_16->basic_rates == ((void*)0))
   goto out_free;
  FUNC_8(VAR_16->basic_rates, VAR_12->mesh_basic_rates,
     VAR_19 * sizeof(int));
  VAR_16->basic_rates[VAR_19] = -1;
 }

 if (FUNC_11(VAR_11)) {
  FUNC_12(VAR_11, VAR_7, "Failed to init mesh in driver");
  return -1;
 }

 if (FUNC_3(VAR_14)) {
  FUNC_13(VAR_7,
      "Failed to initialize hostapd interface for mesh");
  return -1;
 }

 FUNC_14(VAR_11, VAR_12, VAR_16);

 return 0;
out_free:
 FUNC_15(VAR_11);
 return -VAR_1;
}

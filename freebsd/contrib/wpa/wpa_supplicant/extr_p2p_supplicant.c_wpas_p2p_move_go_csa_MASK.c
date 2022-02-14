
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct wpa_supplicant {int drv_flags; TYPE_2__* ap_iface; struct wpa_ssid* current_ssid; } ;
struct wpa_ssid {int frequency; } ;
struct p2p_go_neg_results {int freq; } ;
struct hostapd_config {scalar_t__ hw_mode; int vht_oper_chwidth; scalar_t__ ieee80211ac; int vht_oper_centr_freq_seg1_idx; int vht_oper_centr_freq_seg0_idx; scalar_t__ secondary_channel; int ieee80211n; } ;
struct TYPE_6__ {int freq; int bandwidth; int center_freq1; int center_freq2; scalar_t__ vht_enabled; int ht_enabled; scalar_t__ sec_channel_offset; } ;
struct csa_settings {TYPE_3__ freq_params; int block_tx; int cs_count; } ;
typedef int csa_settings ;
struct TYPE_5__ {TYPE_1__* current_mode; } ;
struct TYPE_4__ {scalar_t__ mode; } ;





 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct wpa_supplicant*,struct csa_settings*) ;
 struct hostapd_config* FUNC_1 () ;
 int FUNC_2 (struct hostapd_config*) ;
 int FUNC_3 (int *,int ,int ) ;
 scalar_t__ FUNC_4 (int,scalar_t__,int,int *,int *) ;
 int FUNC_5 (struct csa_settings*,int ,int) ;
 int FUNC_6 (struct wpa_supplicant*,int ,char*) ;
 int FUNC_7 (int ,char*) ;
 scalar_t__ FUNC_8 (struct wpa_supplicant*,struct wpa_ssid*,struct hostapd_config*) ;
 scalar_t__ FUNC_9 (struct wpa_supplicant*,struct p2p_go_neg_results*,int ,int ,int ,int ,int ,int ,int *) ;

__attribute__((used)) static int FUNC_10(struct wpa_supplicant *VAR_6)
{
 struct hostapd_config *VAR_7;
 struct p2p_go_neg_results VAR_8;
 struct csa_settings VAR_9;
 struct wpa_ssid *VAR_10 = VAR_6->current_ssid;
 int VAR_11 = VAR_10->frequency;
 int VAR_12;

 if (!(VAR_6->drv_flags & VAR_5)) {
  FUNC_6(VAR_6, VAR_0, "CSA is not enabled");
  return -1;
 }





 if (FUNC_9(VAR_6, &VAR_8, 0, 0, 0, 0, 0, 0, ((void*)0))) {
  FUNC_6(VAR_6, VAR_0,
   "P2P CSA: Failed to select new frequency for GO");
  return -1;
 }

 if (VAR_10->frequency == VAR_8.freq) {
  FUNC_6(VAR_6, VAR_0,
   "P2P CSA: Selected same frequency - not moving GO");
  return 0;
 }

 VAR_7 = FUNC_1();
 if (!VAR_7) {
  FUNC_6(VAR_6, VAR_0,
   "P2P CSA: Failed to allocate default config");
  return -1;
 }

 VAR_10->frequency = VAR_8.freq;
 if (FUNC_8(VAR_6, VAR_10, VAR_7)) {
  FUNC_6(VAR_6, VAR_0,
   "P2P CSA: Failed to create new GO config");
  VAR_12 = -1;
  goto out;
 }

 if (VAR_7->hw_mode != VAR_6->ap_iface->current_mode->mode) {
  FUNC_6(VAR_6, VAR_0,
   "P2P CSA: CSA to a different band is not supported");
  VAR_12 = -1;
  goto out;
 }

 FUNC_5(&VAR_9, 0, sizeof(VAR_9));
 VAR_9.cs_count = VAR_4;
 VAR_9.block_tx = VAR_3;
 VAR_9.freq_params.freq = VAR_8.freq;
 VAR_9.freq_params.sec_channel_offset = VAR_7->secondary_channel;
 VAR_9.freq_params.ht_enabled = VAR_7->ieee80211n;
 VAR_9.freq_params.bandwidth = VAR_7->secondary_channel ? 40 : 20;

 if (VAR_7->ieee80211ac) {
  int VAR_13 = 0, VAR_14 = 0;
  u8 VAR_15, VAR_16;

  if (FUNC_4(VAR_8.freq,
        VAR_7->secondary_channel,
        VAR_7->vht_oper_chwidth,
        &VAR_16, &VAR_15) ==
      VAR_2) {
   FUNC_7(VAR_1, "P2P CSA: Bad freq");
   VAR_12 = -1;
   goto out;
  }

  if (VAR_7->vht_oper_centr_freq_seg0_idx)
   VAR_13 = FUNC_3(
    ((void*)0), VAR_16,
    VAR_7->vht_oper_centr_freq_seg0_idx);

  if (VAR_7->vht_oper_centr_freq_seg1_idx)
   VAR_14 = FUNC_3(
    ((void*)0), VAR_16,
    VAR_7->vht_oper_centr_freq_seg1_idx);

  if (VAR_13 < 0 || VAR_14 < 0) {
   FUNC_6(VAR_6, VAR_0,
    "P2P CSA: Selected invalid VHT center freqs");
   VAR_12 = -1;
   goto out;
  }

  VAR_9.freq_params.vht_enabled = VAR_7->ieee80211ac;
  VAR_9.freq_params.center_freq1 = VAR_13;
  VAR_9.freq_params.center_freq2 = VAR_14;

  switch (VAR_7->vht_oper_chwidth) {
  case 129:
  case 128:
   VAR_9.freq_params.bandwidth = 80;
   break;
  case 130:
   VAR_9.freq_params.bandwidth = 160;
   break;
  }
 }

 VAR_12 = FUNC_0(VAR_6, &VAR_9);
out:
 VAR_10->frequency = VAR_11;
 FUNC_2(VAR_7);
 return VAR_12;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct wpa_supplicant {int mesh_ht_enabled; int mesh_vht_enabled; int mesh_he_enabled; struct wpa_driver_mesh_join_params* mesh_params; TYPE_2__* conf; scalar_t__ mgmt_group_cipher; void* group_cipher; void* pairwise_cipher; } ;
struct wpa_ssid {int vht; int he; scalar_t__ beacon_int; scalar_t__ dtim_period; scalar_t__ mesh_rssi_threshold; int key_mgmt; int max_oper_chwidth; int vht_center_freq2; int vht_center_freq1; scalar_t__ ht40; scalar_t__ ssid_len; scalar_t__ ssid; int frequency; } ;
struct TYPE_7__ {int bandwidth; int center_freq2; int center_freq1; scalar_t__ sec_channel_offset; scalar_t__ ht_enabled; int he_enabled; int vht_enabled; } ;
struct TYPE_5__ {scalar_t__ rssi_threshold; int auto_plinks; int peer_link_timeout; int flags; int max_peer_links; } ;
struct wpa_driver_mesh_join_params {scalar_t__ beacon_int; scalar_t__ dtim_period; TYPE_3__ freq; TYPE_1__ conf; int flags; scalar_t__ meshid_len; scalar_t__ meshid; } ;
struct TYPE_6__ {scalar_t__ beacon_int; scalar_t__ dtim_period; int user_mpm; int mesh_max_inactivity; int max_peer_links; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct wpa_supplicant*,struct wpa_ssid*,TYPE_3__*) ;
 int FUNC_1 (struct wpa_driver_mesh_join_params*) ;
 struct wpa_driver_mesh_join_params* FUNC_2 (int) ;
 int FUNC_3 (struct wpa_supplicant*) ;
 int FUNC_4 (struct wpa_supplicant*,int ,char*) ;
 int FUNC_5 (struct wpa_supplicant*) ;
 scalar_t__ FUNC_6 (struct wpa_supplicant*,struct wpa_ssid*,TYPE_3__*) ;
 int FUNC_7 (struct wpa_supplicant*) ;

int FUNC_8(struct wpa_supplicant *VAR_14,
        struct wpa_ssid *VAR_15)
{
 struct wpa_driver_mesh_join_params *VAR_16 = FUNC_2(sizeof(*VAR_16));
 int VAR_17 = 0;

 if (!VAR_15 || !VAR_15->ssid || !VAR_15->ssid_len || !VAR_15->frequency ||
     !VAR_16) {
  VAR_17 = -VAR_5;
  FUNC_1(VAR_16);
  goto out;
 }

 FUNC_5(VAR_14);

 VAR_14->pairwise_cipher = VAR_7;
 VAR_14->group_cipher = VAR_7;
 VAR_14->mgmt_group_cipher = 0;

 VAR_16->meshid = VAR_15->ssid;
 VAR_16->meshid_len = VAR_15->ssid_len;
 FUNC_0(VAR_14, VAR_15, &VAR_16->freq);
 VAR_14->mesh_ht_enabled = !!VAR_16->freq.ht_enabled;
 VAR_14->mesh_vht_enabled = !!VAR_16->freq.vht_enabled;
 VAR_14->mesh_he_enabled = !!VAR_16->freq.he_enabled;
 if (VAR_16->freq.ht_enabled && VAR_16->freq.sec_channel_offset)
  VAR_15->ht40 = VAR_16->freq.sec_channel_offset;

 if (VAR_14->mesh_vht_enabled) {
  VAR_15->vht = 1;
  VAR_15->vht_center_freq1 = VAR_16->freq.center_freq1;
  switch (VAR_16->freq.bandwidth) {
  case 80:
   if (VAR_16->freq.center_freq2) {
    VAR_15->max_oper_chwidth = VAR_2;
    VAR_15->vht_center_freq2 =
     VAR_16->freq.center_freq2;
   } else {
    VAR_15->max_oper_chwidth = VAR_1;
   }
   break;
  case 160:
   VAR_15->max_oper_chwidth = VAR_0;
   break;
  default:
   VAR_15->max_oper_chwidth = VAR_3;
   break;
  }
 }
 if (VAR_14->mesh_he_enabled)
  VAR_15->he = 1;
 if (VAR_15->beacon_int > 0)
  VAR_16->beacon_int = VAR_15->beacon_int;
 else if (VAR_14->conf->beacon_int > 0)
  VAR_16->beacon_int = VAR_14->conf->beacon_int;
 if (VAR_15->dtim_period > 0)
  VAR_16->dtim_period = VAR_15->dtim_period;
 else if (VAR_14->conf->dtim_period > 0)
  VAR_16->dtim_period = VAR_14->conf->dtim_period;
 VAR_16->conf.max_peer_links = VAR_14->conf->max_peer_links;
 if (VAR_15->mesh_rssi_threshold < VAR_4) {
  VAR_16->conf.rssi_threshold = VAR_15->mesh_rssi_threshold;
  VAR_16->conf.flags |= VAR_8;
 }

 if (VAR_15->key_mgmt & VAR_13) {
  VAR_16->flags |= VAR_11;
  VAR_16->flags |= VAR_9;
  VAR_14->conf->user_mpm = 1;
 }

 if (VAR_14->conf->user_mpm) {
  VAR_16->flags |= VAR_12;
  VAR_16->conf.auto_plinks = 0;
 } else {
  VAR_16->flags |= VAR_10;
  VAR_16->conf.auto_plinks = 1;
 }
 VAR_16->conf.peer_link_timeout = VAR_14->conf->mesh_max_inactivity;

 FUNC_1(VAR_14->mesh_params);
 VAR_14->mesh_params = VAR_16;
 if (FUNC_6(VAR_14, VAR_15, &VAR_16->freq)) {
  FUNC_4(VAR_14, VAR_6, "Failed to init mesh");
  FUNC_3(VAR_14);
  VAR_17 = -1;
  goto out;
 }

 VAR_17 = FUNC_7(VAR_14);
out:
 return VAR_17;
}

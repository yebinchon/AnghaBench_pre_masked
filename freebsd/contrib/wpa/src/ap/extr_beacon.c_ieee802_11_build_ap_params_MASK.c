
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {struct wpa_driver_ap_params* variable; void* capab_info; void* beacon_int; } ;
struct TYPE_11__ {TYPE_1__ beacon; } ;
struct wpa_driver_ap_params {size_t head_len; size_t tail_len; size_t proberesp_len; int ssid_len; int pairwise_ciphers; int wpa_version; int privacy; int smps_mode; int cts_protect; int preamble; int short_slot_time; int ht_opmode; int osen; int ftm_responder; int civic; int lci; int pbss; int multicast_to_unicast; int disable_dgaf; int p2p_go_ctwindow; int ap_max_inactivity; int access_network_type; int hessid; scalar_t__ interworking; int isolate; int hide_ssid; int auth_algs; int key_mgmt_suites; int group_cipher; int ssid; int rate_type; int beacon_rate; int basic_rates; scalar_t__ beacon_int; int dtim_period; struct wpa_driver_ap_params* proberesp; struct wpa_driver_ap_params* tail; struct wpa_driver_ap_params* head; TYPE_2__ u; struct wpa_driver_ap_params* bssid; struct wpa_driver_ap_params* sa; struct wpa_driver_ap_params* da; void* duration; int frame_control; } ;
typedef struct wpa_driver_ap_params u8 ;
typedef scalar_t__ u16 ;
struct ieee80211_vht_operation {int dummy; } ;
struct ieee80211_vht_capabilities {int dummy; } ;
struct ieee80211_spatial_reuse {int dummy; } ;
struct ieee80211_mgmt {size_t head_len; size_t tail_len; size_t proberesp_len; int ssid_len; int pairwise_ciphers; int wpa_version; int privacy; int smps_mode; int cts_protect; int preamble; int short_slot_time; int ht_opmode; int osen; int ftm_responder; int civic; int lci; int pbss; int multicast_to_unicast; int disable_dgaf; int p2p_go_ctwindow; int ap_max_inactivity; int access_network_type; int hessid; scalar_t__ interworking; int isolate; int hide_ssid; int auth_algs; int key_mgmt_suites; int group_cipher; int ssid; int rate_type; int beacon_rate; int basic_rates; scalar_t__ beacon_int; int dtim_period; struct ieee80211_mgmt* proberesp; struct ieee80211_mgmt* tail; struct ieee80211_mgmt* head; TYPE_2__ u; struct ieee80211_mgmt* bssid; struct ieee80211_mgmt* sa; struct ieee80211_mgmt* da; void* duration; int frame_control; } ;
struct ieee80211_he_operation {int dummy; } ;
struct ieee80211_he_mu_edca_parameter_set {int dummy; } ;
struct ieee80211_he_capabilities {int dummy; } ;
struct hostapd_data {int cs_c_off_beacon; int cs_c_off_ecsa_beacon; TYPE_9__* iface; TYPE_7__* conf; TYPE_6__* iconf; scalar_t__ p2p_beacon_ie; scalar_t__ wps_beacon_ie; int own_addr; } ;
struct TYPE_18__ {scalar_t__ num_sta_no_short_preamble; scalar_t__ num_sta_no_short_slot_time; int ht_op_mode; int drv_flags; TYPE_8__* conf; TYPE_5__* current_mode; int basic_rates; scalar_t__ fst_ies; } ;
struct TYPE_17__ {int civic; int lci; } ;
struct TYPE_12__ {scalar_t__ keys_set; } ;
struct TYPE_13__ {int ssid_len; TYPE_3__ wep; int ssid; } ;
struct TYPE_16__ {int ignore_broadcast_ssid; int wpa; int p2p; int wpa_pairwise; int rsn_pairwise; scalar_t__ ftm_responder; int pbss; int multicast_to_unicast; scalar_t__ osen; int disable_dgaf; int ap_max_inactivity; int access_network_type; int hessid; scalar_t__ interworking; scalar_t__ disable_11n; int isolate; scalar_t__ individual_wep_key_len; scalar_t__ default_wep_key_len; scalar_t__ ieee802_1x; TYPE_4__ ssid; int auth_algs; int wpa_key_mgmt; int wpa_group; int dtim_period; scalar_t__ vendor_elements; scalar_t__ wps_state; scalar_t__ vendor_vht; int disable_11ac; } ;
struct TYPE_15__ {int ht_capab; scalar_t__ preamble; int p2p_go_ctwindow; int ieee80211n; int rate_type; int beacon_rate; scalar_t__ beacon_int; scalar_t__ ieee80211ax; scalar_t__ ieee80211ac; } ;
struct TYPE_14__ {scalar_t__ mode; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 void* FUNC_1 (scalar_t__) ;
 struct wpa_driver_ap_params* FUNC_2 (struct hostapd_data*,struct wpa_driver_ap_params*) ;
 struct wpa_driver_ap_params* FUNC_3 (struct hostapd_data*,struct wpa_driver_ap_params*,int) ;
 struct wpa_driver_ap_params* FUNC_4 (struct hostapd_data*,struct wpa_driver_ap_params*,int) ;
 struct wpa_driver_ap_params* FUNC_5 (struct hostapd_data*,struct wpa_driver_ap_params*) ;
 struct wpa_driver_ap_params* FUNC_6 (struct hostapd_data*,struct wpa_driver_ap_params*) ;
 struct wpa_driver_ap_params* FUNC_7 (struct hostapd_data*,struct wpa_driver_ap_params*) ;
 struct wpa_driver_ap_params* FUNC_8 (struct hostapd_data*,struct wpa_driver_ap_params*) ;
 struct wpa_driver_ap_params* FUNC_9 (struct hostapd_data*,struct wpa_driver_ap_params*) ;
 struct wpa_driver_ap_params* FUNC_10 (struct hostapd_data*,struct wpa_driver_ap_params*) ;
 struct wpa_driver_ap_params* FUNC_11 (struct hostapd_data*,struct wpa_driver_ap_params*,int ) ;
 struct wpa_driver_ap_params* FUNC_12 (struct hostapd_data*,struct wpa_driver_ap_params*,int ) ;
 struct wpa_driver_ap_params* FUNC_13 (struct hostapd_data*,struct wpa_driver_ap_params*) ;
 struct wpa_driver_ap_params* FUNC_14 (struct hostapd_data*,struct wpa_driver_ap_params*) ;
 struct wpa_driver_ap_params* FUNC_15 (struct hostapd_data*,struct wpa_driver_ap_params*) ;
 struct wpa_driver_ap_params* FUNC_16 (struct hostapd_data*,struct wpa_driver_ap_params*) ;
 struct wpa_driver_ap_params* FUNC_17 (struct hostapd_data*,struct wpa_driver_ap_params*) ;
 struct wpa_driver_ap_params* FUNC_18 (struct hostapd_data*,struct wpa_driver_ap_params*) ;
 struct wpa_driver_ap_params* FUNC_19 (struct hostapd_data*,struct wpa_driver_ap_params*,int) ;
 struct wpa_driver_ap_params* FUNC_20 (struct hostapd_data*,struct wpa_driver_ap_params*) ;
 struct wpa_driver_ap_params* FUNC_21 (struct hostapd_data*,struct wpa_driver_ap_params*,int) ;
 scalar_t__ FUNC_22 (struct hostapd_data*) ;
 struct wpa_driver_ap_params* FUNC_23 (struct hostapd_data*,struct wpa_driver_ap_params*) ;
 struct wpa_driver_ap_params* FUNC_24 (struct hostapd_data*,struct wpa_driver_ap_params*) ;
 struct wpa_driver_ap_params* FUNC_25 (struct hostapd_data*,struct wpa_driver_ap_params*,int) ;
 struct wpa_driver_ap_params* FUNC_26 (struct hostapd_data*,struct wpa_driver_ap_params*) ;
 struct wpa_driver_ap_params* FUNC_27 (struct hostapd_data*,struct wpa_driver_ap_params*) ;
 struct wpa_driver_ap_params* FUNC_28 (struct hostapd_data*,struct wpa_driver_ap_params*) ;
 struct wpa_driver_ap_params* FUNC_29 (struct hostapd_data*,struct wpa_driver_ap_params*) ;
 struct wpa_driver_ap_params* FUNC_30 (struct hostapd_data*,struct wpa_driver_ap_params*) ;
 struct wpa_driver_ap_params* FUNC_31 (struct hostapd_data*,struct wpa_driver_ap_params*) ;
 struct wpa_driver_ap_params* FUNC_32 (struct hostapd_data*,struct wpa_driver_ap_params*) ;
 struct wpa_driver_ap_params* FUNC_33 (struct hostapd_data*,struct wpa_driver_ap_params*) ;
 struct wpa_driver_ap_params* FUNC_34 (struct hostapd_data*,struct wpa_driver_ap_params*,int ) ;
 struct wpa_driver_ap_params* FUNC_35 (struct hostapd_data*,struct wpa_driver_ap_params*) ;
 struct wpa_driver_ap_params* FUNC_36 (struct hostapd_data*,struct wpa_driver_ap_params*) ;
 struct wpa_driver_ap_params* FUNC_37 (struct hostapd_data*,struct wpa_driver_ap_params*) ;
 struct wpa_driver_ap_params* FUNC_38 (struct hostapd_data*,struct wpa_driver_ap_params*,int) ;
 scalar_t__ FUNC_39 (struct hostapd_data*) ;
 scalar_t__ FUNC_40 (struct hostapd_data*) ;
 struct wpa_driver_ap_params* FUNC_41 (struct hostapd_data*,size_t*) ;
 int FUNC_42 (struct hostapd_data*) ;
 int FUNC_43 (int ) ;
 int FUNC_44 (struct wpa_driver_ap_params*) ;
 struct wpa_driver_ap_params* FUNC_45 (size_t) ;
 int FUNC_46 (struct wpa_driver_ap_params*,int ,int) ;
 int FUNC_47 (struct wpa_driver_ap_params*,int,int) ;
 struct wpa_driver_ap_params* FUNC_48 (int ) ;
 int FUNC_49 (int ,char*) ;
 int FUNC_50 (scalar_t__) ;
 int FUNC_51 (scalar_t__) ;

int FUNC_52(struct hostapd_data *VAR_22,
          struct wpa_driver_ap_params *VAR_23)
{
 struct ieee80211_mgmt *VAR_24 = ((void*)0);
 u8 *VAR_25 = ((void*)0);
 size_t VAR_26 = 0, VAR_27 = 0;
 u8 *VAR_28 = ((void*)0);
 size_t VAR_29 = 0;
 FUNC_47(VAR_23, 0, sizeof(*VAR_23));
 VAR_23->head = (u8 *) VAR_24;
 VAR_23->head_len = VAR_26;
 VAR_23->tail = VAR_25;
 VAR_23->tail_len = VAR_27;
 VAR_23->proberesp = VAR_28;
 VAR_23->proberesp_len = VAR_29;
 VAR_23->dtim_period = VAR_22->conf->dtim_period;
 VAR_23->beacon_int = VAR_22->iconf->beacon_int;
 VAR_23->basic_rates = VAR_22->iface->basic_rates;
 VAR_23->beacon_rate = VAR_22->iconf->beacon_rate;
 VAR_23->rate_type = VAR_22->iconf->rate_type;
 VAR_23->ssid = VAR_22->conf->ssid.ssid;
 VAR_23->ssid_len = VAR_22->conf->ssid.ssid_len;
 if ((VAR_22->conf->wpa & (VAR_21 | VAR_20)) ==
     (VAR_21 | VAR_20))
  VAR_23->pairwise_ciphers = VAR_22->conf->wpa_pairwise |
   VAR_22->conf->rsn_pairwise;
 else if (VAR_22->conf->wpa & VAR_20)
  VAR_23->pairwise_ciphers = VAR_22->conf->rsn_pairwise;
 else if (VAR_22->conf->wpa & VAR_21)
  VAR_23->pairwise_ciphers = VAR_22->conf->wpa_pairwise;
 VAR_23->group_cipher = VAR_22->conf->wpa_group;
 VAR_23->key_mgmt_suites = VAR_22->conf->wpa_key_mgmt;
 VAR_23->auth_algs = VAR_22->conf->auth_algs;
 VAR_23->wpa_version = VAR_22->conf->wpa;
 VAR_23->privacy = VAR_22->conf->ssid.wep.keys_set || VAR_22->conf->wpa ||
  (VAR_22->conf->ieee802_1x &&
   (VAR_22->conf->default_wep_key_len ||
    VAR_22->conf->individual_wep_key_len));
 switch (VAR_22->conf->ignore_broadcast_ssid) {
 case 0:
  VAR_23->hide_ssid = VAR_11;
  break;
 case 1:
  VAR_23->hide_ssid = VAR_5;
  break;
 case 2:
  VAR_23->hide_ssid = VAR_4;
  break;
 }
 VAR_23->isolate = VAR_22->conf->isolate;
 VAR_23->smps_mode = VAR_22->iconf->ht_capab & VAR_7;
 VAR_23->interworking = VAR_22->conf->interworking;
 if (VAR_22->conf->interworking &&
     !FUNC_43(VAR_22->conf->hessid))
  VAR_23->hessid = VAR_22->conf->hessid;
 VAR_23->access_network_type = VAR_22->conf->access_network_type;
 VAR_23->ap_max_inactivity = VAR_22->conf->ap_max_inactivity;
 VAR_23->multicast_to_unicast = VAR_22->conf->multicast_to_unicast;
 VAR_23->pbss = VAR_22->conf->pbss;

 if (VAR_22->conf->ftm_responder) {
  if (VAR_22->iface->drv_flags & VAR_19) {
   VAR_23->ftm_responder = 1;
   VAR_23->lci = VAR_22->iface->conf->lci;
   VAR_23->civic = VAR_22->iface->conf->civic;
  } else {
   FUNC_49(VAR_10,
       "Not configuring FTM responder as the driver doesn't advertise support for it");
  }
 }

 return 0;
}

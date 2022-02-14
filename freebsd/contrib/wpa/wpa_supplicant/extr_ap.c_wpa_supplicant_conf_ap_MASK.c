
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int num_modes; int modes; } ;
struct wpa_supplicant {scalar_t__ max_stations; TYPE_8__* conf; TYPE_6__* wps; TYPE_4__* p2pdev; TYPE_2__* global; TYPE_1__ hw; int ifname; int driver; } ;
struct TYPE_17__ {scalar_t__ fragment_size; } ;
struct wpa_ssid {int pbss; scalar_t__ mode; int ssid_len; scalar_t__ key_mgmt; int proto; int pairwise_cipher; scalar_t__* wep_key_len; int beacon_int; scalar_t__ ieee80211w; TYPE_7__ eap; int ignore_broadcast_ssid; scalar_t__ wps_disabled; int ocv; scalar_t__ dtim_period; scalar_t__ ap_max_inactivity; int wep_tx_keyidx; int * wep_key; scalar_t__ passphrase; int psk; scalar_t__ psk_set; scalar_t__ auth_alg; int ssid; scalar_t__ p2p_group; int he; int frequency; scalar_t__ acs; } ;
struct hostapd_wpa_psk {int dummy; } ;
struct hostapd_wep_keys {scalar_t__* len; int keys_set; int default_len; int idx; int ** key; } ;
struct hostapd_config {int ieee80211h; int ieee80211d; char* country; scalar_t__ hw_mode; int* basic_rates; int* supported_rates; int beacon_int; int p2p_go_ctwindow; int ieee80211ax; scalar_t__ channel; int driver; struct hostapd_bss_config** bss; } ;
struct TYPE_15__ {int ssid_len; int ssid_set; int wpa_psk_set; scalar_t__ security_policy; struct hostapd_wep_keys wep; void* wpa_passphrase; TYPE_9__* wpa_psk; int ssid; } ;
struct hostapd_bss_config {int pbss; int isolate; int wpa; scalar_t__ wpa_key_mgmt; int wpa_pairwise; int venue_group; int venue_type; int venue_info_set; int rsn_pairwise; int wpa_group; int default_wep_key_len; int wpa_group_rekey; scalar_t__ ieee80211w; int eap_server; int wps_state; int ap_setup_locked; scalar_t__ fragment_size; scalar_t__ max_num_sta; int ftm_initiator; int ftm_responder; int vendor_elements; int disassoc_low_ack; int pbc_in_m1; int os_version; int uuid; void* serial_number; void* model_number; void* model_name; void* manufacturer; void* friendly_name; void* device_name; int device_type; void* config_methods; TYPE_5__ ssid; int ocv; scalar_t__ ieee802_1x; scalar_t__ dtim_period; scalar_t__ ap_max_inactivity; int internet; int access_network_type; scalar_t__ interworking; scalar_t__ auth_algs; int ignore_broadcast_ssid; int ip_addr_end; int ip_addr_start; int ip_addr_mask; int ip_addr_go; int force_per_enrollee_psk; int iface; } ;
struct TYPE_19__ {int group; int psk; } ;
struct TYPE_18__ {char* country; int go_venue_group; int go_venue_type; int beacon_int; int p2p_go_ctwindow; scalar_t__ max_num_sta; int ap_isolate; int ftm_initiator; int ftm_responder; scalar_t__ ap_vendor_elements; int disassoc_low_ack; int pbc_in_m1; int os_version; int uuid; scalar_t__ serial_number; scalar_t__ model_number; scalar_t__ model_name; scalar_t__ manufacturer; scalar_t__ device_name; int device_type; scalar_t__ config_methods; scalar_t__ dtim_period; int go_internet; int go_access_network_type; scalar_t__ go_interworking; int p2p_intra_bss; } ;
struct TYPE_16__ {int uuid; } ;
struct TYPE_14__ {TYPE_3__* conf; } ;
struct TYPE_13__ {int ip_addr_end; int ip_addr_start; int ip_addr_mask; int ip_addr_go; } ;
struct TYPE_12__ {int p2p_per_sta_psk; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 void* VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_0 (TYPE_9__*,int) ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int* FUNC_3 (int) ;
 int FUNC_4 (int ,int ,int) ;
 int * FUNC_5 (int ,scalar_t__) ;
 void* FUNC_6 (scalar_t__) ;
 int FUNC_7 (int ,int ,int) ;
 TYPE_9__* FUNC_8 (int) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 int FUNC_10 (int ,char*,...) ;
 int FUNC_11 (int,int,int) ;
 scalar_t__ FUNC_12 (struct wpa_supplicant*,struct wpa_ssid*,struct hostapd_config*) ;
 int FUNC_13 (scalar_t__) ;

__attribute__((used)) static int FUNC_14(struct wpa_supplicant *VAR_26,
      struct wpa_ssid *VAR_27,
      struct hostapd_config *VAR_28)
{
 struct hostapd_bss_config *VAR_29 = VAR_28->bss[0];

 VAR_28->driver = VAR_26->driver;

 FUNC_7(VAR_29->iface, VAR_26->ifname, sizeof(VAR_29->iface));

 if (FUNC_12(VAR_26, VAR_27, VAR_28))
  return -1;

 if (VAR_27->pbss > 1) {
  FUNC_10(VAR_5, "Invalid pbss value(%d) for AP mode",
      VAR_27->pbss);
  return -1;
 }
 VAR_29->pbss = VAR_27->pbss;
 if (FUNC_1(VAR_27->frequency, VAR_26->hw.modes,
        VAR_26->hw.num_modes) && VAR_26->conf->country[0]) {
  VAR_28->ieee80211h = 1;
  VAR_28->ieee80211d = 1;
  VAR_28->country[0] = VAR_26->conf->country[0];
  VAR_28->country[1] = VAR_26->conf->country[1];
  VAR_28->country[2] = ' ';
 }
 if (VAR_27->ssid_len == 0) {
  FUNC_10(VAR_5, "No SSID configured for AP mode");
  return -1;
 }
 FUNC_4(VAR_29->ssid.ssid, VAR_27->ssid, VAR_27->ssid_len);
 VAR_29->ssid.ssid_len = VAR_27->ssid_len;
 VAR_29->ssid.ssid_set = 1;

 VAR_29->ignore_broadcast_ssid = VAR_27->ignore_broadcast_ssid;

 if (VAR_27->auth_alg)
  VAR_29->auth_algs = VAR_27->auth_alg;

 if (FUNC_9(VAR_27->key_mgmt))
  VAR_29->wpa = VAR_27->proto;
 if (VAR_27->key_mgmt == VAR_1)
  VAR_29->wpa_key_mgmt = VAR_23;
 else
  VAR_29->wpa_key_mgmt = VAR_27->key_mgmt;
 VAR_29->wpa_pairwise = VAR_27->pairwise_cipher;
 if (VAR_27->psk_set) {
  FUNC_0(VAR_29->ssid.wpa_psk, sizeof(*VAR_29->ssid.wpa_psk));
  VAR_29->ssid.wpa_psk = FUNC_8(sizeof(struct hostapd_wpa_psk));
  if (VAR_29->ssid.wpa_psk == ((void*)0))
   return -1;
  FUNC_4(VAR_29->ssid.wpa_psk->psk, VAR_27->psk, VAR_8);
  VAR_29->ssid.wpa_psk->group = 1;
  VAR_29->ssid.wpa_psk_set = 1;
 } else if (VAR_27->passphrase) {
  VAR_29->ssid.wpa_passphrase = FUNC_6(VAR_27->passphrase);
 } else if (VAR_27->wep_key_len[0] || VAR_27->wep_key_len[1] ||
     VAR_27->wep_key_len[2] || VAR_27->wep_key_len[3]) {
  struct hostapd_wep_keys *VAR_30 = &VAR_29->ssid.wep;
  int VAR_31;
  for (VAR_31 = 0; VAR_31 < VAR_7; VAR_31++) {
   if (VAR_27->wep_key_len[VAR_31] == 0)
    continue;
   VAR_30->key[VAR_31] = FUNC_5(VAR_27->wep_key[VAR_31],
      VAR_27->wep_key_len[VAR_31]);
   if (VAR_30->key[VAR_31] == ((void*)0))
    return -1;
   VAR_30->len[VAR_31] = VAR_27->wep_key_len[VAR_31];
  }
  VAR_30->idx = VAR_27->wep_tx_keyidx;
  VAR_30->keys_set = 1;
 }

 if (VAR_26->conf->go_interworking) {
  FUNC_10(VAR_4,
      "P2P: Enable Interworking with access_network_type: %d",
      VAR_26->conf->go_access_network_type);
  VAR_29->interworking = VAR_26->conf->go_interworking;
  VAR_29->access_network_type = VAR_26->conf->go_access_network_type;
  VAR_29->internet = VAR_26->conf->go_internet;
  if (VAR_26->conf->go_venue_group) {
   FUNC_10(VAR_4,
       "P2P: Venue group: %d  Venue type: %d",
       VAR_26->conf->go_venue_group,
       VAR_26->conf->go_venue_type);
   VAR_29->venue_group = VAR_26->conf->go_venue_group;
   VAR_29->venue_type = VAR_26->conf->go_venue_type;
   VAR_29->venue_info_set = 1;
  }
 }

 if (VAR_27->ap_max_inactivity)
  VAR_29->ap_max_inactivity = VAR_27->ap_max_inactivity;

 if (VAR_27->dtim_period)
  VAR_29->dtim_period = VAR_27->dtim_period;
 else if (VAR_26->conf->dtim_period)
  VAR_29->dtim_period = VAR_26->conf->dtim_period;

 if (VAR_27->beacon_int)
  VAR_28->beacon_int = VAR_27->beacon_int;
 else if (VAR_26->conf->beacon_int)
  VAR_28->beacon_int = VAR_26->conf->beacon_int;
 if ((VAR_29->wpa & 2) && VAR_29->rsn_pairwise == 0)
  VAR_29->rsn_pairwise = VAR_29->wpa_pairwise;
 VAR_29->wpa_group = FUNC_11(VAR_29->wpa, VAR_29->wpa_pairwise,
          VAR_29->rsn_pairwise);

 if (VAR_29->wpa && VAR_29->ieee802_1x)
  VAR_29->ssid.security_policy = VAR_12;
 else if (VAR_29->wpa)
  VAR_29->ssid.security_policy = VAR_13;
 else if (VAR_29->ieee802_1x) {
  int VAR_32 = VAR_20;
  VAR_29->ssid.security_policy = VAR_9;
  VAR_29->ssid.wep.default_len = VAR_29->default_wep_key_len;
  if (VAR_29->default_wep_key_len)
   VAR_32 = VAR_29->default_wep_key_len >= 13 ?
    VAR_21 : VAR_22;
  VAR_29->wpa_group = VAR_32;
  VAR_29->wpa_pairwise = VAR_32;
  VAR_29->rsn_pairwise = VAR_32;
 } else if (VAR_29->ssid.wep.keys_set) {
  int VAR_33 = VAR_22;
  if (VAR_29->ssid.wep.len[0] >= 13)
   VAR_33 = VAR_21;
  VAR_29->ssid.security_policy = VAR_11;
  VAR_29->wpa_group = VAR_33;
  VAR_29->wpa_pairwise = VAR_33;
  VAR_29->rsn_pairwise = VAR_33;
 } else {
  VAR_29->ssid.security_policy = VAR_10;
  VAR_29->wpa_group = VAR_20;
  VAR_29->wpa_pairwise = VAR_20;
  VAR_29->rsn_pairwise = VAR_20;
 }

 if (VAR_29->wpa_group_rekey < 86400 && (VAR_29->wpa & 2) &&
     (VAR_29->wpa_group == VAR_16 ||
      VAR_29->wpa_group == VAR_18 ||
      VAR_29->wpa_group == VAR_17 ||
      VAR_29->wpa_group == VAR_19)) {




  VAR_29->wpa_group_rekey = 86400;
 }
 if (VAR_26->max_stations &&
     VAR_26->max_stations < VAR_26->conf->max_num_sta)
  VAR_29->max_num_sta = VAR_26->max_stations;
 else
  VAR_29->max_num_sta = VAR_26->conf->max_num_sta;

 if (!VAR_29->isolate)
  VAR_29->isolate = VAR_26->conf->ap_isolate;

 VAR_29->disassoc_low_ack = VAR_26->conf->disassoc_low_ack;

 if (VAR_26->conf->ap_vendor_elements) {
  VAR_29->vendor_elements =
   FUNC_13(VAR_26->conf->ap_vendor_elements);
 }

 VAR_29->ftm_responder = VAR_26->conf->ftm_responder;
 VAR_29->ftm_initiator = VAR_26->conf->ftm_initiator;

 return 0;
}

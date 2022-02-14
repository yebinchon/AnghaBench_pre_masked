
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_9__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int num_modes; int modes; } ;
struct wpa_supplicant {int key_mgmt; scalar_t__ pairwise_cipher; int drv_flags; int assoc_freq; struct hostapd_iface* ap_iface; int p2p_go_acs_band; scalar_t__ p2p_go_do_acs; int own_addr; int bssid; int eapol; struct wpa_ssid* current_ssid; int drv_priv; int driver; int ext_eapol_frame_io; TYPE_4__* global; TYPE_3__* p2pdev; TYPE_2__* conf; int extended_capa_len; int extended_capa_mask; int extended_capa; int probe_resp_offloads; int drv_smps_modes; TYPE_1__ hw; } ;
struct wpa_ssid {scalar_t__ ssid_len; int mode; int frequency; int key_mgmt; int acs; int pairwise_cipher; int proto; int * ssid; } ;
struct TYPE_14__ {int freq; } ;
struct wpa_driver_associate_params {scalar_t__ ssid_len; int key_mgmt_suite; scalar_t__ pairwise_suite; scalar_t__ group_suite; int p2p; int uapsd; TYPE_5__ freq; int wpa_proto; int mode; int * ssid; } ;
struct hostapd_iface {int drv_flags; size_t num_bss; struct hostapd_config* conf; TYPE_6__** bss; int extended_capa_len; int extended_capa_mask; int extended_capa; int probe_resp_offloads; int smps_modes; struct wpa_supplicant* owner; } ;
struct hostapd_data {int dummy; } ;
struct hostapd_config {size_t num_bss; int hw_mode; scalar_t__ channel; TYPE_9__** bss; int wmm_ac_params; } ;
typedef int params ;
struct TYPE_16__ {int wmm_enabled; int wmm_uapsd; void* p2p; } ;
struct TYPE_15__ {int drv_priv; int driver; int own_addr; int ext_eapol_frame_io; struct wpa_supplicant* setup_complete_cb_ctx; int setup_complete_cb; int p2p_group; int p2p; struct wpa_supplicant* new_psk_cb_ctx; int new_psk_cb; struct wpa_supplicant* sta_authorized_cb_ctx; int sta_authorized_cb; struct wpa_supplicant* wps_event_cb_ctx; int wps_event_cb; struct wpa_supplicant* wps_reg_success_cb_ctx; int wps_reg_success_cb; struct wpa_supplicant* vendor_action_cb_ctx; int vendor_action_cb; struct wpa_supplicant* public_action_cb_ctx; int public_action_cb; TYPE_3__* msg_ctx_parent; struct wpa_supplicant* msg_ctx; } ;
struct TYPE_13__ {int p2p; } ;
struct TYPE_12__ {int ap_uapsd; scalar_t__ set_ap_uapsd; } ;
struct TYPE_11__ {int wmm_ac_params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;



 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (int ,int *,int *) ;
 TYPE_6__* FUNC_1 (struct hostapd_iface*,struct hostapd_config*,TYPE_9__*) ;
 struct hostapd_iface* FUNC_2 () ;
 struct hostapd_config* FUNC_3 () ;
 int FUNC_4 (TYPE_6__*,int ,struct wpa_supplicant*) ;
 scalar_t__ FUNC_5 (struct hostapd_iface*) ;
 scalar_t__ FUNC_6 (int,int ,int ) ;
 TYPE_6__** FUNC_7 (size_t,int) ;
 int FUNC_8 (int ,int ,int) ;
 int FUNC_9 (struct wpa_driver_associate_params*,int ,int) ;
 scalar_t__ FUNC_10 (struct wpa_supplicant*,struct wpa_driver_associate_params*) ;
 int FUNC_11 (struct wpa_supplicant*,int ) ;
 int FUNC_12 (struct wpa_supplicant*,int ,char*) ;
 scalar_t__ FUNC_13 (int ,int) ;
 int FUNC_14 (int ,char*,...) ;
 int FUNC_15 (int *,scalar_t__) ;
 int FUNC_16 (struct wpa_supplicant*) ;
 scalar_t__ FUNC_17 (struct wpa_supplicant*,struct wpa_ssid*,struct hostapd_config*) ;
 int VAR_21 ;
 int FUNC_18 (struct wpa_supplicant*,struct wpa_ssid*) ;

int FUNC_19(struct wpa_supplicant *VAR_22,
        struct wpa_ssid *VAR_23)
{
 struct wpa_driver_associate_params VAR_24;
 struct hostapd_iface *VAR_25;
 struct hostapd_config *VAR_26;
 size_t VAR_27;

 if (VAR_23->ssid == ((void*)0) || VAR_23->ssid_len == 0) {
  FUNC_14(VAR_3, "No SSID configured for AP mode");
  return -1;
 }

 FUNC_16(VAR_22);

 FUNC_14(VAR_2, "Setting up AP (SSID='%s')",
     FUNC_15(VAR_23->ssid, VAR_23->ssid_len));

 FUNC_9(&VAR_24, 0, sizeof(VAR_24));
 VAR_24.ssid = VAR_23->ssid;
 VAR_24.ssid_len = VAR_23->ssid_len;
 switch (VAR_23->mode) {
 case 130:
 case 129:
 case 128:
  VAR_24.mode = VAR_1;
  break;
 default:
  return -1;
 }
 if (VAR_23->frequency == 0)
  VAR_23->frequency = 2462;
 VAR_24.freq.freq = VAR_23->frequency;

 VAR_24.wpa_proto = VAR_23->proto;
 if (VAR_23->key_mgmt & VAR_13)
  VAR_22->key_mgmt = VAR_13;
 else
  VAR_22->key_mgmt = VAR_12;
 VAR_24.key_mgmt_suite = VAR_22->key_mgmt;

 VAR_22->pairwise_cipher = FUNC_13(VAR_23->pairwise_cipher,
         1);
 if (VAR_22->pairwise_cipher < 0) {
  FUNC_14(VAR_5, "WPA: Failed to select pairwise "
      "cipher.");
  return -1;
 }
 VAR_24.pairwise_suite = VAR_22->pairwise_cipher;
 VAR_24.group_suite = VAR_24.pairwise_suite;







 if (VAR_22->p2pdev->set_ap_uapsd)
  VAR_24.uapsd = VAR_22->p2pdev->ap_uapsd;
 else if (VAR_24.p2p && (VAR_22->drv_flags & VAR_9))
  VAR_24.uapsd = 1;
 else
  VAR_24.uapsd = -1;

 if (FUNC_6(VAR_24.freq.freq, VAR_22->hw.modes,
        VAR_22->hw.num_modes))
  VAR_24.freq.freq = 0;

 if (VAR_24.p2p)
  FUNC_11(VAR_22, VAR_11);
 else
  FUNC_11(VAR_22, VAR_10);

 if (FUNC_10(VAR_22, &VAR_24) < 0) {
  FUNC_12(VAR_22, VAR_4, "Failed to start AP functionality");
  return -1;
 }

 VAR_22->ap_iface = VAR_25 = FUNC_2();
 if (VAR_25 == ((void*)0))
  return -1;
 VAR_25->owner = VAR_22;
 VAR_25->drv_flags = VAR_22->drv_flags;
 VAR_25->smps_modes = VAR_22->drv_smps_modes;
 VAR_25->probe_resp_offloads = VAR_22->probe_resp_offloads;
 VAR_25->extended_capa = VAR_22->extended_capa;
 VAR_25->extended_capa_mask = VAR_22->extended_capa_mask;
 VAR_25->extended_capa_len = VAR_22->extended_capa_len;

 VAR_22->ap_iface->conf = VAR_26 = FUNC_3();
 if (VAR_26 == ((void*)0)) {
  FUNC_16(VAR_22);
  return -1;
 }

 FUNC_8(VAR_22->ap_iface->conf->wmm_ac_params,
    VAR_22->conf->wmm_ac_params,
    sizeof(VAR_22->conf->wmm_ac_params));

 if (VAR_24.uapsd > 0) {
  VAR_26->bss[0]->wmm_enabled = 1;
  VAR_26->bss[0]->wmm_uapsd = 1;
 }

 if (FUNC_17(VAR_22, VAR_23, VAR_26)) {
  FUNC_14(VAR_3, "Failed to create AP configuration");
  FUNC_16(VAR_22);
  return -1;
 }
 VAR_25->num_bss = VAR_26->num_bss;
 VAR_25->bss = FUNC_7(VAR_26->num_bss,
        sizeof(struct hostapd_data *));
 if (VAR_25->bss == ((void*)0)) {
  FUNC_16(VAR_22);
  return -1;
 }

 for (VAR_27 = 0; VAR_27 < VAR_26->num_bss; VAR_27++) {
  VAR_25->bss[VAR_27] =
   FUNC_1(VAR_25, VAR_26,
            VAR_26->bss[VAR_27]);
  if (VAR_25->bss[VAR_27] == ((void*)0)) {
   FUNC_16(VAR_22);
   return -1;
  }

  VAR_25->bss[VAR_27]->msg_ctx = VAR_22;
  VAR_25->bss[VAR_27]->msg_ctx_parent = VAR_22->p2pdev;
  VAR_25->bss[VAR_27]->public_action_cb = VAR_16;
  VAR_25->bss[VAR_27]->public_action_cb_ctx = VAR_22;
  VAR_25->bss[VAR_27]->vendor_action_cb = VAR_18;
  VAR_25->bss[VAR_27]->vendor_action_cb_ctx = VAR_22;
  FUNC_4(VAR_25->bss[VAR_27],
          VAR_15, VAR_22);
  VAR_25->bss[VAR_27]->wps_reg_success_cb = VAR_20;
  VAR_25->bss[VAR_27]->wps_reg_success_cb_ctx = VAR_22;
  VAR_25->bss[VAR_27]->wps_event_cb = VAR_19;
  VAR_25->bss[VAR_27]->wps_event_cb_ctx = VAR_22;
  VAR_25->bss[VAR_27]->sta_authorized_cb = VAR_17;
  VAR_25->bss[VAR_27]->sta_authorized_cb_ctx = VAR_22;







  VAR_25->bss[VAR_27]->setup_complete_cb = VAR_21;
  VAR_25->bss[VAR_27]->setup_complete_cb_ctx = VAR_22;




 }

 FUNC_8(VAR_25->bss[0]->own_addr, VAR_22->own_addr, VAR_0);
 VAR_25->bss[0]->driver = VAR_22->driver;
 VAR_25->bss[0]->drv_priv = VAR_22->drv_priv;

 VAR_22->current_ssid = VAR_23;
 FUNC_0(VAR_22->eapol, ((void*)0), ((void*)0));
 FUNC_8(VAR_22->bssid, VAR_22->own_addr, VAR_0);
 VAR_22->assoc_freq = VAR_23->frequency;
 if (FUNC_5(VAR_22->ap_iface)) {
  FUNC_14(VAR_3, "Failed to initialize AP interface");
  FUNC_16(VAR_22);
  return -1;
 }

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {int * wpa; } ;
struct wpa_sm_ctx {int channel_info; int fils_hlp_rx; int key_mgmt_set_pmk; int set_rekey_offload; int tdls_disable_channel_switch; int tdls_enable_channel_switch; int tdls_peer_addset; int tdls_oper; int send_tdls_mgmt; int tdls_get_capa; int mark_authenticated; int send_ft_action; int update_ft_ies; int mlme_setprotection; int get_config_blob; int set_config_blob; int remove_pmkid; int add_pmkid; int cancel_auth_timeout; int alloc_eapol; int get_beacon_ie; int ether_send; int get_bssid; int get_network_ctx; int set_key; int deauthenticate; int get_state; int set_state; struct wpa_supplicant* msg_ctx; struct wpa_supplicant* ctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct wpa_sm_ctx*) ;
 struct wpa_sm_ctx* FUNC_1 (int) ;
 int FUNC_2 (int ,char*) ;
 int * FUNC_3 (struct wpa_sm_ctx*) ;
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
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;

int FUNC_4(struct wpa_supplicant *VAR_29)
{

 struct wpa_sm_ctx *VAR_30;
 VAR_30 = FUNC_1(sizeof(*VAR_30));
 if (VAR_30 == ((void*)0)) {
  FUNC_2(VAR_0, "Failed to allocate WPA context.");
  return -1;
 }

 VAR_30->ctx = VAR_29;
 VAR_30->msg_ctx = VAR_29;
 VAR_30->set_state = VAR_6;
 VAR_30->get_state = VAR_5;
 VAR_30->deauthenticate = VAR_4;
 VAR_30->set_key = VAR_21;
 VAR_30->get_network_ctx = VAR_13;
 VAR_30->get_bssid = VAR_11;
 VAR_30->ether_send = VAR_2;
 VAR_30->get_beacon_ie = VAR_10;
 VAR_30->alloc_eapol = VAR_1;
 VAR_30->cancel_auth_timeout = VAR_3;
 VAR_30->add_pmkid = VAR_7;
 VAR_30->remove_pmkid = VAR_17;

 VAR_30->set_config_blob = VAR_20;
 VAR_30->get_config_blob = VAR_12;

 VAR_30->mlme_setprotection = VAR_16;
 VAR_30->set_rekey_offload = VAR_22;
 VAR_30->key_mgmt_set_pmk = VAR_14;
 VAR_30->fils_hlp_rx = VAR_9;
 VAR_30->channel_info = VAR_8;

 VAR_29->wpa = FUNC_3(VAR_30);
 if (VAR_29->wpa == ((void*)0)) {
  FUNC_2(VAR_0, "Failed to initialize WPA state "
      "machine");
  FUNC_0(VAR_30);
  return -1;
 }


 return 0;
}

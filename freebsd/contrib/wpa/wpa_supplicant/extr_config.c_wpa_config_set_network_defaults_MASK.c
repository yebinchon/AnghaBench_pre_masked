
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sim_num; int fragment_size; } ;
struct wpa_ssid {int ht; int vht_rx_mcs_nss_1; int vht_rx_mcs_nss_2; int vht_rx_mcs_nss_3; int vht_rx_mcs_nss_4; int vht_rx_mcs_nss_5; int vht_rx_mcs_nss_6; int vht_rx_mcs_nss_7; int vht_rx_mcs_nss_8; int vht_tx_mcs_nss_1; int vht_tx_mcs_nss_2; int vht_tx_mcs_nss_3; int vht_tx_mcs_nss_4; int vht_tx_mcs_nss_5; int vht_tx_mcs_nss_6; int vht_tx_mcs_nss_7; int vht_tx_mcs_nss_8; int proactive_key_caching; int mac_addr; int max_oper_chwidth; int mka_priority; int ieee80211w; int ampdu_density; int ampdu_factor; int disable_max_amsdu; int rx_stbc; int tx_stbc; int disable_ldpc; int disable_sgi; int disable_ht40; int disable_ht; int mesh_rssi_threshold; int dot11MeshHoldingTimeout; int dot11MeshConfirmTimeout; int dot11MeshRetryTimeout; int dot11MeshMaxRetries; TYPE_1__ eap; int eap_workaround; int eapol_flags; int bg_scan_period; int key_mgmt; int group_cipher; int pairwise_cipher; int proto; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
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

void FUNC_0(struct wpa_ssid *VAR_26)
{
 VAR_26->proto = VAR_21;
 VAR_26->pairwise_cipher = VAR_19;
 VAR_26->group_cipher = VAR_11;
 VAR_26->key_mgmt = VAR_12;
 VAR_26->bg_scan_period = VAR_2;
 VAR_26->ht = 1;
 VAR_26->proactive_key_caching = -1;






 VAR_26->mac_addr = -1;
 VAR_26->max_oper_chwidth = VAR_13;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostapd_bss_config {unsigned int logger_syslog; unsigned int logger_stdout; int auth_algs; int wep_rekeying_period; int broadcast_key_idx_min; int broadcast_key_idx_max; int eap_reauth_period; int wpa_group_rekey; int wpa_gmk_rekey; int wpa_group_update_count; int wpa_pairwise_update_count; int dtim_period; int radius_server_auth_port; int eap_sim_db_timeout; int eap_sim_id; int max_listen_interval; int pwd_group; int assoc_sa_query_max_timeout; int assoc_sa_query_retry_timeout; int eap_fast_prov; int pac_key_lifetime; int pac_key_refresh_time; int wmm_enabled; int ft_over_ds; int rkh_pos_timeout; int rkh_neg_timeout; int rkh_pull_timeout; int rkh_pull_retries; int r0_key_lifetime; int radius_das_time_window; int sae_anti_clogging_threshold; int sae_sync; int gas_frag_limit; int fils_hlp_wait_time; int broadcast_deauth; int mbo_cell_data_conn_pref; int send_probe_response; int hs20_release; int macsec_port; int check_crl_strict; int mka_priority; int tls_flags; void* dhcp_relay_port; void* dhcp_server_port; int fils_realms; int group_mgmt_cipher; int eapol_version; int ap_max_inactivity; int max_num_sta; scalar_t__ rsn_pairwise; void* wpa_group; void* wpa_pairwise; int wpa_key_mgmt; int wpa_disable_eapol_key_retries; void* logger_stdout_level; void* logger_syslog_level; int anqp_elem; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 void* VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int *) ;

void FUNC_1(struct hostapd_bss_config *VAR_14)
{
 FUNC_0(&VAR_14->anqp_elem);

 VAR_14->logger_syslog_level = VAR_5;
 VAR_14->logger_stdout_level = VAR_5;
 VAR_14->logger_syslog = (unsigned int) -1;
 VAR_14->logger_stdout = (unsigned int) -1;

 VAR_14->auth_algs = VAR_9 | VAR_10;

 VAR_14->wep_rekeying_period = 300;

 VAR_14->broadcast_key_idx_min = 1;
 VAR_14->broadcast_key_idx_max = 2;
 VAR_14->eap_reauth_period = 3600;

 VAR_14->wpa_group_rekey = 600;
 VAR_14->wpa_gmk_rekey = 86400;
 VAR_14->wpa_group_update_count = 4;
 VAR_14->wpa_pairwise_update_count = 4;
 VAR_14->wpa_disable_eapol_key_retries =
  VAR_2;
 VAR_14->wpa_key_mgmt = VAR_13;
 VAR_14->wpa_pairwise = VAR_12;
 VAR_14->wpa_group = VAR_12;
 VAR_14->rsn_pairwise = 0;

 VAR_14->max_num_sta = VAR_7;

 VAR_14->dtim_period = 2;

 VAR_14->radius_server_auth_port = 1812;
 VAR_14->eap_sim_db_timeout = 1;
 VAR_14->eap_sim_id = 3;
 VAR_14->ap_max_inactivity = VAR_0;
 VAR_14->eapol_version = VAR_4;

 VAR_14->max_listen_interval = 65535;

 VAR_14->pwd_group = 19;
 VAR_14->wmm_enabled = -1;
 VAR_14->radius_das_time_window = 300;

 VAR_14->sae_anti_clogging_threshold = 5;
 VAR_14->sae_sync = 5;

 VAR_14->gas_frag_limit = 1400;
 VAR_14->broadcast_deauth = 1;
 VAR_14->tls_flags = VAR_8;

 VAR_14->send_probe_response = 1;
 VAR_14->check_crl_strict = 1;
}

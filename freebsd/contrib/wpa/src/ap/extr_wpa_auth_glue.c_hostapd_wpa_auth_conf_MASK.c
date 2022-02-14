
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_auth_config {int eapol_version; int disable_pmksa_caching; int ieee80211w; scalar_t__ ssid_len; int r0_key_holder_len; int disable_gtk; int own_ie_override_len; int fils_cache_id; int fils_cache_id_set; int ip_addr_end; int ip_addr_start; int ip_addr_mask; int ip_addr_go; int own_ie_override; int corrupt_gtk_rekey_mic_probability; scalar_t__ rsn_preauth; void* rsn_pairwise; void* wpa_group; scalar_t__ wpa_pairwise; int wpa_key_mgmt; int wpa; int ft_psk_generate_local; int ft_over_ds; int pmk_r1_push; int * r1kh_list; int * r0kh_list; int rkh_pull_retries; int rkh_pull_timeout; int rkh_neg_timeout; int rkh_pos_timeout; int reassociation_deadline; int r1_max_key_lifetime; int r0_key_lifetime; int r1_key_holder; int r0_key_holder; int mobility_domain; int ssid; int sae_require_mfp; int group_mgmt_cipher; int okc; int ocv; int wmm_uapsd; int wmm_enabled; int wpa_pairwise_update_count; int wpa_disable_eapol_key_retries; int wpa_group_update_count; int wpa_ptk_rekey; int wpa_gmk_rekey; int wpa_strict_rekey; int wpa_group_rekey; } ;
struct hostapd_config {int corrupt_gtk_rekey_mic_probability; } ;
struct TYPE_2__ {scalar_t__ ssid_len; scalar_t__ ssid; } ;
struct hostapd_bss_config {int eapol_version; int disable_pmksa_caching; int ieee80211w; int disable_dgaf; scalar_t__ fils_cache_id; int fils_cache_id_set; scalar_t__ ip_addr_end; scalar_t__ ip_addr_start; scalar_t__ ip_addr_mask; scalar_t__ ip_addr_go; scalar_t__ own_ie_override; scalar_t__ osen; int ft_psk_generate_local; int ft_over_ds; int pmk_r1_push; int r1kh_list; int r0kh_list; int rkh_pull_retries; int rkh_pull_timeout; int rkh_neg_timeout; int rkh_pos_timeout; int reassociation_deadline; int r1_max_key_lifetime; int r0_key_lifetime; scalar_t__ r1_key_holder; scalar_t__ nas_identifier; scalar_t__ mobility_domain; TYPE_1__ ssid; int sae_require_mfp; int group_mgmt_cipher; int okc; int ocv; int wmm_uapsd; int wmm_enabled; scalar_t__ rsn_preauth; void* rsn_pairwise; int wpa_pairwise_update_count; int wpa_disable_eapol_key_retries; int wpa_group_update_count; int wpa_ptk_rekey; int wpa_gmk_rekey; int wpa_strict_rekey; int wpa_group_rekey; void* wpa_group; scalar_t__ wpa_pairwise; int wpa_key_mgmt; int wpa; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,scalar_t__,int) ;
 int FUNC_1 (struct wpa_auth_config*,int ,int) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct hostapd_bss_config *VAR_9,
      struct hostapd_config *VAR_10,
      struct wpa_auth_config *VAR_11)
{
 FUNC_1(VAR_11, 0, sizeof(*VAR_11));
 VAR_11->wpa = VAR_9->wpa;
 VAR_11->wpa_key_mgmt = VAR_9->wpa_key_mgmt;
 VAR_11->wpa_pairwise = VAR_9->wpa_pairwise;
 VAR_11->wpa_group = VAR_9->wpa_group;
 VAR_11->wpa_group_rekey = VAR_9->wpa_group_rekey;
 VAR_11->wpa_strict_rekey = VAR_9->wpa_strict_rekey;
 VAR_11->wpa_gmk_rekey = VAR_9->wpa_gmk_rekey;
 VAR_11->wpa_ptk_rekey = VAR_9->wpa_ptk_rekey;
 VAR_11->wpa_group_update_count = VAR_9->wpa_group_update_count;
 VAR_11->wpa_disable_eapol_key_retries =
  VAR_9->wpa_disable_eapol_key_retries;
 VAR_11->wpa_pairwise_update_count = VAR_9->wpa_pairwise_update_count;
 VAR_11->rsn_pairwise = VAR_9->rsn_pairwise;
 VAR_11->rsn_preauth = VAR_9->rsn_preauth;
 VAR_11->eapol_version = VAR_9->eapol_version;




 VAR_11->wmm_enabled = VAR_9->wmm_enabled;
 VAR_11->wmm_uapsd = VAR_9->wmm_uapsd;
 VAR_11->disable_pmksa_caching = VAR_9->disable_pmksa_caching;



 VAR_11->okc = VAR_9->okc;
}

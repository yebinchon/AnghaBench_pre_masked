
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_sm {int fils_cache_id_set; scalar_t__ wpa_rsc_relaxation; scalar_t__ p2p; scalar_t__ wpa_ptk_rekey; scalar_t__ ssid_len; int * eap_conf_ctx; scalar_t__ eap_workaround; scalar_t__ proactive_key_caching; scalar_t__ allowed_pairwise_cipher; int * network_ctx; int fils_cache_id; int ssid; } ;
struct rsn_supp_config {scalar_t__ fils_cache_id; scalar_t__ wpa_rsc_relaxation; scalar_t__ p2p; scalar_t__ wpa_ptk_rekey; scalar_t__ ssid_len; scalar_t__ ssid; int * eap_conf_ctx; scalar_t__ eap_workaround; scalar_t__ proactive_key_caching; scalar_t__ allowed_pairwise_cipher; int * network_ctx; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,scalar_t__,scalar_t__) ;

void FUNC_1(struct wpa_sm *VAR_1, struct rsn_supp_config *VAR_2)
{
 if (!VAR_1)
  return;

 if (VAR_2) {
  VAR_1->network_ctx = VAR_2->network_ctx;
  VAR_1->allowed_pairwise_cipher = VAR_2->allowed_pairwise_cipher;
  VAR_1->proactive_key_caching = VAR_2->proactive_key_caching;
  VAR_1->eap_workaround = VAR_2->eap_workaround;
  VAR_1->eap_conf_ctx = VAR_2->eap_conf_ctx;
  if (VAR_2->ssid) {
   FUNC_0(VAR_1->ssid, VAR_2->ssid, VAR_2->ssid_len);
   VAR_1->ssid_len = VAR_2->ssid_len;
  } else
   VAR_1->ssid_len = 0;
  VAR_1->wpa_ptk_rekey = VAR_2->wpa_ptk_rekey;
  VAR_1->p2p = VAR_2->p2p;
  VAR_1->wpa_rsc_relaxation = VAR_2->wpa_rsc_relaxation;
 } else {
  VAR_1->network_ctx = ((void*)0);
  VAR_1->allowed_pairwise_cipher = 0;
  VAR_1->proactive_key_caching = 0;
  VAR_1->eap_workaround = 0;
  VAR_1->eap_conf_ctx = ((void*)0);
  VAR_1->ssid_len = 0;
  VAR_1->wpa_ptk_rekey = 0;
  VAR_1->p2p = 0;
  VAR_1->wpa_rsc_relaxation = 0;
 }
}

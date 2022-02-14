
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wpabuf {int dummy; } ;
struct wpa_supplicant {int wpa; scalar_t__ current_bss; int key_mgmt; TYPE_1__* conf; int p2p_disable_ip_addr_req; } ;
struct wpa_ssid {scalar_t__ proactive_key_caching; scalar_t__ p2p_group; int wpa_ptk_rekey; int ssid_len; int ssid; int eap; int eap_workaround; int pairwise_cipher; } ;
struct rsn_supp_config {scalar_t__ proactive_key_caching; int p2p; int fils_cache_id; int wpa_rsc_relaxation; int wpa_ptk_rekey; int ssid_len; int ssid; int * eap_conf_ctx; int eap_workaround; int allowed_pairwise_cipher; struct wpa_ssid* network_ctx; } ;
typedef int conf ;
struct TYPE_2__ {scalar_t__ okc; int wpa_rsc_relaxation; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rsn_supp_config*,int ,int) ;
 int FUNC_1 (struct wpabuf*) ;
 int FUNC_2 (scalar_t__) ;
 struct wpabuf* FUNC_3 (scalar_t__,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,struct rsn_supp_config*) ;
 int FUNC_6 (struct wpabuf*) ;

void FUNC_7(struct wpa_supplicant *VAR_2,
     struct wpa_ssid *VAR_3)
{
 struct rsn_supp_config VAR_4;
 if (VAR_3) {
  FUNC_0(&VAR_4, 0, sizeof(VAR_4));
  VAR_4.network_ctx = VAR_3;
  VAR_4.allowed_pairwise_cipher = VAR_3->pairwise_cipher;






  VAR_4.ssid = VAR_3->ssid;
  VAR_4.ssid_len = VAR_3->ssid_len;
  VAR_4.wpa_ptk_rekey = VAR_3->wpa_ptk_rekey;
  VAR_4.wpa_rsc_relaxation = VAR_2->conf->wpa_rsc_relaxation;





 }
 FUNC_5(VAR_2->wpa, VAR_3 ? &VAR_4 : ((void*)0));
}

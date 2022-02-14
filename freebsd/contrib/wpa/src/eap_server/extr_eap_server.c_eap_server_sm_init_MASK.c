
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eapol_callbacks {int dummy; } ;
struct eap_sm {int MaxRetrans; int eap_fast_a_id_len; int tls_test_flags; int tls_flags; int tls_session_lifetime; int erp; int server_id_len; int server_id; int pbc_in_m1; int pwd_group; int fragment_size; void* peer_addr; void* assoc_p2p_ie; void* assoc_wps_ie; int wps; int tnc; int eap_sim_id; int eap_sim_aka_result_ind; int eap_teap_pac_no_inner; int eap_teap_auth; int pac_key_refresh_time; int pac_key_lifetime; int eap_fast_prov; int eap_fast_a_id_info; void* eap_fast_a_id; void* pac_opaque_encr_key; int eap_server; int backend_auth; int eap_sim_db_priv; int msg_ctx; int ssl_ctx; struct eapol_callbacks const* eapol_cb; void* eapol_ctx; } ;
struct eap_config {int eap_fast_a_id_len; int tls_test_flags; int tls_flags; int tls_session_lifetime; int erp; int server_id_len; int server_id; int pbc_in_m1; int pwd_group; int fragment_size; int peer_addr; scalar_t__ assoc_p2p_ie; scalar_t__ assoc_wps_ie; int wps; int tnc; int eap_sim_id; int eap_sim_aka_result_ind; int eap_teap_pac_no_inner; int eap_teap_auth; int pac_key_refresh_time; int pac_key_lifetime; int eap_fast_prov; scalar_t__ eap_fast_a_id_info; int eap_fast_a_id; int pac_opaque_encr_key; int eap_server; int backend_auth; int eap_sim_db_priv; int msg_ctx; int ssl_ctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (void*,int ,int) ;
 int FUNC_2 (scalar_t__) ;
 struct eap_sm* FUNC_3 (int) ;
 int FUNC_4 (int ,char*) ;
 void* FUNC_5 (scalar_t__) ;

struct eap_sm * FUNC_6(void *VAR_2,
       const struct eapol_callbacks *VAR_3,
       struct eap_config *VAR_4)
{
 struct eap_sm *VAR_5;

 VAR_5 = FUNC_3(sizeof(*VAR_5));
 if (VAR_5 == ((void*)0))
  return ((void*)0);
 VAR_5->eapol_ctx = VAR_2;
 VAR_5->eapol_cb = VAR_3;
 VAR_5->MaxRetrans = 5;
 VAR_5->ssl_ctx = VAR_4->ssl_ctx;
 VAR_5->msg_ctx = VAR_4->msg_ctx;
 VAR_5->eap_sim_db_priv = VAR_4->eap_sim_db_priv;
 VAR_5->backend_auth = VAR_4->backend_auth;
 VAR_5->eap_server = VAR_4->eap_server;
 if (VAR_4->pac_opaque_encr_key) {
  VAR_5->pac_opaque_encr_key = FUNC_0(16);
  if (VAR_5->pac_opaque_encr_key) {
   FUNC_1(VAR_5->pac_opaque_encr_key,
      VAR_4->pac_opaque_encr_key, 16);
  }
 }
 if (VAR_4->eap_fast_a_id) {
  VAR_5->eap_fast_a_id = FUNC_0(VAR_4->eap_fast_a_id_len);
  if (VAR_5->eap_fast_a_id) {
   FUNC_1(VAR_5->eap_fast_a_id, VAR_4->eap_fast_a_id,
      VAR_4->eap_fast_a_id_len);
   VAR_5->eap_fast_a_id_len = VAR_4->eap_fast_a_id_len;
  }
 }
 if (VAR_4->eap_fast_a_id_info)
  VAR_5->eap_fast_a_id_info = FUNC_2(VAR_4->eap_fast_a_id_info);
 VAR_5->eap_fast_prov = VAR_4->eap_fast_prov;
 VAR_5->pac_key_lifetime = VAR_4->pac_key_lifetime;
 VAR_5->pac_key_refresh_time = VAR_4->pac_key_refresh_time;
 VAR_5->eap_teap_auth = VAR_4->eap_teap_auth;
 VAR_5->eap_teap_pac_no_inner = VAR_4->eap_teap_pac_no_inner;
 VAR_5->eap_sim_aka_result_ind = VAR_4->eap_sim_aka_result_ind;
 VAR_5->eap_sim_id = VAR_4->eap_sim_id;
 VAR_5->tnc = VAR_4->tnc;
 VAR_5->wps = VAR_4->wps;
 if (VAR_4->assoc_wps_ie)
  VAR_5->assoc_wps_ie = FUNC_5(VAR_4->assoc_wps_ie);
 if (VAR_4->assoc_p2p_ie)
  VAR_5->assoc_p2p_ie = FUNC_5(VAR_4->assoc_p2p_ie);
 if (VAR_4->peer_addr)
  FUNC_1(VAR_5->peer_addr, VAR_4->peer_addr, VAR_0);
 VAR_5->fragment_size = VAR_4->fragment_size;
 VAR_5->pwd_group = VAR_4->pwd_group;
 VAR_5->pbc_in_m1 = VAR_4->pbc_in_m1;
 VAR_5->server_id = VAR_4->server_id;
 VAR_5->server_id_len = VAR_4->server_id_len;
 VAR_5->erp = VAR_4->erp;
 VAR_5->tls_session_lifetime = VAR_4->tls_session_lifetime;
 VAR_5->tls_flags = VAR_4->tls_flags;





 FUNC_4(VAR_1, "EAP: Server state machine created");

 return VAR_5;
}

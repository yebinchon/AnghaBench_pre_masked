
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eapol_auth_config {int eap_req_id_text_len; int eap_fast_a_id_len; int tls_flags; int tls_session_lifetime; int erp; int erp_send_reauth_start; int * erp_domain; int fragment_size; int wps; int tnc; int eap_sim_id; int eap_sim_aka_result_ind; int eap_teap_pac_no_inner; int eap_teap_auth; int pac_key_refresh_time; int pac_key_lifetime; int eap_fast_prov; int * eap_fast_a_id_info; int * eap_fast_a_id; int * pac_opaque_encr_key; int * eap_req_id_text; int server_id_len; int server_id; int pbc_in_m1; int pwd_group; int eap_sim_db_priv; int msg_ctx; int ssl_ctx; int eap_server; int individual_wep_key_len; int wpa; int eap_reauth_period; int ctx; } ;


 int FUNC_0 (struct eapol_auth_config*) ;
 int FUNC_1 (int *) ;
 void* FUNC_2 (int *,int) ;
 void* FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct eapol_auth_config *VAR_0,
     struct eapol_auth_config *VAR_1)
{
 VAR_0->ctx = VAR_1->ctx;
 VAR_0->eap_reauth_period = VAR_1->eap_reauth_period;
 VAR_0->wpa = VAR_1->wpa;
 VAR_0->individual_wep_key_len = VAR_1->individual_wep_key_len;
 VAR_0->eap_server = VAR_1->eap_server;
 VAR_0->ssl_ctx = VAR_1->ssl_ctx;
 VAR_0->msg_ctx = VAR_1->msg_ctx;
 VAR_0->eap_sim_db_priv = VAR_1->eap_sim_db_priv;
 FUNC_1(VAR_0->eap_req_id_text);
 VAR_0->pwd_group = VAR_1->pwd_group;
 VAR_0->pbc_in_m1 = VAR_1->pbc_in_m1;
 VAR_0->server_id = VAR_1->server_id;
 VAR_0->server_id_len = VAR_1->server_id_len;
 if (VAR_1->eap_req_id_text) {
  VAR_0->eap_req_id_text = FUNC_2(VAR_1->eap_req_id_text,
       VAR_1->eap_req_id_text_len);
  if (VAR_0->eap_req_id_text == ((void*)0))
   return -1;
  VAR_0->eap_req_id_text_len = VAR_1->eap_req_id_text_len;
 } else {
  VAR_0->eap_req_id_text = ((void*)0);
  VAR_0->eap_req_id_text_len = 0;
 }
 if (VAR_1->pac_opaque_encr_key) {
  VAR_0->pac_opaque_encr_key = FUNC_2(VAR_1->pac_opaque_encr_key,
           16);
  if (VAR_0->pac_opaque_encr_key == ((void*)0))
   goto fail;
 } else
  VAR_0->pac_opaque_encr_key = ((void*)0);
 if (VAR_1->eap_fast_a_id) {
  VAR_0->eap_fast_a_id = FUNC_2(VAR_1->eap_fast_a_id,
            VAR_1->eap_fast_a_id_len);
  if (VAR_0->eap_fast_a_id == ((void*)0))
   goto fail;
  VAR_0->eap_fast_a_id_len = VAR_1->eap_fast_a_id_len;
 } else
  VAR_0->eap_fast_a_id = ((void*)0);
 if (VAR_1->eap_fast_a_id_info) {
  VAR_0->eap_fast_a_id_info = FUNC_3(VAR_1->eap_fast_a_id_info);
  if (VAR_0->eap_fast_a_id_info == ((void*)0))
   goto fail;
 } else
  VAR_0->eap_fast_a_id_info = ((void*)0);
 VAR_0->eap_fast_prov = VAR_1->eap_fast_prov;
 VAR_0->pac_key_lifetime = VAR_1->pac_key_lifetime;
 VAR_0->pac_key_refresh_time = VAR_1->pac_key_refresh_time;
 VAR_0->eap_teap_auth = VAR_1->eap_teap_auth;
 VAR_0->eap_teap_pac_no_inner = VAR_1->eap_teap_pac_no_inner;
 VAR_0->eap_sim_aka_result_ind = VAR_1->eap_sim_aka_result_ind;
 VAR_0->eap_sim_id = VAR_1->eap_sim_id;
 VAR_0->tnc = VAR_1->tnc;
 VAR_0->wps = VAR_1->wps;
 VAR_0->fragment_size = VAR_1->fragment_size;

 FUNC_1(VAR_0->erp_domain);
 if (VAR_1->erp_domain) {
  VAR_0->erp_domain = FUNC_3(VAR_1->erp_domain);
  if (VAR_0->erp_domain == ((void*)0))
   goto fail;
 } else {
  VAR_0->erp_domain = ((void*)0);
 }
 VAR_0->erp_send_reauth_start = VAR_1->erp_send_reauth_start;
 VAR_0->erp = VAR_1->erp;
 VAR_0->tls_session_lifetime = VAR_1->tls_session_lifetime;
 VAR_0->tls_flags = VAR_1->tls_flags;

 return 0;

fail:
 FUNC_0(VAR_0);
 return -1;
}

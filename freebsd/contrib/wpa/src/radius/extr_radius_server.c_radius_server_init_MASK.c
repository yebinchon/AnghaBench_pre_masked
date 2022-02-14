
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radius_server_data {int auth_sock; int acct_sock; int eap_fast_a_id_len; int eap_req_id_text_len; int * clients; void* dump_msk_file; int db; void* t_c_server_url; void* hs20_sim_provisioning_url; int subscr_remediation_method; void* subscr_remediation_url; int tls_flags; int tls_session_lifetime; int erp_domain; int erp; void* eap_req_id_text; int server_id; int pwd_group; int wps; int tnc; int eap_sim_id; int eap_sim_aka_result_ind; int get_eap_user; int eap_teap_pac_no_inner; int eap_teap_auth; int pac_key_refresh_time; int pac_key_lifetime; int eap_fast_prov; void* eap_fast_a_id_info; void* eap_fast_a_id; void* pac_opaque_encr_key; scalar_t__ ipv6; int msg_ctx; int ssl_ctx; int eap_sim_db_priv; int conf_ctx; int start_time; int erp_keys; } ;
struct radius_server_conf {int eap_fast_a_id_len; int eap_req_id_text_len; scalar_t__ acct_port; scalar_t__ ipv6; scalar_t__ auth_port; int client_file; scalar_t__ dump_msk_file; scalar_t__ sqlite_file; scalar_t__ t_c_server_url; scalar_t__ hs20_sim_provisioning_url; int subscr_remediation_method; scalar_t__ subscr_remediation_url; int tls_flags; int tls_session_lifetime; int erp_domain; int erp; int eap_req_id_text; int server_id; int pwd_group; int wps; int tnc; int eap_sim_id; int eap_sim_aka_result_ind; int get_eap_user; int eap_teap_pac_no_inner; int eap_teap_auth; int pac_key_refresh_time; int pac_key_lifetime; int eap_fast_prov; scalar_t__ eap_fast_a_id_info; int eap_fast_a_id; int pac_opaque_encr_key; int msg_ctx; int ssl_ctx; int eap_sim_db_priv; int conf_ctx; } ;


 int VAR_0 ;
 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int,int ,struct radius_server_data*,int *) ;
 int FUNC_3 (int *) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (void*,int ,int) ;
 void* FUNC_6 (scalar_t__) ;
 struct radius_server_data* FUNC_7 (int) ;
 int FUNC_8 (struct radius_server_data*) ;
 void* FUNC_9 (scalar_t__) ;
 void* FUNC_10 (scalar_t__) ;
 int * FUNC_11 (int ,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_12 (scalar_t__,int *) ;
 int FUNC_13 (int ,char*) ;

struct radius_server_data *
FUNC_14(struct radius_server_conf *VAR_3)
{
 struct radius_server_data *VAR_4;


 if (VAR_3->ipv6) {
  FUNC_13(VAR_0, "RADIUS server compiled without IPv6 support");
  return ((void*)0);
 }


 VAR_4 = FUNC_7(sizeof(*VAR_4));
 if (VAR_4 == ((void*)0))
  return ((void*)0);

 VAR_4->auth_sock = -1;
 VAR_4->acct_sock = -1;
 FUNC_1(&VAR_4->erp_keys);
 FUNC_3(&VAR_4->start_time);
 VAR_4->conf_ctx = VAR_3->conf_ctx;
 VAR_4->eap_sim_db_priv = VAR_3->eap_sim_db_priv;
 VAR_4->ssl_ctx = VAR_3->ssl_ctx;
 VAR_4->msg_ctx = VAR_3->msg_ctx;
 VAR_4->ipv6 = VAR_3->ipv6;
 if (VAR_3->pac_opaque_encr_key) {
  VAR_4->pac_opaque_encr_key = FUNC_4(16);
  if (VAR_4->pac_opaque_encr_key) {
   FUNC_5(VAR_4->pac_opaque_encr_key,
      VAR_3->pac_opaque_encr_key, 16);
  }
 }
 if (VAR_3->eap_fast_a_id) {
  VAR_4->eap_fast_a_id = FUNC_4(VAR_3->eap_fast_a_id_len);
  if (VAR_4->eap_fast_a_id) {
   FUNC_5(VAR_4->eap_fast_a_id, VAR_3->eap_fast_a_id,
      VAR_3->eap_fast_a_id_len);
   VAR_4->eap_fast_a_id_len = VAR_3->eap_fast_a_id_len;
  }
 }
 if (VAR_3->eap_fast_a_id_info)
  VAR_4->eap_fast_a_id_info = FUNC_6(VAR_3->eap_fast_a_id_info);
 VAR_4->eap_fast_prov = VAR_3->eap_fast_prov;
 VAR_4->pac_key_lifetime = VAR_3->pac_key_lifetime;
 VAR_4->pac_key_refresh_time = VAR_3->pac_key_refresh_time;
 VAR_4->eap_teap_auth = VAR_3->eap_teap_auth;
 VAR_4->eap_teap_pac_no_inner = VAR_3->eap_teap_pac_no_inner;
 VAR_4->get_eap_user = VAR_3->get_eap_user;
 VAR_4->eap_sim_aka_result_ind = VAR_3->eap_sim_aka_result_ind;
 VAR_4->eap_sim_id = VAR_3->eap_sim_id;
 VAR_4->tnc = VAR_3->tnc;
 VAR_4->wps = VAR_3->wps;
 VAR_4->pwd_group = VAR_3->pwd_group;
 VAR_4->server_id = VAR_3->server_id;
 if (VAR_3->eap_req_id_text) {
  VAR_4->eap_req_id_text = FUNC_4(VAR_3->eap_req_id_text_len);
  if (VAR_4->eap_req_id_text) {
   FUNC_5(VAR_4->eap_req_id_text, VAR_3->eap_req_id_text,
      VAR_3->eap_req_id_text_len);
   VAR_4->eap_req_id_text_len = VAR_3->eap_req_id_text_len;
  }
 }
 VAR_4->erp = VAR_3->erp;
 VAR_4->erp_domain = VAR_3->erp_domain;
 VAR_4->tls_session_lifetime = VAR_3->tls_session_lifetime;
 VAR_4->tls_flags = VAR_3->tls_flags;

 if (VAR_3->subscr_remediation_url) {
  VAR_4->subscr_remediation_url =
   FUNC_6(VAR_3->subscr_remediation_url);
 }
 VAR_4->subscr_remediation_method = VAR_3->subscr_remediation_method;
 if (VAR_3->hs20_sim_provisioning_url)
  VAR_4->hs20_sim_provisioning_url =
   FUNC_6(VAR_3->hs20_sim_provisioning_url);

 if (VAR_3->t_c_server_url)
  VAR_4->t_c_server_url = FUNC_6(VAR_3->t_c_server_url);
 VAR_4->clients = FUNC_11(VAR_3->client_file,
         VAR_3->ipv6);
 if (VAR_4->clients == ((void*)0)) {
  FUNC_13(VAR_0, "No RADIUS clients configured");
  FUNC_8(VAR_4);
  return ((void*)0);
 }






 VAR_4->auth_sock = FUNC_9(VAR_3->auth_port);
 if (VAR_4->auth_sock < 0) {
  FUNC_13(VAR_0, "Failed to open UDP socket for RADIUS authentication server");
  FUNC_8(VAR_4);
  return ((void*)0);
 }
 if (FUNC_2(VAR_4->auth_sock,
         VAR_2,
         VAR_4, ((void*)0))) {
  FUNC_8(VAR_4);
  return ((void*)0);
 }

 if (VAR_3->acct_port) {






  VAR_4->acct_sock = FUNC_9(VAR_3->acct_port);
  if (VAR_4->acct_sock < 0) {
   FUNC_13(VAR_0, "Failed to open UDP socket for RADIUS accounting server");
   FUNC_8(VAR_4);
   return ((void*)0);
  }
  if (FUNC_2(VAR_4->acct_sock,
          VAR_1,
          VAR_4, ((void*)0))) {
   FUNC_8(VAR_4);
   return ((void*)0);
  }
 } else {
  VAR_4->acct_sock = -1;
 }

 return VAR_4;
}

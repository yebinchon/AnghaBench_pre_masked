
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct hostapd_data {TYPE_2__* eapol_auth; TYPE_1__* conf; int radius; int wps; int eap_sim_db_priv; int msg_ctx; int ssl_ctx; int erp_keys; } ;
struct eapol_auth_config {int server_id_len; int erp_add_key; int erp_get_key; int eapol_event; int tx_key; int abort_auth; int set_port_authorized; int logger; int sta_entry_alive; int get_eap_user; int finished; int aaa_send; int eapol_send; int const* server_id; int pbc_in_m1; int pwd_group; int fragment_size; int wps; int tnc; int eap_sim_id; int eap_sim_aka_result_ind; int eap_teap_pac_no_inner; int eap_teap_auth; int pac_key_refresh_time; int pac_key_lifetime; int eap_fast_prov; int eap_fast_a_id_info; int eap_fast_a_id_len; int eap_fast_a_id; int pac_opaque_encr_key; int tls_flags; int tls_session_lifetime; int erp; int erp_domain; int erp_send_reauth_start; int eap_req_id_text_len; int eap_req_id_text; int eap_sim_db_priv; int msg_ctx; int ssl_ctx; int eap_server; int individual_wep_key_len; scalar_t__ wpa; int eap_reauth_period; struct hostapd_data* ctx; } ;
struct eapol_auth_cb {int server_id_len; int erp_add_key; int erp_get_key; int eapol_event; int tx_key; int abort_auth; int set_port_authorized; int logger; int sta_entry_alive; int get_eap_user; int finished; int aaa_send; int eapol_send; int const* server_id; int pbc_in_m1; int pwd_group; int fragment_size; int wps; int tnc; int eap_sim_id; int eap_sim_aka_result_ind; int eap_teap_pac_no_inner; int eap_teap_auth; int pac_key_refresh_time; int pac_key_lifetime; int eap_fast_prov; int eap_fast_a_id_info; int eap_fast_a_id_len; int eap_fast_a_id; int pac_opaque_encr_key; int tls_flags; int tls_session_lifetime; int erp; int erp_domain; int erp_send_reauth_start; int eap_req_id_text_len; int eap_req_id_text; int eap_sim_db_priv; int msg_ctx; int ssl_ctx; int eap_server; int individual_wep_key_len; scalar_t__ wpa; int eap_reauth_period; struct hostapd_data* ctx; } ;
typedef int conf ;
typedef int cb ;
struct TYPE_4__ {int * default_wep_key; } ;
struct TYPE_3__ {int iface; scalar_t__ default_wep_key_len; scalar_t__ wpa; scalar_t__ ieee802_1x; scalar_t__ server_id; int pbc_in_m1; int pwd_group; int fragment_size; int tnc; int eap_sim_id; int eap_sim_aka_result_ind; int eap_teap_pac_no_inner; int eap_teap_auth; int pac_key_refresh_time; int pac_key_lifetime; int eap_fast_prov; int eap_fast_a_id_info; int eap_fast_a_id_len; int eap_fast_a_id; int pac_opaque_encr_key; int tls_flags; int tls_session_lifetime; int eap_server_erp; int erp_domain; int erp_send_reauth_start; int eap_req_id_text_len; int eap_req_id_text; int eap_server; int individual_wep_key_len; int eap_reauth_period; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 TYPE_2__* FUNC_1 (struct eapol_auth_config*,struct eapol_auth_config*) ;
 int FUNC_2 (int ,struct hostapd_data*,int ,int *,int,int ,int *,int ,int *,int ) ;
 scalar_t__ FUNC_3 (struct hostapd_data*,int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_4 (struct hostapd_data*,int *) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_5 (struct eapol_auth_config*,int ,int) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (int ,int ,int ,struct hostapd_data*) ;

int FUNC_8(struct hostapd_data *VAR_15)
{
 int VAR_16;
 struct eapol_auth_config VAR_17;
 struct eapol_auth_cb VAR_18;

 FUNC_0(&VAR_15->erp_keys);

 FUNC_5(&VAR_17, 0, sizeof(VAR_17));
 VAR_17.ctx = VAR_15;
 VAR_17.eap_reauth_period = VAR_15->conf->eap_reauth_period;
 VAR_17.wpa = VAR_15->conf->wpa;
 VAR_17.individual_wep_key_len = VAR_15->conf->individual_wep_key_len;
 VAR_17.eap_server = VAR_15->conf->eap_server;
 VAR_17.ssl_ctx = VAR_15->ssl_ctx;
 VAR_17.msg_ctx = VAR_15->msg_ctx;
 VAR_17.eap_sim_db_priv = VAR_15->eap_sim_db_priv;
 VAR_17.eap_req_id_text = VAR_15->conf->eap_req_id_text;
 VAR_17.eap_req_id_text_len = VAR_15->conf->eap_req_id_text_len;
 VAR_17.erp_send_reauth_start = VAR_15->conf->erp_send_reauth_start;
 VAR_17.erp_domain = VAR_15->conf->erp_domain;
 VAR_17.erp = VAR_15->conf->eap_server_erp;
 VAR_17.tls_session_lifetime = VAR_15->conf->tls_session_lifetime;
 VAR_17.tls_flags = VAR_15->conf->tls_flags;
 VAR_17.pac_opaque_encr_key = VAR_15->conf->pac_opaque_encr_key;
 VAR_17.eap_fast_a_id = VAR_15->conf->eap_fast_a_id;
 VAR_17.eap_fast_a_id_len = VAR_15->conf->eap_fast_a_id_len;
 VAR_17.eap_fast_a_id_info = VAR_15->conf->eap_fast_a_id_info;
 VAR_17.eap_fast_prov = VAR_15->conf->eap_fast_prov;
 VAR_17.pac_key_lifetime = VAR_15->conf->pac_key_lifetime;
 VAR_17.pac_key_refresh_time = VAR_15->conf->pac_key_refresh_time;
 VAR_17.eap_teap_auth = VAR_15->conf->eap_teap_auth;
 VAR_17.eap_teap_pac_no_inner = VAR_15->conf->eap_teap_pac_no_inner;
 VAR_17.eap_sim_aka_result_ind = VAR_15->conf->eap_sim_aka_result_ind;
 VAR_17.eap_sim_id = VAR_15->conf->eap_sim_id;
 VAR_17.tnc = VAR_15->conf->tnc;
 VAR_17.wps = VAR_15->wps;
 VAR_17.fragment_size = VAR_15->conf->fragment_size;
 VAR_17.pwd_group = VAR_15->conf->pwd_group;
 VAR_17.pbc_in_m1 = VAR_15->conf->pbc_in_m1;
 if (VAR_15->conf->server_id) {
  VAR_17.server_id = (const u8 *) VAR_15->conf->server_id;
  VAR_17.server_id_len = FUNC_6(VAR_15->conf->server_id);
 } else {
  VAR_17.server_id = (const u8 *) "hostapd";
  VAR_17.server_id_len = 7;
 }

 FUNC_5(&VAR_18, 0, sizeof(VAR_18));
 VAR_18.eapol_send = VAR_7;
 VAR_18.aaa_send = VAR_5;
 VAR_18.finished = VAR_3;
 VAR_18.get_eap_user = VAR_10;
 VAR_18.sta_entry_alive = VAR_14;
 VAR_18.logger = VAR_11;
 VAR_18.set_port_authorized = VAR_13;
 VAR_18.abort_auth = VAR_2;
 VAR_18.tx_key = VAR_4;
 VAR_18.eapol_event = VAR_6;





 VAR_15->eapol_auth = FUNC_1(&VAR_17, &VAR_18);
 if (VAR_15->eapol_auth == ((void*)0))
  return -1;

 if ((VAR_15->conf->ieee802_1x || VAR_15->conf->wpa) &&
     FUNC_3(VAR_15, VAR_15->conf->iface, 1))
  return -1;


 if (FUNC_7(VAR_15->radius, VAR_0,
       VAR_12, VAR_15))
  return -1;


 if (VAR_15->conf->default_wep_key_len) {
  for (VAR_16 = 0; VAR_16 < 4; VAR_16++)
   FUNC_2(VAR_15->conf->iface, VAR_15,
         VAR_1, ((void*)0), VAR_16, 0, ((void*)0), 0,
         ((void*)0), 0);

  FUNC_4(VAR_15, ((void*)0));

  if (VAR_15->eapol_auth->default_wep_key == ((void*)0))
   return -1;
 }

 return 0;
}

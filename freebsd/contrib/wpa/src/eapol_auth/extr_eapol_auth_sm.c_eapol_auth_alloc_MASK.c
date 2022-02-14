
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eapol_state_machine {int radius_identifier; int flags; scalar_t__ reAuthPeriod; int acct_multi_session_id; int radius_cui; int identity_len; int * identity; int * eap; int eap_if; void* portValid; void* keyTxEnabled; int portControl; int ctrl_dir_state; int key_rx_state; int auth_key_tx_state; void* reAuthEnabled; int reauth_timer_state; int serverTimeout; int be_auth_state; int reAuthMax; int quietPeriod; int auth_pae_state; void* sta; struct eapol_authenticator* eapol; int addr; } ;
struct TYPE_2__ {scalar_t__ eap_reauth_period; scalar_t__ individual_wep_key_len; int tls_flags; int tls_session_lifetime; int erp; int server_id_len; int server_id; int pbc_in_m1; int pwd_group; int fragment_size; int wps; int tnc; int eap_sim_id; int eap_sim_aka_result_ind; int eap_teap_pac_no_inner; int eap_teap_auth; int pac_key_refresh_time; int pac_key_lifetime; int eap_fast_prov; int eap_fast_a_id_info; int eap_fast_a_id_len; int eap_fast_a_id; int pac_opaque_encr_key; int eap_sim_db_priv; int msg_ctx; int ssl_ctx; int eap_server; scalar_t__ wpa; } ;
struct eapol_authenticator {TYPE_1__ conf; scalar_t__ default_wep_key; } ;
struct eap_config {int tls_flags; int tls_session_lifetime; int erp; int server_id_len; int server_id; int pbc_in_m1; int pwd_group; int fragment_size; int const* peer_addr; struct wpabuf const* assoc_p2p_ie; struct wpabuf const* assoc_wps_ie; int wps; int tnc; int eap_sim_id; int eap_sim_aka_result_ind; int eap_teap_pac_no_inner; int eap_teap_auth; int pac_key_refresh_time; int pac_key_lifetime; int eap_fast_prov; int eap_fast_a_id_info; int eap_fast_a_id_len; int eap_fast_a_id; int pac_opaque_encr_key; int eap_sim_db_priv; int msg_ctx; int ssl_ctx; int eap_server; } ;
typedef int eap_conf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 void* VAR_13 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (struct eapol_state_machine*,int *,struct eap_config*) ;
 int FUNC_2 (struct eapol_state_machine*) ;
 int FUNC_3 (struct eapol_state_machine*) ;
 int VAR_14 ;
 int FUNC_4 (int ,int const*,int ) ;
 int FUNC_5 (struct eap_config*,int ,int) ;
 scalar_t__ FUNC_6 (char const*) ;
 int FUNC_7 (char const*) ;
 struct eapol_state_machine* FUNC_8 (int) ;
 scalar_t__ FUNC_9 (int *,int) ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 (char const*,int ) ;

struct eapol_state_machine *
FUNC_12(struct eapol_authenticator *VAR_15, const u8 *VAR_16,
   int VAR_17, const struct wpabuf *VAR_18,
   const struct wpabuf *VAR_19, void *VAR_20,
   const char *VAR_21, const char *VAR_22)
{
 struct eapol_state_machine *VAR_23;
 struct eap_config VAR_24;

 if (VAR_15 == ((void*)0))
  return ((void*)0);

 VAR_23 = FUNC_8(sizeof(*VAR_23));
 if (VAR_23 == ((void*)0)) {
  FUNC_10(VAR_11, "IEEE 802.1X state machine allocation "
      "failed");
  return ((void*)0);
 }
 VAR_23->radius_identifier = -1;
 FUNC_4(VAR_23->addr, VAR_16, VAR_8);
 VAR_23->flags = VAR_17;

 VAR_23->eapol = VAR_15;
 VAR_23->sta = VAR_20;


 VAR_23->auth_pae_state = VAR_3;
 VAR_23->quietPeriod = VAR_1;
 VAR_23->reAuthMax = VAR_2;

 VAR_23->be_auth_state = VAR_6;
 VAR_23->serverTimeout = VAR_5;

 VAR_23->reauth_timer_state = VAR_12;
 VAR_23->reAuthPeriod = VAR_15->conf.eap_reauth_period;
 VAR_23->reAuthEnabled = VAR_15->conf.eap_reauth_period > 0 ? VAR_13 : VAR_9;

 VAR_23->auth_key_tx_state = VAR_0;

 VAR_23->key_rx_state = VAR_10;

 VAR_23->ctrl_dir_state = VAR_7;

 VAR_23->portControl = VAR_4;

 if (!VAR_15->conf.wpa &&
     (VAR_15->default_wep_key || VAR_15->conf.individual_wep_key_len > 0))
  VAR_23->keyTxEnabled = VAR_13;
 else
  VAR_23->keyTxEnabled = VAR_9;
 if (VAR_15->conf.wpa)
  VAR_23->portValid = VAR_9;
 else
  VAR_23->portValid = VAR_13;

 FUNC_5(&VAR_24, 0, sizeof(VAR_24));
 VAR_24.eap_server = VAR_15->conf.eap_server;
 VAR_24.ssl_ctx = VAR_15->conf.ssl_ctx;
 VAR_24.msg_ctx = VAR_15->conf.msg_ctx;
 VAR_24.eap_sim_db_priv = VAR_15->conf.eap_sim_db_priv;
 VAR_24.pac_opaque_encr_key = VAR_15->conf.pac_opaque_encr_key;
 VAR_24.eap_fast_a_id = VAR_15->conf.eap_fast_a_id;
 VAR_24.eap_fast_a_id_len = VAR_15->conf.eap_fast_a_id_len;
 VAR_24.eap_fast_a_id_info = VAR_15->conf.eap_fast_a_id_info;
 VAR_24.eap_fast_prov = VAR_15->conf.eap_fast_prov;
 VAR_24.pac_key_lifetime = VAR_15->conf.pac_key_lifetime;
 VAR_24.pac_key_refresh_time = VAR_15->conf.pac_key_refresh_time;
 VAR_24.eap_teap_auth = VAR_15->conf.eap_teap_auth;
 VAR_24.eap_teap_pac_no_inner = VAR_15->conf.eap_teap_pac_no_inner;
 VAR_24.eap_sim_aka_result_ind = VAR_15->conf.eap_sim_aka_result_ind;
 VAR_24.eap_sim_id = VAR_15->conf.eap_sim_id;
 VAR_24.tnc = VAR_15->conf.tnc;
 VAR_24.wps = VAR_15->conf.wps;
 VAR_24.assoc_wps_ie = VAR_18;
 VAR_24.assoc_p2p_ie = VAR_19;
 VAR_24.peer_addr = VAR_16;
 VAR_24.fragment_size = VAR_15->conf.fragment_size;
 VAR_24.pwd_group = VAR_15->conf.pwd_group;
 VAR_24.pbc_in_m1 = VAR_15->conf.pbc_in_m1;
 VAR_24.server_id = VAR_15->conf.server_id;
 VAR_24.server_id_len = VAR_15->conf.server_id_len;
 VAR_24.erp = VAR_15->conf.erp;
 VAR_24.tls_session_lifetime = VAR_15->conf.tls_session_lifetime;
 VAR_24.tls_flags = VAR_15->conf.tls_flags;
 VAR_23->eap = FUNC_1(VAR_23, &VAR_14, &VAR_24);
 if (VAR_23->eap == ((void*)0)) {
  FUNC_2(VAR_23);
  return ((void*)0);
 }
 VAR_23->eap_if = FUNC_0(VAR_23->eap);

 FUNC_3(VAR_23);

 if (VAR_21) {
  VAR_23->identity = (u8 *) FUNC_6(VAR_21);
  if (VAR_23->identity)
   VAR_23->identity_len = FUNC_7(VAR_21);
 }
 if (VAR_22)
  VAR_23->radius_cui = FUNC_11(VAR_22,
         FUNC_7(VAR_22));


 if (FUNC_9((u8 *) &VAR_23->acct_multi_session_id,
      sizeof(VAR_23->acct_multi_session_id)) < 0) {
  FUNC_2(VAR_23);
  return ((void*)0);
 }


 return VAR_23;
}

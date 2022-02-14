
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int erp_add_key; int erp_get_key; int eapol_event; int tx_key; int abort_auth; int set_port_authorized; int logger; int sta_entry_alive; int get_eap_user; int finished; int aaa_send; int eapol_send; } ;
struct eapol_authenticator {int default_wep_key_idx; TYPE_1__ cb; int conf; } ;
struct eapol_auth_config {scalar_t__ individual_wep_key_len; } ;
struct eapol_auth_cb {int erp_add_key; int erp_get_key; int eapol_event; int tx_key; int abort_auth; int set_port_authorized; int logger; int sta_entry_alive; int get_eap_user; int finished; int aaa_send; int eapol_send; } ;


 scalar_t__ FUNC_0 (int *,struct eapol_auth_config*) ;
 int FUNC_1 (struct eapol_authenticator*) ;
 struct eapol_authenticator* FUNC_2 (int) ;

struct eapol_authenticator * FUNC_3(struct eapol_auth_config *VAR_0,
          struct eapol_auth_cb *VAR_1)
{
 struct eapol_authenticator *VAR_2;

 VAR_2 = FUNC_2(sizeof(*VAR_2));
 if (VAR_2 == ((void*)0))
  return ((void*)0);

 if (FUNC_0(&VAR_2->conf, VAR_0) < 0) {
  FUNC_1(VAR_2);
  return ((void*)0);
 }

 if (VAR_0->individual_wep_key_len > 0) {

  VAR_2->default_wep_key_idx = 1;
 }

 VAR_2->cb.eapol_send = VAR_1->eapol_send;
 VAR_2->cb.aaa_send = VAR_1->aaa_send;
 VAR_2->cb.finished = VAR_1->finished;
 VAR_2->cb.get_eap_user = VAR_1->get_eap_user;
 VAR_2->cb.sta_entry_alive = VAR_1->sta_entry_alive;
 VAR_2->cb.logger = VAR_1->logger;
 VAR_2->cb.set_port_authorized = VAR_1->set_port_authorized;
 VAR_2->cb.abort_auth = VAR_1->abort_auth;
 VAR_2->cb.tx_key = VAR_1->tx_key;
 VAR_2->cb.eapol_event = VAR_1->eapol_event;
 VAR_2->cb.erp_get_key = VAR_1->erp_get_key;
 VAR_2->cb.erp_add_key = VAR_1->erp_add_key;

 return VAR_2;
}

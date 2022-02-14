
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_sm {int dummy; } ;
struct eap_sim_data {int reauth; size_t counter; int use_result_ind; scalar_t__ state; int * nonce_s; scalar_t__ num_notification; scalar_t__ num_id_req; scalar_t__ result_ind; int emsk; int msk; int mk; scalar_t__ reauth_id_len; int * reauth_id; scalar_t__ last_eap_identity_len; int * last_eap_identity; scalar_t__ counter_too_small; int k_encr; int * reauth_mac; int k_aut; } ;
struct eap_sim_attrs {scalar_t__ result_ind; int * nonce_s; scalar_t__ counter; int * iv; int encr_data_len; int * encr_data; int * mac; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct eap_sm*,struct eap_sim_data*,int) ;
 struct wpabuf* FUNC_1 (struct eap_sim_data*,int ,int ) ;
 int FUNC_2 (size_t,int *,scalar_t__,int *,int ,int ,int ) ;
 int FUNC_3 (struct eap_sm*,struct eap_sim_data*,struct eap_sim_attrs*) ;
 int * FUNC_4 (int ,int *,int ,int *,struct eap_sim_attrs*,int ) ;
 struct wpabuf* FUNC_5 (struct eap_sim_data*,int ,int,int *) ;
 int FUNC_6 (struct eap_sim_data*,int ) ;
 scalar_t__ FUNC_7 (int ,struct wpabuf const*,int *,int *,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *,int ) ;
 int FUNC_10 (int *,int,int ) ;
 int FUNC_11 (int ,char*,int *,int ) ;
 int FUNC_12 (int ,char*,...) ;

__attribute__((used)) static struct wpabuf * FUNC_13(
 struct eap_sm *VAR_12, struct eap_sim_data *VAR_13, u8 VAR_14,
 const struct wpabuf *VAR_15, struct eap_sim_attrs *VAR_16)
{
 struct eap_sim_attrs VAR_17;
 u8 *VAR_18;

 FUNC_12(VAR_7, "EAP-SIM: subtype Reauthentication");

 if (VAR_13->reauth_id == ((void*)0)) {
  FUNC_12(VAR_9, "EAP-SIM: Server is trying "
      "reauthentication, but no reauth_id available");
  return FUNC_1(VAR_13, VAR_14,
         VAR_5);
 }

 VAR_13->reauth = 1;
 if (FUNC_7(VAR_13->k_aut, VAR_15, VAR_16->mac, (u8 *) "", 0))
 {
  FUNC_12(VAR_9, "EAP-SIM: Reauthentication "
      "did not have valid AT_MAC");




  return FUNC_1(VAR_13, VAR_14,
         VAR_5);

 }
 FUNC_9(VAR_13->reauth_mac, VAR_16->mac, VAR_2);

 FUNC_11(VAR_7, "EAP-SIM: Server MAC",
      VAR_13->reauth_mac, VAR_2);

 if (VAR_16->encr_data == ((void*)0) || VAR_16->iv == ((void*)0)) {
  FUNC_12(VAR_9, "EAP-SIM: Reauthentication "
      "message did not include encrypted data");
  return FUNC_1(VAR_13, VAR_14,
         VAR_5);
 }

 VAR_18 = FUNC_4(VAR_13->k_encr, VAR_16->encr_data,
           VAR_16->encr_data_len, VAR_16->iv, &VAR_17,
           0);
 if (VAR_18 == ((void*)0)) {
  FUNC_12(VAR_9, "EAP-SIM: Failed to parse encrypted "
      "data from reauthentication message");
  return FUNC_1(VAR_13, VAR_14,
         VAR_5);
 }

 if (VAR_17.nonce_s == ((void*)0) || VAR_17.counter < 0) {
  FUNC_12(VAR_8, "EAP-SIM: (encr) No%s%s in reauth packet",
      !VAR_17.nonce_s ? " AT_NONCE_S" : "",
      VAR_17.counter < 0 ? " AT_COUNTER" : "");
  FUNC_8(VAR_18);
  return FUNC_1(VAR_13, VAR_14,
         VAR_5);
 }

 if (VAR_17.counter < 0 || (size_t) VAR_17.counter <= VAR_13->counter) {
  struct wpabuf *VAR_19;
  FUNC_12(VAR_8, "EAP-SIM: (encr) Invalid counter "
      "(%d <= %d)", VAR_17.counter, VAR_13->counter);
  VAR_13->counter_too_small = VAR_17.counter;






  FUNC_8(VAR_13->last_eap_identity);
  VAR_13->last_eap_identity = VAR_13->reauth_id;
  VAR_13->last_eap_identity_len = VAR_13->reauth_id_len;
  VAR_13->reauth_id = ((void*)0);
  VAR_13->reauth_id_len = 0;

  VAR_19 = FUNC_5(VAR_13, VAR_14, 1, VAR_17.nonce_s);
  FUNC_8(VAR_18);

  return VAR_19;
 }
 VAR_13->counter = VAR_17.counter;

 FUNC_9(VAR_13->nonce_s, VAR_17.nonce_s, VAR_4);
 FUNC_11(VAR_7, "EAP-SIM: (encr) AT_NONCE_S",
      VAR_13->nonce_s, VAR_4);

 FUNC_2(VAR_13->counter,
       VAR_13->reauth_id, VAR_13->reauth_id_len,
       VAR_13->nonce_s, VAR_13->mk, VAR_13->msk,
       VAR_13->emsk);
 FUNC_0(VAR_12, VAR_13, VAR_1 | VAR_0);
 FUNC_3(VAR_12, VAR_13, &VAR_17);

 if (VAR_13->result_ind && VAR_16->result_ind)
  VAR_13->use_result_ind = 1;

 if (VAR_13->state != VAR_6) {
  FUNC_6(VAR_13, VAR_13->use_result_ind ?
         VAR_10 : VAR_11);
 }

 VAR_13->num_id_req = 0;
 VAR_13->num_notification = 0;
 if (VAR_13->counter > VAR_3) {
  FUNC_12(VAR_7, "EAP-SIM: Maximum number of "
      "fast reauths performed - force fullauth");
  FUNC_0(VAR_12, VAR_13,
      VAR_1 | VAR_0);
 }
 FUNC_8(VAR_18);
 return FUNC_5(VAR_13, VAR_14, 0, VAR_13->nonce_s);
}

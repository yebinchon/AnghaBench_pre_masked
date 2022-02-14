
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_sm {int dummy; } ;
struct eap_sim_attrs {scalar_t__ result_ind; int * nonce_s; scalar_t__ counter; int * iv; int encr_data_len; int * encr_data; int * mac; int checkcode_len; scalar_t__ checkcode; } ;
struct eap_aka_data {int reauth; size_t counter; scalar_t__ eap_method; int use_result_ind; scalar_t__ state; int * nonce_s; scalar_t__ num_notification; scalar_t__ num_id_req; scalar_t__ result_ind; int emsk; int msk; int mk; scalar_t__ reauth_id_len; int * reauth_id; int k_re; scalar_t__ last_eap_identity_len; int * last_eap_identity; scalar_t__ counter_too_small; int k_encr; int * reauth_mac; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct eap_sm*,struct eap_aka_data*,int) ;
 struct wpabuf* FUNC_1 (struct eap_aka_data*,int ,int ) ;
 int FUNC_2 (struct eap_sm*,struct eap_aka_data*,struct eap_sim_attrs*) ;
 int FUNC_3 (int ,size_t,int *,scalar_t__,int *,int ,int ) ;
 struct wpabuf* FUNC_4 (struct eap_aka_data*,int ,int,int *) ;
 int FUNC_5 (struct eap_aka_data*,int ) ;
 scalar_t__ FUNC_6 (struct eap_aka_data*,scalar_t__,int ) ;
 scalar_t__ FUNC_7 (struct eap_aka_data*,struct wpabuf const*,int *,int *,int ) ;
 int FUNC_8 (size_t,int *,scalar_t__,int *,int ,int ,int ) ;
 int * FUNC_9 (int ,int *,int ,int *,struct eap_sim_attrs*,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int *,int ) ;
 int FUNC_12 (int ,char*,int *,int ) ;
 int FUNC_13 (int ,char*,...) ;

__attribute__((used)) static struct wpabuf * FUNC_14(
 struct eap_sm *VAR_13, struct eap_aka_data *VAR_14, u8 VAR_15,
 const struct wpabuf *VAR_16, struct eap_sim_attrs *VAR_17)
{
 struct eap_sim_attrs VAR_18;
 u8 *VAR_19;

 FUNC_13(VAR_8, "EAP-AKA: subtype Reauthentication");

 if (VAR_17->checkcode &&
     FUNC_6(VAR_14, VAR_17->checkcode,
         VAR_17->checkcode_len)) {




  FUNC_13(VAR_10, "EAP-AKA: Invalid AT_CHECKCODE in the "
      "message");

  return FUNC_1(VAR_14, VAR_15,
         VAR_3);
 }

 if (VAR_14->reauth_id == ((void*)0)) {
  FUNC_13(VAR_10, "EAP-AKA: Server is trying "
      "reauthentication, but no reauth_id available");
  return FUNC_1(VAR_14, VAR_15,
         VAR_3);
 }

 VAR_14->reauth = 1;
 if (FUNC_7(VAR_14, VAR_16, VAR_17->mac, (u8 *) "", 0)) {
  FUNC_13(VAR_10, "EAP-AKA: Reauthentication "
      "did not have valid AT_MAC");
  return FUNC_1(VAR_14, VAR_15,
         VAR_3);
 }





 FUNC_11(VAR_14->reauth_mac, VAR_17->mac, VAR_4);
 FUNC_12(VAR_8, "EAP-AKA: Server MAC",
      VAR_14->reauth_mac, VAR_4);

 if (VAR_17->encr_data == ((void*)0) || VAR_17->iv == ((void*)0)) {
  FUNC_13(VAR_10, "EAP-AKA: Reauthentication "
      "message did not include encrypted data");
  return FUNC_1(VAR_14, VAR_15,
         VAR_3);
 }

 VAR_19 = FUNC_9(VAR_14->k_encr, VAR_17->encr_data,
           VAR_17->encr_data_len, VAR_17->iv, &VAR_18,
           0);
 if (VAR_19 == ((void*)0)) {
  FUNC_13(VAR_10, "EAP-AKA: Failed to parse encrypted "
      "data from reauthentication message");
  return FUNC_1(VAR_14, VAR_15,
         VAR_3);
 }

 if (VAR_18.nonce_s == ((void*)0) || VAR_18.counter < 0) {
  FUNC_13(VAR_9, "EAP-AKA: (encr) No%s%s in reauth packet",
      !VAR_18.nonce_s ? " AT_NONCE_S" : "",
      VAR_18.counter < 0 ? " AT_COUNTER" : "");
  FUNC_10(VAR_19);
  return FUNC_1(VAR_14, VAR_15,
         VAR_3);
 }

 if (VAR_18.counter < 0 || (size_t) VAR_18.counter <= VAR_14->counter) {
  struct wpabuf *VAR_20;
  FUNC_13(VAR_9, "EAP-AKA: (encr) Invalid counter "
      "(%d <= %d)", VAR_18.counter, VAR_14->counter);
  VAR_14->counter_too_small = VAR_18.counter;






  FUNC_10(VAR_14->last_eap_identity);
  VAR_14->last_eap_identity = VAR_14->reauth_id;
  VAR_14->last_eap_identity_len = VAR_14->reauth_id_len;
  VAR_14->reauth_id = ((void*)0);
  VAR_14->reauth_id_len = 0;

  VAR_20 = FUNC_4(VAR_14, VAR_15, 1, VAR_18.nonce_s);
  FUNC_10(VAR_19);

  return VAR_20;
 }
 VAR_14->counter = VAR_18.counter;

 FUNC_11(VAR_14->nonce_s, VAR_18.nonce_s, VAR_5);
 FUNC_12(VAR_8, "EAP-AKA: (encr) AT_NONCE_S",
      VAR_14->nonce_s, VAR_5);

 if (VAR_14->eap_method == VAR_6) {
  FUNC_3(VAR_14->k_re, VAR_14->counter,
       VAR_14->reauth_id,
       VAR_14->reauth_id_len,
       VAR_14->nonce_s,
       VAR_14->msk, VAR_14->emsk);
 } else {
  FUNC_8(VAR_14->counter, VAR_14->reauth_id,
        VAR_14->reauth_id_len,
        VAR_14->nonce_s, VAR_14->mk,
        VAR_14->msk, VAR_14->emsk);
 }
 FUNC_0(VAR_13, VAR_14, VAR_1 | VAR_0);
 FUNC_2(VAR_13, VAR_14, &VAR_18);

 if (VAR_14->result_ind && VAR_17->result_ind)
  VAR_14->use_result_ind = 1;

 if (VAR_14->state != VAR_7) {
  FUNC_5(VAR_14, VAR_14->use_result_ind ?
         VAR_11 : VAR_12);
 }

 VAR_14->num_id_req = 0;
 VAR_14->num_notification = 0;
 if (VAR_14->counter > VAR_2) {
  FUNC_13(VAR_8, "EAP-AKA: Maximum number of "
      "fast reauths performed - force fullauth");
  FUNC_0(VAR_13, VAR_14,
      VAR_1 | VAR_0);
 }
 FUNC_10(VAR_19);
 return FUNC_4(VAR_14, VAR_15, 0, VAR_14->nonce_s);
}

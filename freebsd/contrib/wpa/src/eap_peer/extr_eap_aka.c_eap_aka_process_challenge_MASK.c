
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const u8 ;
typedef int u16 ;
struct wpabuf {int dummy; } ;
struct eap_sm {int dummy; } ;
struct eap_sim_attrs {scalar_t__ kdf_input_len; scalar_t__* kdf; scalar_t__ result_ind; int iv; int encr_data_len; scalar_t__ encr_data; int mac; int autn; int rand; scalar_t__ bidding; int kdf_input; int checkcode_len; scalar_t__ checkcode; } ;
struct eap_peer_config {size_t imsi_identity_len; int const* imsi_identity; } ;
struct eap_aka_data {scalar_t__ eap_method; scalar_t__ network_name_len; size_t last_eap_identity_len; size_t pseudonym_len; int use_result_ind; scalar_t__ state; scalar_t__ counter; scalar_t__ num_notification; scalar_t__ num_id_req; scalar_t__ result_ind; int k_encr; int emsk; int msk; int k_aut; int mk; int ck; int ik; int k_re; int const* pseudonym; int const* last_eap_identity; int const* network_name; scalar_t__ autn; scalar_t__ rand; scalar_t__ reauth; scalar_t__ kdf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (scalar_t__) ;
 struct wpabuf* FUNC_1 (struct eap_aka_data*,int const) ;
 int FUNC_2 (struct eap_sm*,struct eap_aka_data*,int) ;
 struct wpabuf* FUNC_3 (struct eap_aka_data*,int const,int ) ;
 int FUNC_4 (int const*,size_t,int ,int ,int ) ;
 int FUNC_5 (struct eap_sm*,struct eap_aka_data*,struct eap_sim_attrs*) ;
 int FUNC_6 (int ,int ,scalar_t__,int const*,size_t) ;
 int FUNC_7 (int const*,size_t,int ,int ,int ,int ,int ,int ,int ) ;
 struct wpabuf* FUNC_8 (struct eap_aka_data*,int const,struct eap_sim_attrs*) ;
 int FUNC_9 (struct eap_aka_data*,struct eap_sim_attrs*) ;
 struct wpabuf* FUNC_10 (struct eap_aka_data*,int const) ;
 int FUNC_11 (struct eap_aka_data*,int ) ;
 struct wpabuf* FUNC_12 (struct eap_aka_data*,int const,struct eap_sim_attrs*) ;
 int FUNC_13 (struct eap_sm*,struct eap_aka_data*) ;
 scalar_t__ FUNC_14 (struct eap_aka_data*,scalar_t__,int ) ;
 scalar_t__ FUNC_15 (struct eap_aka_data*,struct wpabuf const*,int ,int const*,int ) ;
 scalar_t__ FUNC_16 (struct eap_sm*,int ,scalar_t__) ;
 struct eap_peer_config* FUNC_17 (struct eap_sm*) ;
 int const* FUNC_18 (struct eap_sm*,size_t*) ;
 int FUNC_19 (int const*,size_t) ;
 int FUNC_20 (int ,int ,int ,int ,int ) ;
 int const* FUNC_21 (int ,scalar_t__,int ,int ,struct eap_sim_attrs*,int ) ;
 int FUNC_22 (int const*) ;
 int FUNC_23 (scalar_t__,int ,int ) ;
 int const* FUNC_24 (int ,scalar_t__) ;
 int FUNC_25 (int ,char*,int const*,size_t) ;
 int FUNC_26 (int ,char*,...) ;

__attribute__((used)) static struct wpabuf * FUNC_27(struct eap_sm *VAR_16,
       struct eap_aka_data *VAR_17,
       u8 VAR_18,
       const struct wpabuf *VAR_19,
       struct eap_sim_attrs *VAR_20)
{
 const u8 *VAR_21;
 size_t VAR_22;
 int VAR_23;
 struct eap_sim_attrs VAR_24;

 FUNC_26(VAR_11, "EAP-AKA: subtype Challenge");

 if (VAR_20->checkcode &&
     FUNC_14(VAR_17, VAR_20->checkcode,
         VAR_20->checkcode_len)) {
  FUNC_26(VAR_13, "EAP-AKA: Invalid AT_CHECKCODE in the "
      "message");




  return FUNC_3(VAR_17, VAR_18,
         VAR_6);

 }
 VAR_17->reauth = 0;
 if (!VAR_20->mac || !VAR_20->rand || !VAR_20->autn) {
  FUNC_26(VAR_13, "EAP-AKA: Challenge message "
      "did not include%s%s%s",
      !VAR_20->mac ? " AT_MAC" : "",
      !VAR_20->rand ? " AT_RAND" : "",
      !VAR_20->autn ? " AT_AUTN" : "");
  return FUNC_3(VAR_17, VAR_18,
         VAR_6);
 }
 FUNC_23(VAR_17->rand, VAR_20->rand, VAR_5);
 FUNC_23(VAR_17->autn, VAR_20->autn, VAR_2);

 VAR_23 = FUNC_13(VAR_16, VAR_17);
 if (VAR_23 == -1) {
  FUNC_26(VAR_13, "EAP-AKA: UMTS authentication "
      "failed (AUTN)");
  return FUNC_1(VAR_17, VAR_18);
 } else if (VAR_23 == -2) {
  FUNC_26(VAR_13, "EAP-AKA: UMTS authentication "
      "failed (AUTN seq# -> AUTS)");
  return FUNC_12(VAR_17, VAR_18, VAR_20);
 } else if (VAR_23 > 0) {
  FUNC_26(VAR_11, "EAP-AKA: Wait for external USIM processing");
  return ((void*)0);
 } else if (VAR_23) {
  FUNC_26(VAR_13, "EAP-AKA: UMTS authentication failed");
  return FUNC_3(VAR_17, VAR_18,
         VAR_6);
 }
 if (VAR_17->last_eap_identity) {
  VAR_21 = VAR_17->last_eap_identity;
  VAR_22 = VAR_17->last_eap_identity_len;
 } else if (VAR_17->pseudonym &&
     !FUNC_19(VAR_17->pseudonym,
            VAR_17->pseudonym_len)) {
  VAR_21 = VAR_17->pseudonym;
  VAR_22 = VAR_17->pseudonym_len;
 } else {
  struct eap_peer_config *VAR_25;

  VAR_25 = FUNC_17(VAR_16);
  if (VAR_25 && VAR_25->imsi_identity) {
   VAR_21 = VAR_25->imsi_identity;
   VAR_22 = VAR_25->imsi_identity_len;
  } else {
   VAR_21 = FUNC_18(VAR_16, &VAR_22);
  }
 }
 FUNC_25(VAR_11, "EAP-AKA: Selected identity for MK "
     "derivation", VAR_21, VAR_22);
 if (VAR_17->eap_method == VAR_8) {
  FUNC_7(VAR_21, VAR_22, VAR_17->ik,
       VAR_17->ck, VAR_17->k_encr, VAR_17->k_aut,
       VAR_17->k_re, VAR_17->msk, VAR_17->emsk);
 } else {
  FUNC_4(VAR_21, VAR_22, VAR_17->ik, VAR_17->ck,
      VAR_17->mk);
  FUNC_20(VAR_17->mk, VAR_17->k_encr, VAR_17->k_aut,
        VAR_17->msk, VAR_17->emsk);
 }
 if (FUNC_15(VAR_17, VAR_19, VAR_20->mac, (u8 *) "", 0)) {
  FUNC_26(VAR_13, "EAP-AKA: Challenge message "
      "used invalid AT_MAC");




  return FUNC_3(VAR_17, VAR_18,
         VAR_6);

 }





 FUNC_2(VAR_16, VAR_17, VAR_1 | VAR_0);

 if (VAR_20->encr_data) {
  u8 *VAR_26;
  VAR_26 = FUNC_21(VAR_17->k_encr, VAR_20->encr_data,
            VAR_20->encr_data_len, VAR_20->iv,
            &VAR_24, 0);
  if (VAR_26 == ((void*)0)) {
   return FUNC_3(
    VAR_17, VAR_18, VAR_6);
  }
  FUNC_5(VAR_16, VAR_17, &VAR_24);
  FUNC_22(VAR_26);
 }

 if (VAR_17->result_ind && VAR_20->result_ind)
  VAR_17->use_result_ind = 1;

 if (VAR_17->state != VAR_10) {
  FUNC_11(VAR_17, VAR_17->use_result_ind ?
         VAR_14 : VAR_15);
 }

 VAR_17->num_id_req = 0;
 VAR_17->num_notification = 0;



 VAR_17->counter = 0;
 return FUNC_10(VAR_17, VAR_18);
}

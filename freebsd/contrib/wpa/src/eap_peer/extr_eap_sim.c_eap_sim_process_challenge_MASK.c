
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_sm {int dummy; } ;
struct eap_sim_data {int min_num_chal; int num_chal; size_t last_eap_identity_len; size_t pseudonym_len; int use_result_ind; scalar_t__ state; scalar_t__ counter; scalar_t__ num_notification; scalar_t__ num_id_req; scalar_t__ result_ind; int k_encr; int nonce_mt; int k_aut; int emsk; int msk; int mk; scalar_t__ kc; int ver_list_len; int ver_list; int selected_version; int * pseudonym; int * last_eap_identity; int rand; scalar_t__ reauth; } ;
struct eap_sim_attrs {int num_chal; scalar_t__ result_ind; int iv; int encr_data_len; scalar_t__ encr_data; int mac; scalar_t__ rand; } ;
struct eap_peer_config {size_t imsi_identity_len; int * imsi_identity; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 struct eap_peer_config* FUNC_0 (struct eap_sm*) ;
 int * FUNC_1 (struct eap_sm*,size_t*) ;
 int FUNC_2 (int *,size_t) ;
 int FUNC_3 (struct eap_sm*,struct eap_sim_data*,int) ;
 struct wpabuf* FUNC_4 (struct eap_sim_data*,int ,int ) ;
 int FUNC_5 (int ,int ,int ,int ,int ) ;
 int FUNC_6 (int const*,size_t,int ,int ,int ,int ,int,int const*,int ) ;
 int FUNC_7 (struct eap_sm*,struct eap_sim_data*) ;
 int FUNC_8 (struct eap_sm*,struct eap_sim_data*,struct eap_sim_attrs*) ;
 int * FUNC_9 (int ,scalar_t__,int ,int ,struct eap_sim_attrs*,int ) ;
 struct wpabuf* FUNC_10 (struct eap_sim_data*,int ) ;
 int FUNC_11 (struct eap_sim_data*,int ) ;
 scalar_t__ FUNC_12 (int ,struct wpabuf const*,int ,int ,int ) ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (scalar_t__,scalar_t__,int) ;
 int FUNC_15 (int ,scalar_t__,int) ;
 int FUNC_16 (int ,char*,int const*,size_t) ;
 int FUNC_17 (int ,char*,...) ;

__attribute__((used)) static struct wpabuf * FUNC_18(struct eap_sm *VAR_13,
       struct eap_sim_data *VAR_14,
       u8 VAR_15,
       const struct wpabuf *VAR_16,
       struct eap_sim_attrs *VAR_17)
{
 const u8 *VAR_18;
 size_t VAR_19;
 struct eap_sim_attrs VAR_20;
 int VAR_21;

 FUNC_17(VAR_8, "EAP-SIM: subtype Challenge");
 VAR_14->reauth = 0;
 if (!VAR_17->mac || !VAR_17->rand) {
  FUNC_17(VAR_10, "EAP-SIM: Challenge message "
      "did not include%s%s",
      !VAR_17->mac ? " AT_MAC" : "",
      !VAR_17->rand ? " AT_RAND" : "");
  return FUNC_4(VAR_14, VAR_15,
         VAR_5);
 }

 FUNC_17(VAR_8, "EAP-SIM: %lu challenges",
     (unsigned long) VAR_17->num_chal);
 if (VAR_17->num_chal < VAR_14->min_num_chal) {
  FUNC_17(VAR_9, "EAP-SIM: Insufficient number of "
      "challenges (%lu)", (unsigned long) VAR_17->num_chal);
  return FUNC_4(VAR_14, VAR_15,
         VAR_2);
 }
 if (VAR_17->num_chal > 3) {
  FUNC_17(VAR_9, "EAP-SIM: Too many challenges "
      "(%lu)", (unsigned long) VAR_17->num_chal);
  return FUNC_4(VAR_14, VAR_15,
         VAR_5);
 }


 if (FUNC_14(VAR_17->rand, VAR_17->rand + VAR_7,
     VAR_7) == 0 ||
     (VAR_17->num_chal > 2 &&
      (FUNC_14(VAR_17->rand, VAR_17->rand + 2 * VAR_7,
   VAR_7) == 0 ||
       FUNC_14(VAR_17->rand + VAR_7,
   VAR_17->rand + 2 * VAR_7,
   VAR_7) == 0))) {
  FUNC_17(VAR_9, "EAP-SIM: Same RAND used multiple times");
  return FUNC_4(VAR_14, VAR_15,
         VAR_4);
 }

 FUNC_15(VAR_14->rand, VAR_17->rand, VAR_17->num_chal * VAR_7);
 VAR_14->num_chal = VAR_17->num_chal;

 VAR_21 = FUNC_7(VAR_13, VAR_14);
 if (VAR_21 > 0) {
  FUNC_17(VAR_8, "EAP-SIM: Wait for external SIM processing");
  return ((void*)0);
 }
 if (VAR_21) {
  FUNC_17(VAR_10, "EAP-SIM: GSM authentication failed");
  return FUNC_4(VAR_14, VAR_15,
         VAR_5);
 }
 if (VAR_14->last_eap_identity) {
  VAR_18 = VAR_14->last_eap_identity;
  VAR_19 = VAR_14->last_eap_identity_len;
 } else if (VAR_14->pseudonym &&
     !FUNC_2(VAR_14->pseudonym,
            VAR_14->pseudonym_len)) {
  VAR_18 = VAR_14->pseudonym;
  VAR_19 = VAR_14->pseudonym_len;
 } else {
  struct eap_peer_config *VAR_22;

  VAR_22 = FUNC_0(VAR_13);
  if (VAR_22 && VAR_22->imsi_identity) {
   VAR_18 = VAR_22->imsi_identity;
   VAR_19 = VAR_22->imsi_identity_len;
  } else {
   VAR_18 = FUNC_1(VAR_13, &VAR_19);
  }
 }
 FUNC_16(VAR_8, "EAP-SIM: Selected identity for MK "
     "derivation", VAR_18, VAR_19);
 FUNC_6(VAR_18, VAR_19, VAR_14->nonce_mt,
     VAR_14->selected_version, VAR_14->ver_list,
     VAR_14->ver_list_len, VAR_14->num_chal,
     (const u8 *) VAR_14->kc, VAR_14->mk);
 FUNC_5(VAR_14->mk, VAR_14->k_encr, VAR_14->k_aut, VAR_14->msk,
       VAR_14->emsk);
 if (FUNC_12(VAR_14->k_aut, VAR_16, VAR_17->mac, VAR_14->nonce_mt,
          VAR_3)) {
  FUNC_17(VAR_10, "EAP-SIM: Challenge message "
      "used invalid AT_MAC");




  return FUNC_4(VAR_14, VAR_15,
         VAR_5);

 }





 FUNC_3(VAR_13, VAR_14, VAR_1 | VAR_0);

 if (VAR_17->encr_data) {
  u8 *VAR_23;
  VAR_23 = FUNC_9(VAR_14->k_encr, VAR_17->encr_data,
            VAR_17->encr_data_len, VAR_17->iv,
            &VAR_20, 0);
  if (VAR_23 == ((void*)0)) {
   return FUNC_4(
    VAR_14, VAR_15, VAR_5);
  }
  FUNC_8(VAR_13, VAR_14, &VAR_20);
  FUNC_13(VAR_23);
 }

 if (VAR_14->result_ind && VAR_17->result_ind)
  VAR_14->use_result_ind = 1;

 if (VAR_14->state != VAR_6) {
  FUNC_11(VAR_14, VAR_14->use_result_ind ?
         VAR_11 : VAR_12);
 }

 VAR_14->num_id_req = 0;
 VAR_14->num_notification = 0;



 VAR_14->counter = 0;
 return FUNC_10(VAR_14, VAR_15);
}

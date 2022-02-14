
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_sm {scalar_t__ eap_sim_aka_result_ind; int identity_len; int identity; } ;
struct eap_sim_msg {int dummy; } ;
struct eap_aka_data {int reauth_mac; int k_aut; int eap_method; int nonce_s; int counter; int emsk; int msk; int mk; int k_encr; int k_re; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct eap_aka_data*,struct eap_sim_msg*) ;
 scalar_t__ FUNC_1 (struct eap_sm*,struct eap_aka_data*,struct eap_sim_msg*,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_5 (struct eap_sim_msg*,int ,int ,int *,int ) ;
 int FUNC_6 (struct eap_sim_msg*,int ) ;
 struct wpabuf* FUNC_7 (struct eap_sim_msg*,int ,int ,int *,int ) ;
 int FUNC_8 (struct eap_sim_msg*) ;
 struct eap_sim_msg* FUNC_9 (int ,int ,int ,int ) ;
 int FUNC_10 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,char*,int ,int ) ;
 int FUNC_13 (int ,char*) ;
 scalar_t__ FUNC_14 (struct wpabuf*) ;
 scalar_t__ FUNC_15 (struct wpabuf*) ;

__attribute__((used)) static struct wpabuf * FUNC_16(struct eap_sm *VAR_9,
         struct eap_aka_data *VAR_10, u8 VAR_11)
{
 struct eap_sim_msg *VAR_12;
 struct wpabuf *VAR_13;

 FUNC_13(VAR_7, "EAP-AKA: Generating Re-authentication");

 if (FUNC_11(VAR_10->nonce_s, VAR_5))
  return ((void*)0);
 FUNC_12(VAR_8, "EAP-AKA: NONCE_S",
   VAR_10->nonce_s, VAR_5);

 if (VAR_10->eap_method == VAR_6) {
  FUNC_2(VAR_10->k_re, VAR_10->counter,
       VAR_9->identity,
       VAR_9->identity_len,
       VAR_10->nonce_s,
       VAR_10->msk, VAR_10->emsk);
 } else {
  FUNC_3(VAR_10->mk, VAR_10->k_encr, VAR_10->k_aut,
        VAR_10->msk, VAR_10->emsk);
  FUNC_4(VAR_10->counter, VAR_9->identity,
        VAR_9->identity_len, VAR_10->nonce_s,
        VAR_10->mk, VAR_10->msk, VAR_10->emsk);
 }

 VAR_12 = FUNC_9(VAR_1, VAR_11, VAR_10->eap_method,
          VAR_0);

 if (FUNC_1(VAR_9, VAR_10, VAR_12, VAR_10->counter, VAR_10->nonce_s)) {
  FUNC_8(VAR_12);
  return ((void*)0);
 }

 FUNC_0(VAR_10, VAR_12);

 if (VAR_9->eap_sim_aka_result_ind) {
  FUNC_13(VAR_7, "   AT_RESULT_IND");
  FUNC_5(VAR_12, VAR_3, 0, ((void*)0), 0);
 }

 FUNC_13(VAR_7, "   AT_MAC");
 FUNC_6(VAR_12, VAR_2);
 VAR_13 = FUNC_7(VAR_12, VAR_10->eap_method, VAR_10->k_aut, ((void*)0), 0);




 FUNC_10(VAR_10->reauth_mac,
    FUNC_14(VAR_13) + FUNC_15(VAR_13) - VAR_4,
    VAR_4);

 return VAR_13;
}

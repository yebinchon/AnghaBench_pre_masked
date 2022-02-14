
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_sm {scalar_t__ eap_sim_aka_result_ind; int identity_len; int identity; } ;
struct eap_sim_msg {int dummy; } ;
struct eap_sim_data {int reauth_mac; int k_aut; int nonce_s; int counter; int emsk; int msk; int mk; int k_encr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (struct eap_sm*,struct eap_sim_data*,struct eap_sim_msg*,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_3 (struct eap_sim_msg*,int ,int ,int *,int ) ;
 int FUNC_4 (struct eap_sim_msg*,int ) ;
 struct wpabuf* FUNC_5 (struct eap_sim_msg*,int ,int ,int *,int ) ;
 int FUNC_6 (struct eap_sim_msg*) ;
 struct eap_sim_msg* FUNC_7 (int ,int ,int ,int ) ;
 int FUNC_8 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,char*,int ,int ) ;
 int FUNC_11 (int ,char*) ;
 scalar_t__ FUNC_12 (struct wpabuf*) ;
 scalar_t__ FUNC_13 (struct wpabuf*) ;

__attribute__((used)) static struct wpabuf * FUNC_14(struct eap_sm *VAR_9,
         struct eap_sim_data *VAR_10, u8 VAR_11)
{
 struct eap_sim_msg *VAR_12;
 struct wpabuf *VAR_13;

 FUNC_11(VAR_7, "EAP-SIM: Generating Re-authentication");

 if (FUNC_9(VAR_10->nonce_s, VAR_4))
  return ((void*)0);
 FUNC_10(VAR_8, "EAP-SIM: NONCE_S",
   VAR_10->nonce_s, VAR_4);

 FUNC_1(VAR_10->mk, VAR_10->k_encr, VAR_10->k_aut, VAR_10->msk,
       VAR_10->emsk);
 FUNC_2(VAR_10->counter, VAR_9->identity,
       VAR_9->identity_len, VAR_10->nonce_s, VAR_10->mk,
       VAR_10->msk, VAR_10->emsk);

 VAR_12 = FUNC_7(VAR_0, VAR_11, VAR_6,
          VAR_5);

 if (FUNC_0(VAR_9, VAR_10, VAR_12, VAR_10->counter, VAR_10->nonce_s)) {
  FUNC_6(VAR_12);
  return ((void*)0);
 }

 if (VAR_9->eap_sim_aka_result_ind) {
  FUNC_11(VAR_7, "   AT_RESULT_IND");
  FUNC_3(VAR_12, VAR_2, 0, ((void*)0), 0);
 }

 FUNC_11(VAR_7, "   AT_MAC");
 FUNC_4(VAR_12, VAR_1);
 VAR_13 = FUNC_5(VAR_12, VAR_6, VAR_10->k_aut, ((void*)0), 0);




 FUNC_8(VAR_10->reauth_mac,
    FUNC_12(VAR_13) + FUNC_13(VAR_13) - VAR_3,
    VAR_3);

 return VAR_13;
}

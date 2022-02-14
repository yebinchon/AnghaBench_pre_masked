
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_sm {int eap_sim_db_priv; scalar_t__ eap_sim_aka_result_ind; } ;
struct eap_sim_attrs {scalar_t__ result_ind; scalar_t__ counter_too_small; int counter; int * iv; int encr_data_len; int * encr_data; int * mac; } ;
struct eap_aka_data {int use_result_ind; scalar_t__ eap_method; int * reauth; int notification; int * next_reauth_id; int mk; int counter; int permanent; int k_re; int k_aut; int k_encr; int nonce_s; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct eap_sm*,struct eap_aka_data*) ;
 int FUNC_1 (struct eap_aka_data*,int ) ;
 scalar_t__ FUNC_2 (struct eap_aka_data*,struct wpabuf*,int *,int ,int ) ;
 int FUNC_3 (int ,int ,int *,int ,int ) ;
 int FUNC_4 (int ,int ,int *,int ,int ,int ,int ) ;
 int FUNC_5 (int ,int *) ;
 int * FUNC_6 (int ,int *,int ,int *,struct eap_sim_attrs*,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,char*,...) ;

__attribute__((used)) static void FUNC_9(struct eap_sm *VAR_8,
       struct eap_aka_data *VAR_9,
       struct wpabuf *VAR_10,
       struct eap_sim_attrs *VAR_11)
{
 struct eap_sim_attrs VAR_12;
 u8 *VAR_13 = ((void*)0);

 FUNC_8(VAR_4, "EAP-AKA: Processing Reauthentication");

 if (VAR_11->mac == ((void*)0) ||
     FUNC_2(VAR_9, VAR_10, VAR_11->mac, VAR_9->nonce_s,
          VAR_1)) {
  FUNC_8(VAR_5, "EAP-AKA: Re-authentication message "
      "did not include valid AT_MAC");
  goto fail;
 }

 if (VAR_11->encr_data == ((void*)0) || VAR_11->iv == ((void*)0)) {
  FUNC_8(VAR_5, "EAP-AKA: Reauthentication "
      "message did not include encrypted data");
  goto fail;
 }

 VAR_13 = FUNC_6(VAR_9->k_encr, VAR_11->encr_data,
           VAR_11->encr_data_len, VAR_11->iv, &VAR_12,
           0);
 if (VAR_13 == ((void*)0)) {
  FUNC_8(VAR_5, "EAP-AKA: Failed to parse encrypted "
      "data from reauthentication message");
  goto fail;
 }

 if (VAR_12.counter != VAR_9->counter) {
  FUNC_8(VAR_5, "EAP-AKA: Re-authentication message "
      "used incorrect counter %u, expected %u",
      VAR_12.counter, VAR_9->counter);
  goto fail;
 }
 FUNC_7(VAR_13);
 VAR_13 = ((void*)0);

 FUNC_8(VAR_4, "EAP-AKA: Re-authentication response includes "
     "the correct AT_MAC");

 if (VAR_12.counter_too_small) {
  FUNC_8(VAR_4, "EAP-AKA: Re-authentication response "
      "included AT_COUNTER_TOO_SMALL - starting full "
      "authentication");
  FUNC_0(VAR_8, VAR_9);
  return;
 }

 if (VAR_8->eap_sim_aka_result_ind && VAR_11->result_ind) {
  VAR_9->use_result_ind = 1;
  VAR_9->notification = VAR_2;
  FUNC_1(VAR_9, VAR_6);
 } else
  FUNC_1(VAR_9, VAR_7);

 if (VAR_9->next_reauth_id) {
  if (VAR_9->eap_method == VAR_3) {
  } else {
   FUNC_3(VAR_8->eap_sim_db_priv,
           VAR_9->permanent,
           VAR_9->next_reauth_id,
           VAR_9->counter + 1,
           VAR_9->mk);
  }
  VAR_9->next_reauth_id = ((void*)0);
 } else {
  FUNC_5(VAR_8->eap_sim_db_priv, VAR_9->reauth);
  VAR_9->reauth = ((void*)0);
 }

 return;

fail:
 VAR_9->notification = VAR_0;
 FUNC_1(VAR_9, VAR_6);
 FUNC_5(VAR_8->eap_sim_db_priv, VAR_9->reauth);
 VAR_9->reauth = ((void*)0);
 FUNC_7(VAR_13);
}

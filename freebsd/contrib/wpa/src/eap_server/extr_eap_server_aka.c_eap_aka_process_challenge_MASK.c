
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;
struct eap_sm {int eap_sim_db_priv; scalar_t__ eap_sim_aka_result_ind; } ;
struct eap_sim_attrs {int kdf_count; scalar_t__* kdf; int res_len; int res_len_bits; scalar_t__ result_ind; int * res; int * mac; int checkcode_len; scalar_t__ checkcode; } ;
struct eap_aka_data {scalar_t__ eap_method; scalar_t__ kdf; int res_len; int use_result_ind; int * next_reauth_id; int mk; scalar_t__ counter; int permanent; int k_re; int k_aut; int k_encr; int * next_pseudonym; void* notification; int res; } ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct eap_aka_data*,int ) ;
 scalar_t__ FUNC_1 (struct eap_aka_data*,scalar_t__,int ) ;
 scalar_t__ FUNC_2 (struct eap_aka_data*,struct wpabuf*,int *,int *,int ) ;
 int FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (int ,int ,int *,scalar_t__,int ) ;
 int FUNC_5 (int ,int ,int *,scalar_t__,int ,int ,int ) ;
 scalar_t__ FUNC_6 (int *,int ,int) ;
 int FUNC_7 (int ,char*,...) ;

__attribute__((used)) static void FUNC_8(struct eap_sm *VAR_8,
          struct eap_aka_data *VAR_9,
          struct wpabuf *VAR_10,
          struct eap_sim_attrs *VAR_11)
{
 FUNC_7(VAR_4, "EAP-AKA: Processing Challenge");
 if (VAR_11->checkcode &&
     FUNC_1(VAR_9, VAR_11->checkcode,
         VAR_11->checkcode_len)) {
  FUNC_7(VAR_5, "EAP-AKA: Invalid AT_CHECKCODE in the "
      "message");
  VAR_9->notification = VAR_1;
  FUNC_0(VAR_9, VAR_6);
  return;
 }
 if (VAR_11->mac == ((void*)0) ||
     FUNC_2(VAR_9, VAR_10, VAR_11->mac, ((void*)0), 0)) {
  FUNC_7(VAR_5, "EAP-AKA: Challenge message "
      "did not include valid AT_MAC");
  VAR_9->notification = VAR_1;
  FUNC_0(VAR_9, VAR_6);
  return;
 }





 if (VAR_11->res == ((void*)0) || VAR_11->res_len < VAR_9->res_len ||
     VAR_11->res_len_bits != VAR_9->res_len * 8 ||
     FUNC_6(VAR_11->res, VAR_9->res, VAR_9->res_len) != 0) {
  FUNC_7(VAR_5, "EAP-AKA: Challenge message did not "
      "include valid AT_RES (attr len=%lu, res len=%lu "
      "bits, expected %lu bits)",
      (unsigned long) VAR_11->res_len,
      (unsigned long) VAR_11->res_len_bits,
      (unsigned long) VAR_9->res_len * 8);
  VAR_9->notification = VAR_1;
  FUNC_0(VAR_9, VAR_6);
  return;
 }

 FUNC_7(VAR_4, "EAP-AKA: Challenge response includes the "
     "correct AT_MAC");
 if (VAR_8->eap_sim_aka_result_ind && VAR_11->result_ind) {
  VAR_9->use_result_ind = 1;
  VAR_9->notification = VAR_2;
  FUNC_0(VAR_9, VAR_6);
 } else
  FUNC_0(VAR_9, VAR_7);

 if (VAR_9->next_pseudonym) {
  FUNC_3(VAR_8->eap_sim_db_priv, VAR_9->permanent,
      VAR_9->next_pseudonym);
  VAR_9->next_pseudonym = ((void*)0);
 }
 if (VAR_9->next_reauth_id) {
  if (VAR_9->eap_method == VAR_3) {
  } else {
   FUNC_4(VAR_8->eap_sim_db_priv,
           VAR_9->permanent,
           VAR_9->next_reauth_id,
           VAR_9->counter + 1,
           VAR_9->mk);
  }
  VAR_9->next_reauth_id = ((void*)0);
 }
}

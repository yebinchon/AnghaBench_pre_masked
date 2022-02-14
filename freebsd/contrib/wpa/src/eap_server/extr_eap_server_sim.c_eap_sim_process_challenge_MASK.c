
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_sm {int eap_sim_db_priv; scalar_t__ eap_sim_aka_result_ind; } ;
struct eap_sim_data {int num_chal; int use_result_ind; int * next_reauth_id; int mk; scalar_t__ counter; int permanent; int * next_pseudonym; int notification; scalar_t__ sres; int k_aut; } ;
struct eap_sim_attrs {scalar_t__ result_ind; int * mac; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int ,int ,int *,scalar_t__,int ) ;
 int FUNC_2 (struct eap_sim_data*,int ) ;
 scalar_t__ FUNC_3 (int ,struct wpabuf*,int *,int *,int) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static void FUNC_5(struct eap_sm *VAR_7,
          struct eap_sim_data *VAR_8,
          struct wpabuf *VAR_9,
          struct eap_sim_attrs *VAR_10)
{
 if (VAR_10->mac == ((void*)0) ||
     FUNC_3(VAR_8->k_aut, VAR_9, VAR_10->mac,
          (u8 *) VAR_8->sres,
          VAR_8->num_chal * VAR_1)) {
  FUNC_4(VAR_4, "EAP-SIM: Challenge message "
      "did not include valid AT_MAC");
  VAR_8->notification = VAR_0;
  FUNC_2(VAR_8, VAR_5);
  return;
 }

 FUNC_4(VAR_3, "EAP-SIM: Challenge response includes the "
     "correct AT_MAC");
 if (VAR_7->eap_sim_aka_result_ind && VAR_10->result_ind) {
  VAR_8->use_result_ind = 1;
  VAR_8->notification = VAR_2;
  FUNC_2(VAR_8, VAR_5);
 } else
  FUNC_2(VAR_8, VAR_6);

 if (VAR_8->next_pseudonym) {
  FUNC_0(VAR_7->eap_sim_db_priv, VAR_8->permanent,
      VAR_8->next_pseudonym);
  VAR_8->next_pseudonym = ((void*)0);
 }
 if (VAR_8->next_reauth_id) {
  FUNC_1(VAR_7->eap_sim_db_priv, VAR_8->permanent,
          VAR_8->next_reauth_id, VAR_8->counter + 1,
          VAR_8->mk);
  VAR_8->next_reauth_id = ((void*)0);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_sm {scalar_t__ eap_sim_aka_result_ind; } ;
struct eap_sim_msg {int dummy; } ;
struct eap_sim_data {int num_chal; int nonce_mt; int k_aut; scalar_t__ rand; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (struct eap_sm*,struct eap_sim_data*,struct eap_sim_msg*,int ,int *) ;
 int FUNC_1 (struct eap_sim_msg*,int ,int ,int *,int) ;
 int FUNC_2 (struct eap_sim_msg*,int ) ;
 struct wpabuf* FUNC_3 (struct eap_sim_msg*,int ,int ,int ,int ) ;
 int FUNC_4 (struct eap_sim_msg*) ;
 struct eap_sim_msg* FUNC_5 (int ,int ,int ,int ) ;
 int FUNC_6 (int ,char*) ;

__attribute__((used)) static struct wpabuf * FUNC_7(struct eap_sm *VAR_9,
            struct eap_sim_data *VAR_10,
            u8 VAR_11)
{
 struct eap_sim_msg *VAR_12;

 FUNC_6(VAR_8, "EAP-SIM: Generating Challenge");
 VAR_12 = FUNC_5(VAR_0, VAR_11, VAR_6,
          VAR_5);
 FUNC_6(VAR_8, "   AT_RAND");
 FUNC_1(VAR_12, VAR_2, 0, (u8 *) VAR_10->rand,
   VAR_10->num_chal * VAR_7);

 if (FUNC_0(VAR_9, VAR_10, VAR_12, 0, ((void*)0))) {
  FUNC_4(VAR_12);
  return ((void*)0);
 }

 if (VAR_9->eap_sim_aka_result_ind) {
  FUNC_6(VAR_8, "   AT_RESULT_IND");
  FUNC_1(VAR_12, VAR_3, 0, ((void*)0), 0);
 }

 FUNC_6(VAR_8, "   AT_MAC");
 FUNC_2(VAR_12, VAR_1);
 return FUNC_3(VAR_12, VAR_6, VAR_10->k_aut,
      VAR_10->nonce_mt, VAR_4);
}

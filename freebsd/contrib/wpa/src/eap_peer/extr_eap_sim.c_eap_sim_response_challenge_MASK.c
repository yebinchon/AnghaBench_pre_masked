
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_sim_msg {int dummy; } ;
struct eap_sim_data {int num_chal; scalar_t__ sres; int k_aut; scalar_t__ use_result_ind; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct eap_sim_msg*,int ,int ,int *,int ) ;
 int FUNC_1 (struct eap_sim_msg*,int ) ;
 struct wpabuf* FUNC_2 (struct eap_sim_msg*,int ,int ,int *,int) ;
 struct eap_sim_msg* FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int ,char*,...) ;

__attribute__((used)) static struct wpabuf * FUNC_5(struct eap_sim_data *VAR_7,
        u8 VAR_8)
{
 struct eap_sim_msg *VAR_9;

 FUNC_4(VAR_6, "Generating EAP-SIM Challenge (id=%d)", VAR_8);
 VAR_9 = FUNC_3(VAR_0, VAR_8, VAR_5,
          VAR_4);
 if (VAR_7->use_result_ind) {
  FUNC_4(VAR_6, "   AT_RESULT_IND");
  FUNC_0(VAR_9, VAR_2, 0, ((void*)0), 0);
 }
 FUNC_4(VAR_6, "   AT_MAC");
 FUNC_1(VAR_9, VAR_1);
 return FUNC_2(VAR_9, VAR_5, VAR_7->k_aut,
      (u8 *) VAR_7->sres,
      VAR_7->num_chal * VAR_3);
}

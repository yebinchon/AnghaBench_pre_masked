
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_sim_msg {int dummy; } ;
struct eap_aka_data {int res_len; int k_aut; int eap_method; scalar_t__ use_result_ind; int * res; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct eap_aka_data*,struct eap_sim_msg*) ;
 int FUNC_1 (struct eap_sim_msg*,int ,int,int *,int) ;
 int FUNC_2 (struct eap_sim_msg*,int ) ;
 struct wpabuf* FUNC_3 (struct eap_sim_msg*,int ,int ,int *,int ) ;
 struct eap_sim_msg* FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (int ,char*,...) ;

__attribute__((used)) static struct wpabuf * FUNC_6(struct eap_aka_data *VAR_6,
        u8 VAR_7)
{
 struct eap_sim_msg *VAR_8;

 FUNC_5(VAR_5, "Generating EAP-AKA Challenge (id=%d)", VAR_7);
 VAR_8 = FUNC_4(VAR_1, VAR_7, VAR_6->eap_method,
          VAR_0);
 FUNC_5(VAR_5, "   AT_RES");
 FUNC_1(VAR_8, VAR_3, VAR_6->res_len * 8,
   VAR_6->res, VAR_6->res_len);
 FUNC_0(VAR_6, VAR_8);
 if (VAR_6->use_result_ind) {
  FUNC_5(VAR_5, "   AT_RESULT_IND");
  FUNC_1(VAR_8, VAR_4, 0, ((void*)0), 0);
 }
 FUNC_5(VAR_5, "   AT_MAC");
 FUNC_2(VAR_8, VAR_2);
 return FUNC_3(VAR_8, VAR_6->eap_method, VAR_6->k_aut, (u8 *) "",
      0);
}

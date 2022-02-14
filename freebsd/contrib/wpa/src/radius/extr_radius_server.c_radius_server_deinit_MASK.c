
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radius_server_data {scalar_t__ auth_sock; scalar_t__ acct_sock; scalar_t__ db; struct radius_server_data* t_c_server_url; struct radius_server_data* hs20_sim_provisioning_url; struct radius_server_data* subscr_remediation_url; struct radius_server_data* dump_msk_file; struct radius_server_data* eap_req_id_text; struct radius_server_data* eap_fast_a_id_info; struct radius_server_data* eap_fast_a_id; struct radius_server_data* pac_opaque_encr_key; int clients; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct radius_server_data*) ;
 int FUNC_3 (struct radius_server_data*) ;
 int FUNC_4 (struct radius_server_data*,int ) ;
 int FUNC_5 (scalar_t__) ;

void FUNC_6(struct radius_server_data *VAR_0)
{
 if (VAR_0 == ((void*)0))
  return;

 if (VAR_0->auth_sock >= 0) {
  FUNC_1(VAR_0->auth_sock);
  FUNC_0(VAR_0->auth_sock);
 }

 if (VAR_0->acct_sock >= 0) {
  FUNC_1(VAR_0->acct_sock);
  FUNC_0(VAR_0->acct_sock);
 }

 FUNC_4(VAR_0, VAR_0->clients);

 FUNC_2(VAR_0->pac_opaque_encr_key);
 FUNC_2(VAR_0->eap_fast_a_id);
 FUNC_2(VAR_0->eap_fast_a_id_info);
 FUNC_2(VAR_0->eap_req_id_text);



 FUNC_2(VAR_0->subscr_remediation_url);
 FUNC_2(VAR_0->hs20_sim_provisioning_url);
 FUNC_2(VAR_0->t_c_server_url);






 FUNC_3(VAR_0);

 FUNC_2(VAR_0);
}

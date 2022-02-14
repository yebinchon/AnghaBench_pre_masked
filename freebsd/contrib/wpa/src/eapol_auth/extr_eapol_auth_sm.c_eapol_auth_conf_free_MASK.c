
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eapol_auth_config {int * erp_domain; int * eap_fast_a_id_info; int * eap_fast_a_id; int * pac_opaque_encr_key; int * eap_req_id_text; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct eapol_auth_config *VAR_0)
{
 FUNC_0(VAR_0->eap_req_id_text);
 VAR_0->eap_req_id_text = ((void*)0);
 FUNC_0(VAR_0->pac_opaque_encr_key);
 VAR_0->pac_opaque_encr_key = ((void*)0);
 FUNC_0(VAR_0->eap_fast_a_id);
 VAR_0->eap_fast_a_id = ((void*)0);
 FUNC_0(VAR_0->eap_fast_a_id_info);
 VAR_0->eap_fast_a_id_info = ((void*)0);
 FUNC_0(VAR_0->erp_domain);
 VAR_0->erp_domain = ((void*)0);
}

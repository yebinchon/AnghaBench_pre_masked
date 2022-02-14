
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eap_teap_data {int simck_emsk; int simck_msk; int * peer_outer_tlvs; int * server_outer_tlvs; int * pending_resp; int * pending_phase2_req; int * session_id; int emsk; int key_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct eap_teap_data *VAR_3)
{
 FUNC_0(VAR_3->key_data, VAR_1);
 FUNC_0(VAR_3->emsk, VAR_0);
 FUNC_1(VAR_3->session_id);
 VAR_3->session_id = ((void*)0);
 FUNC_2(VAR_3->pending_phase2_req);
 VAR_3->pending_phase2_req = ((void*)0);
 FUNC_2(VAR_3->pending_resp);
 VAR_3->pending_resp = ((void*)0);
 FUNC_2(VAR_3->server_outer_tlvs);
 VAR_3->server_outer_tlvs = ((void*)0);
 FUNC_2(VAR_3->peer_outer_tlvs);
 VAR_3->peer_outer_tlvs = ((void*)0);
 FUNC_0(VAR_3->simck_msk, VAR_2);
 FUNC_0(VAR_3->simck_emsk, VAR_2);
}

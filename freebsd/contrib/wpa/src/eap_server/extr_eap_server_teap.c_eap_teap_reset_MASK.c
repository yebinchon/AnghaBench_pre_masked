
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct eap_teap_data {int pac_opaque_encr; int cmk_emsk; int cmk_msk; int simck_emsk; int simck_msk; int identity; int peer_outer_tlvs; int server_outer_tlvs; int pending_phase2_resp; int srv_id_info; int srv_id; int ssl; scalar_t__ phase2_priv; TYPE_1__* phase2_method; } ;
struct eap_sm {int dummy; } ;
struct TYPE_2__ {int (* reset ) (struct eap_sm*,scalar_t__) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct eap_teap_data*,int) ;
 int FUNC_1 (struct eap_sm*,int *) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct eap_sm*,scalar_t__) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct eap_sm *VAR_2, void *VAR_3)
{
 struct eap_teap_data *VAR_4 = VAR_3;

 if (!VAR_4)
  return;
 if (VAR_4->phase2_priv && VAR_4->phase2_method)
  VAR_4->phase2_method->reset(VAR_2, VAR_4->phase2_priv);
 FUNC_1(VAR_2, &VAR_4->ssl);
 FUNC_3(VAR_4->srv_id);
 FUNC_3(VAR_4->srv_id_info);
 FUNC_5(VAR_4->pending_phase2_resp);
 FUNC_5(VAR_4->server_outer_tlvs);
 FUNC_5(VAR_4->peer_outer_tlvs);
 FUNC_3(VAR_4->identity);
 FUNC_2(VAR_4->simck_msk, VAR_1);
 FUNC_2(VAR_4->simck_emsk, VAR_1);
 FUNC_2(VAR_4->cmk_msk, VAR_0);
 FUNC_2(VAR_4->cmk_emsk, VAR_0);
 FUNC_2(VAR_4->pac_opaque_encr, sizeof(VAR_4->pac_opaque_encr));
 FUNC_0(VAR_4, sizeof(*VAR_4));
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct eap_sm {int dummy; } ;
struct eap_fast_data {int identity; int pending_phase2_resp; int key_block_p; int srv_id_info; int srv_id; int ssl; scalar_t__ phase2_priv; TYPE_1__* phase2_method; } ;
struct TYPE_2__ {int (* reset ) (struct eap_sm*,scalar_t__) ;} ;


 int FUNC_0 (struct eap_fast_data*,int) ;
 int FUNC_1 (struct eap_sm*,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct eap_sm*,scalar_t__) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct eap_sm *VAR_0, void *VAR_1)
{
 struct eap_fast_data *VAR_2 = VAR_1;
 if (VAR_2 == ((void*)0))
  return;
 if (VAR_2->phase2_priv && VAR_2->phase2_method)
  VAR_2->phase2_method->reset(VAR_0, VAR_2->phase2_priv);
 FUNC_1(VAR_0, &VAR_2->ssl);
 FUNC_2(VAR_2->srv_id);
 FUNC_2(VAR_2->srv_id_info);
 FUNC_2(VAR_2->key_block_p);
 FUNC_4(VAR_2->pending_phase2_resp);
 FUNC_2(VAR_2->identity);
 FUNC_0(VAR_2, sizeof(*VAR_2));
}

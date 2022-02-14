
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct eap_sm {int dummy; } ;
struct eap_fast_pac {struct eap_fast_pac* next; } ;
struct eap_fast_data {int pending_resp; int pending_phase2_req; struct eap_fast_data* session_id; int emsk; int key_data; struct eap_fast_pac* pac; int ssl; struct eap_fast_data* key_block_p; struct eap_fast_data* phase2_types; scalar_t__ phase2_priv; TYPE_1__* phase2_method; } ;
struct TYPE_2__ {int (* deinit ) (struct eap_sm*,scalar_t__) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct eap_fast_pac*) ;
 int FUNC_1 (struct eap_sm*,int *) ;
 int FUNC_2 (struct eap_fast_data*) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (struct eap_sm*,scalar_t__) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct eap_sm *VAR_2, void *VAR_3)
{
 struct eap_fast_data *VAR_4 = VAR_3;
 struct eap_fast_pac *VAR_5, *VAR_6;

 if (VAR_4 == ((void*)0))
  return;
 if (VAR_4->phase2_priv && VAR_4->phase2_method)
  VAR_4->phase2_method->deinit(VAR_2, VAR_4->phase2_priv);
 FUNC_2(VAR_4->phase2_types);
 FUNC_2(VAR_4->key_block_p);
 FUNC_1(VAR_2, &VAR_4->ssl);

 VAR_5 = VAR_4->pac;
 VAR_6 = ((void*)0);
 while (VAR_5) {
  VAR_6 = VAR_5;
  VAR_5 = VAR_5->next;
  FUNC_0(VAR_6);
 }
 FUNC_3(VAR_4->key_data, 0, VAR_1);
 FUNC_3(VAR_4->emsk, 0, VAR_0);
 FUNC_2(VAR_4->session_id);
 FUNC_5(VAR_4->pending_phase2_req);
 FUNC_5(VAR_4->pending_resp);
 FUNC_2(VAR_4);
}

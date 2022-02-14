
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct eap_sm {int dummy; } ;
struct eap_peap_data {int pending_resp; int pending_phase2_req; int session_id; int ssl; int phase2_types; scalar_t__ phase2_priv; TYPE_1__* phase2_method; } ;
struct TYPE_2__ {int (* deinit ) (struct eap_sm*,scalar_t__) ;} ;


 int FUNC_0 (struct eap_peap_data*,int) ;
 int FUNC_1 (struct eap_peap_data*) ;
 int FUNC_2 (struct eap_sm*,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct eap_sm*,scalar_t__) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct eap_sm *VAR_0, void *VAR_1)
{
 struct eap_peap_data *VAR_2 = VAR_1;
 if (VAR_2 == ((void*)0))
  return;
 if (VAR_2->phase2_priv && VAR_2->phase2_method)
  VAR_2->phase2_method->deinit(VAR_0, VAR_2->phase2_priv);
 FUNC_3(VAR_2->phase2_types);
 FUNC_2(VAR_0, &VAR_2->ssl);
 FUNC_1(VAR_2);
 FUNC_3(VAR_2->session_id);
 FUNC_5(VAR_2->pending_phase2_req);
 FUNC_5(VAR_2->pending_resp);
 FUNC_0(VAR_2, sizeof(*VAR_2));
}

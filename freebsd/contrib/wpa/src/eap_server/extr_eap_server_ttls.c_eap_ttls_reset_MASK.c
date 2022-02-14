
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct eap_ttls_data {int pending_phase2_eap_resp; int ssl; scalar_t__ phase2_priv; TYPE_1__* phase2_method; } ;
struct eap_sm {int dummy; } ;
struct TYPE_2__ {int (* reset ) (struct eap_sm*,scalar_t__) ;} ;


 int FUNC_0 (struct eap_ttls_data*,int) ;
 int FUNC_1 (struct eap_sm*,int *) ;
 int FUNC_2 (struct eap_sm*,scalar_t__) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct eap_sm *VAR_0, void *VAR_1)
{
 struct eap_ttls_data *VAR_2 = VAR_1;
 if (VAR_2 == ((void*)0))
  return;
 if (VAR_2->phase2_priv && VAR_2->phase2_method)
  VAR_2->phase2_method->reset(VAR_0, VAR_2->phase2_priv);
 FUNC_1(VAR_0, &VAR_2->ssl);
 FUNC_3(VAR_2->pending_phase2_eap_resp);
 FUNC_0(VAR_2, sizeof(*VAR_2));
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct eap_sm {int dummy; } ;
struct eap_peap_data {scalar_t__ crypto_binding_used; int * pending_resp; int * pending_phase2_req; scalar_t__ phase2_priv; TYPE_1__* phase2_method; } ;
struct TYPE_2__ {int (* deinit_for_reauth ) (struct eap_sm*,scalar_t__) ;} ;


 int FUNC_0 (struct eap_sm*,scalar_t__) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct eap_sm *VAR_0, void *VAR_1)
{
 struct eap_peap_data *VAR_2 = VAR_1;

 if (VAR_2->phase2_priv && VAR_2->phase2_method &&
     VAR_2->phase2_method->deinit_for_reauth)
  VAR_2->phase2_method->deinit_for_reauth(VAR_0, VAR_2->phase2_priv);
 FUNC_1(VAR_2->pending_phase2_req);
 VAR_2->pending_phase2_req = ((void*)0);
 FUNC_1(VAR_2->pending_resp);
 VAR_2->pending_resp = ((void*)0);
 VAR_2->crypto_binding_used = 0;
}

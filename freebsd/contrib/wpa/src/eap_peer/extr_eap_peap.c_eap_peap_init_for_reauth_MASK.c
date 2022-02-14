
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct eap_sm {int peap_done; } ;
struct eap_peap_data {int resuming; int reauth; scalar_t__ phase2_eap_started; scalar_t__ phase2_eap_success; scalar_t__ phase2_success; scalar_t__ phase2_priv; TYPE_1__* phase2_method; int ssl; struct eap_peap_data* session_id; } ;
struct TYPE_2__ {int (* init_for_reauth ) (struct eap_sm*,scalar_t__) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct eap_peap_data*) ;
 scalar_t__ FUNC_1 (struct eap_sm*,int *) ;
 int FUNC_2 (struct eap_peap_data*) ;
 int FUNC_3 (struct eap_sm*,scalar_t__) ;

__attribute__((used)) static void * FUNC_4(struct eap_sm *VAR_1, void *VAR_2)
{
 struct eap_peap_data *VAR_3 = VAR_2;
 FUNC_0(VAR_3);
 FUNC_2(VAR_3->session_id);
 VAR_3->session_id = ((void*)0);
 if (FUNC_1(VAR_1, &VAR_3->ssl)) {
  FUNC_2(VAR_3);
  return ((void*)0);
 }
 if (VAR_3->phase2_priv && VAR_3->phase2_method &&
     VAR_3->phase2_method->init_for_reauth)
  VAR_3->phase2_method->init_for_reauth(VAR_1, VAR_3->phase2_priv);
 VAR_3->phase2_success = 0;
 VAR_3->phase2_eap_success = 0;
 VAR_3->phase2_eap_started = 0;
 VAR_3->resuming = 1;
 VAR_3->reauth = 1;
 VAR_1->peap_done = VAR_0;
 return VAR_2;
}

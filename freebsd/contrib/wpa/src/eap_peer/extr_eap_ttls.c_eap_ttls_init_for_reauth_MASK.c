
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct eap_ttls_data {int resuming; int reauth; scalar_t__ phase2_success; scalar_t__ phase2_start; scalar_t__ phase2_priv; TYPE_1__* phase2_method; int ssl; struct eap_ttls_data* session_id; } ;
struct eap_sm {int dummy; } ;
struct TYPE_2__ {int (* init_for_reauth ) (struct eap_sm*,scalar_t__) ;} ;


 scalar_t__ FUNC_0 (struct eap_sm*,int *) ;
 int FUNC_1 (struct eap_ttls_data*) ;
 int FUNC_2 (struct eap_ttls_data*) ;
 int FUNC_3 (struct eap_sm*,scalar_t__) ;

__attribute__((used)) static void * FUNC_4(struct eap_sm *VAR_0, void *VAR_1)
{
 struct eap_ttls_data *VAR_2 = VAR_1;
 FUNC_1(VAR_2);
 FUNC_2(VAR_2->session_id);
 VAR_2->session_id = ((void*)0);
 if (FUNC_0(VAR_0, &VAR_2->ssl)) {
  FUNC_2(VAR_2);
  return ((void*)0);
 }
 if (VAR_2->phase2_priv && VAR_2->phase2_method &&
     VAR_2->phase2_method->init_for_reauth)
  VAR_2->phase2_method->init_for_reauth(VAR_0, VAR_2->phase2_priv);
 VAR_2->phase2_start = 0;
 VAR_2->phase2_success = 0;
 VAR_2->resuming = 1;
 VAR_2->reauth = 1;
 return VAR_1;
}

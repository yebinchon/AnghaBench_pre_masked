
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct eap_ttls_data {int * phase2_priv; TYPE_1__* phase2_method; } ;
struct eap_sm {int dummy; } ;
struct TYPE_2__ {int (* deinit ) (struct eap_sm*,int *) ;} ;


 int FUNC_0 (struct eap_sm*,int *) ;

__attribute__((used)) static void FUNC_1(struct eap_sm *VAR_0,
           struct eap_ttls_data *VAR_1)
{
 if (VAR_1->phase2_priv && VAR_1->phase2_method) {
  VAR_1->phase2_method->deinit(VAR_0, VAR_1->phase2_priv);
  VAR_1->phase2_method = ((void*)0);
  VAR_1->phase2_priv = ((void*)0);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct eap_teap_pac {struct eap_teap_pac* next; } ;
struct eap_teap_data {struct eap_teap_pac* pac; int ssl; struct eap_teap_data* phase2_types; scalar_t__ phase2_priv; TYPE_1__* phase2_method; } ;
struct eap_sm {int dummy; } ;
struct TYPE_2__ {int (* deinit ) (struct eap_sm*,scalar_t__) ;} ;


 int FUNC_0 (struct eap_sm*,int *) ;
 int FUNC_1 (struct eap_teap_data*) ;
 int FUNC_2 (struct eap_teap_pac*) ;
 int FUNC_3 (struct eap_teap_data*) ;
 int FUNC_4 (struct eap_sm*,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct eap_sm *VAR_0, void *VAR_1)
{
 struct eap_teap_data *VAR_2 = VAR_1;
 struct eap_teap_pac *VAR_3, *VAR_4;

 if (!VAR_2)
  return;
 if (VAR_2->phase2_priv && VAR_2->phase2_method)
  VAR_2->phase2_method->deinit(VAR_0, VAR_2->phase2_priv);
 FUNC_1(VAR_2);
 FUNC_3(VAR_2->phase2_types);
 FUNC_0(VAR_0, &VAR_2->ssl);

 VAR_3 = VAR_2->pac;
 VAR_4 = ((void*)0);
 while (VAR_3) {
  VAR_4 = VAR_3;
  VAR_3 = VAR_3->next;
  FUNC_2(VAR_4);
 }

 FUNC_3(VAR_2);
}

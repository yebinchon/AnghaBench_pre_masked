
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct eap_sm {TYPE_1__* m; int * eap_method_priv; int selectedMethod; int * ext_pw_buf; } ;
struct TYPE_2__ {int (* deinit ) (struct eap_sm*,int *) ;int name; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct eap_sm*,int *) ;
 int FUNC_2 (int ,char*,int ,int ,char const*) ;

__attribute__((used)) static void FUNC_3(struct eap_sm *VAR_1, const char *VAR_2)
{
 FUNC_0(VAR_1->ext_pw_buf);
 VAR_1->ext_pw_buf = ((void*)0);

 if (VAR_1->m == ((void*)0) || VAR_1->eap_method_priv == ((void*)0))
  return;

 FUNC_2(VAR_0, "EAP: deinitialize previously used EAP method "
     "(%d, %s) at %s", VAR_1->selectedMethod, VAR_1->m->name, VAR_2);
 VAR_1->m->deinit(VAR_1, VAR_1->eap_method_priv);
 VAR_1->eap_method_priv = ((void*)0);
 VAR_1->m = ((void*)0);
}

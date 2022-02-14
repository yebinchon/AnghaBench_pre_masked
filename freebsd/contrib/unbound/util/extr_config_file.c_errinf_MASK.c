
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct module_qstate {struct config_strlist* errinf; int region; TYPE_2__* env; } ;
struct config_strlist {struct config_strlist* next; int str; } ;
struct TYPE_4__ {TYPE_1__* cfg; } ;
struct TYPE_3__ {int val_log_level; int log_servfail; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,int) ;
 int FUNC_2 (int ,char const*) ;

void FUNC_3(struct module_qstate* VAR_0, const char* VAR_1)
{
 struct config_strlist* VAR_2;
 if((VAR_0->env->cfg->val_log_level < 2 && !VAR_0->env->cfg->log_servfail) || !VAR_1)
  return;
 VAR_2 = (struct config_strlist*)FUNC_1(VAR_0->region, sizeof(*VAR_2));
 if(!VAR_2) {
  FUNC_0("malloc failure in validator-error-info string");
  return;
 }
 VAR_2->next = ((void*)0);
 VAR_2->str = FUNC_2(VAR_0->region, VAR_1);
 if(!VAR_2->str) {
  FUNC_0("malloc failure in validator-error-info string");
  return;
 }

 if(VAR_0->errinf) {
  struct config_strlist* VAR_3 = VAR_0->errinf;
  while(VAR_3->next)
   VAR_3 = VAR_3->next;
  VAR_3->next = VAR_2;
 } else VAR_0->errinf = VAR_2;
}

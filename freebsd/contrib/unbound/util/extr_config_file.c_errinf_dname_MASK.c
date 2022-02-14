
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct module_qstate {TYPE_2__* env; } ;
typedef int b ;
struct TYPE_4__ {TYPE_1__* cfg; } ;
struct TYPE_3__ {int val_log_level; int log_servfail; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct module_qstate*,char*) ;
 int FUNC_2 (char*,int,char*,char const*,char*) ;

void FUNC_3(struct module_qstate* VAR_1, const char* VAR_2, uint8_t* VAR_3)
{
 char VAR_4[1024];
 char VAR_5[VAR_0+1];
 if((VAR_1->env->cfg->val_log_level < 2 && !VAR_1->env->cfg->log_servfail) || !VAR_2 || !VAR_3)
  return;
 FUNC_0(VAR_3, VAR_5);
 FUNC_2(VAR_4, sizeof(VAR_4), "%s %s", VAR_2, VAR_5);
 FUNC_1(VAR_1, VAR_4);
}

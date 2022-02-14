
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock_list {scalar_t__ len; int addr; struct sock_list* next; } ;
struct module_qstate {TYPE_2__* env; } ;
typedef int buf ;
struct TYPE_4__ {TYPE_1__* cfg; } ;
struct TYPE_3__ {int val_log_level; int log_servfail; } ;


 int FUNC_0 (int *,scalar_t__,char*,int) ;
 int FUNC_1 (struct module_qstate*,char*) ;
 int FUNC_2 (char*,int,char*) ;
 int FUNC_3 (char*) ;

void FUNC_4(struct module_qstate* VAR_0, struct sock_list *VAR_1)
{
 struct sock_list* VAR_2;
 if(VAR_0->env->cfg->val_log_level < 2 && !VAR_0->env->cfg->log_servfail)
  return;
 for(VAR_2=VAR_1; VAR_2; VAR_2=VAR_2->next) {
  char VAR_3[256];
  if(VAR_2 == VAR_1)
   FUNC_2(VAR_3, sizeof(VAR_3), "from ");
  else FUNC_2(VAR_3, sizeof(VAR_3), "and ");
  if(VAR_2->len == 0)
   FUNC_2(VAR_3+FUNC_3(VAR_3), sizeof(VAR_3)-FUNC_3(VAR_3),
    "cache");
  else
   FUNC_0(&VAR_2->addr, VAR_2->len, VAR_3+FUNC_3(VAR_3),
    sizeof(VAR_3)-FUNC_3(VAR_3));
  FUNC_1(VAR_0, VAR_3);
 }
}

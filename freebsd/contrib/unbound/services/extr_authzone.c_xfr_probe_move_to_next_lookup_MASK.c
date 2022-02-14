
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct module_env {TYPE_1__* cfg; } ;
struct auth_xfer {TYPE_2__* task_probe; } ;
struct TYPE_6__ {struct TYPE_6__* next; } ;
struct TYPE_5__ {int lookup_aaaa; TYPE_3__* lookup_target; } ;
struct TYPE_4__ {int do_ip4; scalar_t__ do_ip6; } ;



__attribute__((used)) static void
FUNC_0(struct auth_xfer* VAR_0, struct module_env* VAR_1)
{
 if(!VAR_0->task_probe->lookup_target)
  return;
 if(!VAR_0->task_probe->lookup_aaaa && VAR_1->cfg->do_ip6) {

  VAR_0->task_probe->lookup_aaaa = 1;
  return;
 }
 VAR_0->task_probe->lookup_target = VAR_0->task_probe->lookup_target->next;
 VAR_0->task_probe->lookup_aaaa = 0;
 if(!VAR_1->cfg->do_ip4 && VAR_0->task_probe->lookup_target!=((void*)0))
  VAR_0->task_probe->lookup_aaaa = 1;
}

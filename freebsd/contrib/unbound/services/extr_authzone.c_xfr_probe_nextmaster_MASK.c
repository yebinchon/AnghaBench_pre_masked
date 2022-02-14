
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct auth_xfer {TYPE_3__* task_probe; } ;
struct TYPE_6__ {TYPE_2__* scan_target; TYPE_1__* scan_addr; TYPE_2__* masters; int * scan_specific; } ;
struct TYPE_5__ {TYPE_1__* list; struct TYPE_5__* next; } ;
struct TYPE_4__ {struct TYPE_4__* next; } ;



__attribute__((used)) static void
FUNC_0(struct auth_xfer* VAR_0)
{
 if(!VAR_0->task_probe->scan_specific && !VAR_0->task_probe->scan_target)
  return;
 if(VAR_0->task_probe->scan_addr) {
  VAR_0->task_probe->scan_addr = VAR_0->task_probe->scan_addr->next;
  if(VAR_0->task_probe->scan_addr)
   return;
 }
 if(VAR_0->task_probe->scan_specific) {
  VAR_0->task_probe->scan_specific = ((void*)0);
  VAR_0->task_probe->scan_target = VAR_0->task_probe->masters;
  if(VAR_0->task_probe->scan_target && VAR_0->task_probe->
   scan_target->list)
   VAR_0->task_probe->scan_addr =
    VAR_0->task_probe->scan_target->list;
  return;
 }
 if(!VAR_0->task_probe->scan_target)
  return;
 VAR_0->task_probe->scan_target = VAR_0->task_probe->scan_target->next;
 if(VAR_0->task_probe->scan_target && VAR_0->task_probe->
  scan_target->list)
  VAR_0->task_probe->scan_addr =
   VAR_0->task_probe->scan_target->list;
 return;
}

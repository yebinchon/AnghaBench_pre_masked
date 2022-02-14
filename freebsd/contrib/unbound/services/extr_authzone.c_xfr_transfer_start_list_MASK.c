
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct auth_xfer {TYPE_1__* task_transfer; } ;
struct auth_master {int host; } ;
struct TYPE_6__ {int * list; } ;
struct TYPE_5__ {int * list; } ;
struct TYPE_4__ {TYPE_3__* scan_target; int * scan_addr; TYPE_3__* masters; TYPE_2__* scan_specific; } ;


 TYPE_2__* FUNC_0 (TYPE_3__*,int ) ;

__attribute__((used)) static void
FUNC_1(struct auth_xfer* VAR_0, struct auth_master* VAR_1)
{
 if(VAR_1) {
  VAR_0->task_transfer->scan_specific = FUNC_0(
   VAR_0->task_transfer->masters, VAR_1->host);
  if(VAR_0->task_transfer->scan_specific) {
   VAR_0->task_transfer->scan_target = ((void*)0);
   VAR_0->task_transfer->scan_addr = ((void*)0);
   if(VAR_0->task_transfer->scan_specific->list)
    VAR_0->task_transfer->scan_addr =
     VAR_0->task_transfer->scan_specific->list;
   return;
  }
 }

 VAR_0->task_transfer->scan_specific = ((void*)0);
 VAR_0->task_transfer->scan_addr = ((void*)0);

 VAR_0->task_transfer->scan_target = VAR_0->task_transfer->masters;
 if(VAR_0->task_transfer->scan_target && VAR_0->task_transfer->
  scan_target->list)
  VAR_0->task_transfer->scan_addr =
   VAR_0->task_transfer->scan_target->list;
}

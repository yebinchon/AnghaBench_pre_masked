
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct auth_xfer {int allow_notify_list; struct auth_xfer* task_transfer; scalar_t__ chunks_first; int timer; int cp; int masters; struct auth_xfer* task_probe; struct auth_xfer* task_nextprobe; struct auth_xfer* name; int lock; } ;


 int FUNC_0 (struct auth_xfer*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct auth_xfer*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(struct auth_xfer* VAR_0)
{
 if(!VAR_0) return;
 FUNC_5(&VAR_0->lock);
 FUNC_4(VAR_0->name);
 if(VAR_0->task_nextprobe) {
  FUNC_3(VAR_0->task_nextprobe->timer);
  FUNC_4(VAR_0->task_nextprobe);
 }
 if(VAR_0->task_probe) {
  FUNC_1(VAR_0->task_probe->masters);
  FUNC_2(VAR_0->task_probe->cp);
  FUNC_3(VAR_0->task_probe->timer);
  FUNC_4(VAR_0->task_probe);
 }
 if(VAR_0->task_transfer) {
  FUNC_1(VAR_0->task_transfer->masters);
  FUNC_2(VAR_0->task_transfer->cp);
  FUNC_3(VAR_0->task_transfer->timer);
  if(VAR_0->task_transfer->chunks_first) {
   FUNC_0(VAR_0->task_transfer);
  }
  FUNC_4(VAR_0->task_transfer);
 }
 FUNC_1(VAR_0->allow_notify_list);
 FUNC_4(VAR_0);
}

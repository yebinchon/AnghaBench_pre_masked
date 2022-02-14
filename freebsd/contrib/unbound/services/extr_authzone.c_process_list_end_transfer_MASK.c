
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct module_env {int dummy; } ;
struct auth_xfer {int notify_received; int notify_has_serial; TYPE_2__* task_transfer; int lock; TYPE_1__* task_nextprobe; int notify_serial; } ;
struct TYPE_4__ {int ixfr_fail; } ;
struct TYPE_3__ {int * worker; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct auth_xfer*,struct module_env*,int*) ;
 scalar_t__ FUNC_3 (struct auth_xfer*,int ) ;
 int FUNC_4 (struct auth_xfer*,struct module_env*,int ,int ) ;
 int FUNC_5 (struct auth_xfer*,struct module_env*,int *) ;
 int FUNC_6 (struct auth_xfer*) ;
 int FUNC_7 (struct auth_xfer*) ;
 int FUNC_8 (struct auth_xfer*,struct module_env*) ;

__attribute__((used)) static void
FUNC_9(struct auth_xfer* VAR_0, struct module_env* VAR_1)
{
 int VAR_2 = 0;
 if(FUNC_2(VAR_0, VAR_1, &VAR_2)) {

  FUNC_0(VAR_0->task_transfer);


  FUNC_6(VAR_0);

  if(VAR_0->notify_received && (!VAR_0->notify_has_serial ||
   (VAR_0->notify_has_serial &&
   FUNC_3(VAR_0, VAR_0->notify_serial)))) {
   uint32_t VAR_3 = VAR_0->notify_serial;
   int VAR_4 = VAR_0->notify_has_serial;


   VAR_0->notify_received = 0;
   VAR_0->notify_has_serial = 0;
   VAR_0->notify_serial = 0;
   if(!FUNC_5(VAR_0, VAR_1, ((void*)0))) {



    VAR_0->notify_received = 1;
    VAR_0->notify_has_serial = VAR_4;
    VAR_0->notify_serial = VAR_3;
    FUNC_1(&VAR_0->lock);
   }
   return;
  } else {

   if(VAR_0->task_nextprobe->worker == ((void*)0))
    FUNC_4(VAR_0, VAR_1, 0, 0);
  }
  FUNC_1(&VAR_0->lock);
  return;
 }


 FUNC_0(VAR_0->task_transfer);
 if(VAR_2) {
  VAR_0->task_transfer->ixfr_fail = 1;
 } else {
  FUNC_7(VAR_0);
 }
 FUNC_8(VAR_0, VAR_1);
}

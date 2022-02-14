
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct module_env {scalar_t__ worker; } ;
struct auth_xfer {int lock; TYPE_2__* task_nextprobe; int name; TYPE_1__* task_transfer; } ;
struct TYPE_4__ {int * worker; } ;
struct TYPE_3__ {scalar_t__ worker; int master; scalar_t__ lookup_target; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (scalar_t__,char*,char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (struct auth_xfer*,struct module_env*,int,int ) ;
 int FUNC_5 (struct auth_xfer*) ;
 int FUNC_6 (struct auth_xfer*) ;
 int FUNC_7 (struct auth_xfer*) ;
 scalar_t__ FUNC_8 (struct auth_xfer*,struct module_env*) ;
 scalar_t__ FUNC_9 (struct auth_xfer*,struct module_env*) ;
 int FUNC_10 (struct auth_xfer*,struct module_env*) ;
 int FUNC_11 (struct auth_xfer*) ;

__attribute__((used)) static void
FUNC_12(struct auth_xfer* VAR_2, struct module_env* VAR_3)
{
 FUNC_2(VAR_2->task_transfer->worker == VAR_3->worker);


 while(VAR_2->task_transfer->lookup_target) {
  if(FUNC_9(VAR_2, VAR_3)) {





   if(VAR_1 >= VAR_0) {
    char VAR_4[255+1];
    FUNC_0(VAR_2->name, VAR_4);
    FUNC_3(VAR_0, "auth zone %s transfer next target lookup", VAR_4);
   }
   FUNC_1(&VAR_2->lock);
   return;
  }
  FUNC_10(VAR_2, VAR_3);
 }



 while(!FUNC_7(VAR_2)) {
  VAR_2->task_transfer->master = FUNC_5(VAR_2);
  if(FUNC_8(VAR_2, VAR_3)) {

   FUNC_1(&VAR_2->lock);
   return;
  }

  FUNC_11(VAR_2);
 }
 if(VAR_1 >= VAR_0) {
  char VAR_5[255+1];
  FUNC_0(VAR_2->name, VAR_5);
  FUNC_3(VAR_0, "auth zone %s transfer failed, wait", VAR_5);
 }



 FUNC_6(VAR_2);


 if(VAR_2->task_nextprobe->worker == ((void*)0))
  FUNC_4(VAR_2, VAR_3, 1, 0);
 FUNC_1(&VAR_2->lock);
}

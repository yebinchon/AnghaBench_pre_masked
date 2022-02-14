
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct module_env {TYPE_1__* outnet; } ;
struct auth_xfer {TYPE_2__* task_probe; int lock; int name; } ;
struct TYPE_4__ {int timeout; int * cp; struct module_env* env; } ;
struct TYPE_3__ {scalar_t__ want_to_quit; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (scalar_t__,char*,char*) ;
 scalar_t__ VAR_2 ;
 int FUNC_6 (struct auth_xfer*) ;
 int FUNC_7 (struct auth_xfer*,struct module_env*) ;
 scalar_t__ FUNC_8 (struct auth_xfer*,struct module_env*,int) ;

void
FUNC_9(void* VAR_3)
{
 struct auth_xfer* VAR_4 = (struct auth_xfer*)VAR_3;
 struct module_env* VAR_5;
 FUNC_4(VAR_4->task_probe);
 FUNC_2(&VAR_4->lock);
 VAR_5 = VAR_4->task_probe->env;
 if(VAR_5->outnet->want_to_quit) {
  FUNC_3(&VAR_4->lock);
  return;
 }

 if(VAR_2 >= VAR_1) {
  char VAR_6[255+1];
  FUNC_1(VAR_4->name, VAR_6);
  FUNC_5(VAR_1, "auth zone %s soa probe timeout", VAR_6);
 }
 if(VAR_4->task_probe->timeout <= VAR_0) {

  if(FUNC_8(VAR_4, VAR_5, VAR_4->task_probe->timeout*2)) {
   FUNC_3(&VAR_4->lock);
   return;
  }
 }

 FUNC_0(VAR_4->task_probe->cp);
 VAR_4->task_probe->cp = ((void*)0);


 FUNC_6(VAR_4);
 FUNC_7(VAR_4, VAR_5);
}

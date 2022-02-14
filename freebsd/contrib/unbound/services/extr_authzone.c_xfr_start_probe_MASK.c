
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct module_env {int * worker; } ;
struct auth_xfer {TYPE_2__* task_probe; TYPE_1__* task_transfer; } ;
struct auth_master {int dummy; } ;
struct TYPE_4__ {scalar_t__ have_new_lease; int * cp; struct module_env* env; int * worker; int * masters; scalar_t__ only_lookup; } ;
struct TYPE_3__ {int * worker; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct auth_xfer*,struct module_env*) ;
 int FUNC_2 (struct auth_xfer*,struct auth_master*) ;
 int FUNC_3 (struct auth_xfer*) ;
 int FUNC_4 (struct auth_xfer*,struct module_env*,struct auth_master*) ;

__attribute__((used)) static int
FUNC_5(struct auth_xfer* VAR_0, struct module_env* VAR_1,
 struct auth_master* VAR_2)
{


 if(VAR_0->task_probe->worker == ((void*)0)) {
  if(!FUNC_0(VAR_0->task_probe->masters) &&
   !(VAR_0->task_probe->only_lookup &&
   VAR_0->task_probe->masters != ((void*)0))) {


   if(VAR_0->task_transfer->worker == ((void*)0)) {
    FUNC_4(VAR_0, VAR_1, VAR_2);
    return 1;
   }

   return 0;
  }


  VAR_0->task_probe->worker = VAR_1->worker;
  VAR_0->task_probe->env = VAR_1;
  VAR_0->task_probe->cp = ((void*)0);



  VAR_0->task_probe->have_new_lease = 0;



  FUNC_2(VAR_0, VAR_2);

  FUNC_3(VAR_0);

  FUNC_1(VAR_0, VAR_1);
  return 1;
 }
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct module_env {int * worker; } ;
struct auth_xfer {TYPE_1__* task_transfer; } ;
struct auth_master {int dummy; } ;
struct TYPE_2__ {struct module_env* env; int * worker; int * chunks_last; int * chunks_first; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct auth_xfer*,struct module_env*) ;
 int FUNC_2 (struct auth_xfer*,struct auth_master*) ;
 int FUNC_3 (struct auth_xfer*) ;

__attribute__((used)) static void
FUNC_4(struct auth_xfer* VAR_0, struct module_env* VAR_1,
 struct auth_master* VAR_2)
{
 FUNC_0(VAR_0->task_transfer != ((void*)0));
 FUNC_0(VAR_0->task_transfer->worker == ((void*)0));
 FUNC_0(VAR_0->task_transfer->chunks_first == ((void*)0));
 FUNC_0(VAR_0->task_transfer->chunks_last == ((void*)0));
 VAR_0->task_transfer->worker = VAR_1->worker;
 VAR_0->task_transfer->env = VAR_1;



 FUNC_2(VAR_0, VAR_2);

 FUNC_3(VAR_0);


 FUNC_1(VAR_0, VAR_1);
}

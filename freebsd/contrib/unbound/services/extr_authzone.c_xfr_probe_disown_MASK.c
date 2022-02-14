
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct auth_xfer {TYPE_1__* task_probe; } ;
struct TYPE_2__ {int * env; int * worker; int * cp; int * timer; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct auth_xfer* VAR_0)
{

 FUNC_1(VAR_0->task_probe->timer);
 VAR_0->task_probe->timer = ((void*)0);

 FUNC_0(VAR_0->task_probe->cp);
 VAR_0->task_probe->cp = ((void*)0);

 VAR_0->task_probe->worker = ((void*)0);
 VAR_0->task_probe->env = ((void*)0);
}

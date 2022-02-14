
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct auth_xfer {TYPE_1__* task_nextprobe; } ;
struct TYPE_2__ {int * env; int * worker; scalar_t__ next_probe; int * timer; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(struct auth_xfer* VAR_0)
{


 FUNC_0(VAR_0->task_nextprobe->timer);
 VAR_0->task_nextprobe->timer = ((void*)0);
 VAR_0->task_nextprobe->next_probe = 0;

 VAR_0->task_nextprobe->worker = ((void*)0);
 VAR_0->task_nextprobe->env = ((void*)0);
}

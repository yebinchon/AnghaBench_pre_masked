
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int pid_t ;
struct TYPE_4__ {scalar_t__ td_tid; TYPE_1__* td_proc; } ;
struct TYPE_3__ {int p_pid; } ;


 int FUNC_0 (char*,int,long) ;
 TYPE_2__* VAR_0 ;

void
FUNC_1(void)
{
 pid_t VAR_1;

 VAR_1 = -1;
 if (VAR_0->td_proc != ((void*)0))
  VAR_1 = VAR_0->td_proc->p_pid;
 FUNC_0("[ thread pid %d tid %ld ]\n", VAR_1, (long)VAR_0->td_tid);
}

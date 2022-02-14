
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {TYPE_1__* td_proc; } ;
struct TYPE_2__ {int p_exitthreads; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct thread*) ;

void
FUNC_2(struct thread *VAR_0)
{
 FUNC_0(&VAR_0->td_proc->p_exitthreads, 1);
 FUNC_1(VAR_0);
}

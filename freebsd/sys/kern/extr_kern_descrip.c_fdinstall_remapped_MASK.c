
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {TYPE_1__* td_proc; } ;
struct filedesc {int dummy; } ;
struct TYPE_2__ {struct filedesc* p_fd; } ;


 int FUNC_0 (struct thread*) ;

void
FUNC_1(struct thread *VAR_0, struct filedesc *VAR_1)
{

 FUNC_0(VAR_0);
 VAR_0->td_proc->p_fd = VAR_1;
}

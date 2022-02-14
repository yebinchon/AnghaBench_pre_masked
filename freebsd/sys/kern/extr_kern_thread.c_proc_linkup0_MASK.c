
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct proc {int p_threads; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct proc*,struct thread*) ;

void
FUNC_2(struct proc *VAR_0, struct thread *VAR_1)
{
 FUNC_0(&VAR_0->p_threads);
 FUNC_1(VAR_0, VAR_1);
}

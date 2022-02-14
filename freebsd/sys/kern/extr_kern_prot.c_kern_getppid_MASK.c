
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {struct proc* td_proc; } ;
struct proc {int p_oppid; } ;



int
FUNC_0(struct thread *VAR_0)
{
 struct proc *VAR_1 = VAR_0->td_proc;

 return (VAR_1->p_oppid);
}

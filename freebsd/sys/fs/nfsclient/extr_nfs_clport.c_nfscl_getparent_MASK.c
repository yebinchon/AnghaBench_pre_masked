
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {struct proc* td_proc; } ;
struct proc {scalar_t__ p_pid; int p_threads; struct proc* p_pptr; } ;
typedef struct thread NFSPROC_T ;


 struct thread* FUNC_0 (int *) ;

NFSPROC_T *
FUNC_1(struct thread *VAR_0)
{
 struct proc *VAR_1;
 struct thread *VAR_2;

 if (VAR_0 == ((void*)0))
  return (((void*)0));
 VAR_1 = VAR_0->td_proc;
 if (VAR_1->p_pid == 0)
  return (((void*)0));
 VAR_1 = VAR_1->p_pptr;
 if (VAR_1 == ((void*)0))
  return (((void*)0));
 VAR_2 = FUNC_0(&VAR_1->p_threads);
 return (VAR_2);
}

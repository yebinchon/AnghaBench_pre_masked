
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {scalar_t__ td_tid; int td_flags; struct proc* td_proc; int td_pflags; } ;
struct thr_wake_args {scalar_t__ id; } ;
struct proc {int p_pid; } ;
typedef int lwpid_t ;


 int VAR_0 ;
 int FUNC_0 (struct proc*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct thread* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct thread*) ;
 int FUNC_3 (struct thread*) ;
 int FUNC_4 (void*) ;

int
FUNC_5(struct thread *VAR_3, struct thr_wake_args *VAR_4)

{
 struct proc *VAR_5;
 struct thread *VAR_6;

 if (VAR_4->id == VAR_3->td_tid) {
  VAR_3->td_pflags |= VAR_2;
  return (0);
 }

 VAR_5 = VAR_3->td_proc;
 VAR_6 = FUNC_1((lwpid_t)VAR_4->id, VAR_5->p_pid);
 if (VAR_6 == ((void*)0))
  return (VAR_0);
 FUNC_2(VAR_6);
 VAR_6->td_flags |= VAR_1;
 FUNC_3(VAR_6);
 FUNC_4((void *)VAR_6);
 FUNC_0(VAR_5);
 return (0);
}

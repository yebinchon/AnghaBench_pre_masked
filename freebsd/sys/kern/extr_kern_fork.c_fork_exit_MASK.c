
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct trapframe {int dummy; } ;
struct thread {char* td_name; int td_pflags; struct proc* td_proc; } ;
struct proc {scalar_t__ p_state; int p_pid; int p_flag; TYPE_1__* p_sysent; } ;
struct TYPE_2__ {int (* sv_schedtail ) (struct thread*) ;} ;


 int FUNC_0 (int ,char*,struct thread*,int ,int,char*) ;
 int VAR_0 ;
 int FUNC_1 (int,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct thread* FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct thread* VAR_6 ;
 int VAR_7 ;
 int FUNC_4 () ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (char*,char*,int) ;
 int FUNC_7 (struct thread*) ;
 int FUNC_8 (struct thread*) ;
 int FUNC_9 (struct thread*) ;
 int FUNC_10 (struct thread*) ;
 int FUNC_11 (struct thread*) ;

void
FUNC_12(void (*VAR_8)(void *, struct trapframe *), void *VAR_9,
    struct trapframe *VAR_10)
{
 struct proc *VAR_11;
 struct thread *VAR_12;
 struct thread *VAR_13;

 VAR_12 = VAR_6;
 VAR_11 = VAR_12->td_proc;
 FUNC_1(VAR_11->p_state == VAR_3, ("executing process is still new"));

 FUNC_0(VAR_1, "fork_exit: new thread %p (td_sched %p, pid %d, %s)",
     VAR_12, FUNC_9(VAR_12), VAR_11->p_pid, VAR_12->td_name);

 FUNC_7(VAR_12);





 if ((VAR_13 = FUNC_2(VAR_7))) {
  FUNC_3(VAR_7, ((void*)0));
  FUNC_10(VAR_13);
 }
 FUNC_11(VAR_12);






 FUNC_1(VAR_8 != ((void*)0), ("NULL callout in fork_exit"));
 VAR_8(VAR_9, VAR_10);





 if (VAR_11->p_flag & VAR_4) {
  FUNC_6("Kernel thread \"%s\" (pid %d) exited prematurely.\n",
      VAR_12->td_name, VAR_11->p_pid);
  FUNC_4();
 }
 FUNC_5(&VAR_0, VAR_2);

 if (VAR_11->p_sysent->sv_schedtail != ((void*)0))
  (VAR_11->p_sysent->sv_schedtail)(VAR_12);
 VAR_12->td_pflags &= ~VAR_5;
}

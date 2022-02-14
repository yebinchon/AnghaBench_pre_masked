
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ ss_sp; scalar_t__ ss_size; int ss_flags; } ;
struct thread {int td_pflags; TYPE_1__ td_sigstk; struct proc* td_proc; } ;
struct sigacts {int ps_flag; scalar_t__* ps_sigact; int ps_mtx; int ps_sigignore; } ;
struct proc {struct sigacts* p_sigacts; } ;
typedef int sigset_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct proc*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int) ;
 int VAR_3 ;
 int FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_5 (struct proc*) ;
 int VAR_9 ;
 size_t FUNC_6 (int ) ;
 struct thread* VAR_10 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct proc*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct sigacts*,int) ;

void
FUNC_12(struct proc *VAR_11)
{
 sigset_t VAR_12;
 struct sigacts *VAR_13;
 int VAR_14;
 struct thread *VAR_15;






 FUNC_1(VAR_11, VAR_0);
 VAR_13 = VAR_11->p_sigacts;
 FUNC_7(&VAR_13->ps_mtx);
 FUNC_9(VAR_11);







 if (FUNC_5(VAR_11) == VAR_8) {
  VAR_12 = VAR_13->ps_sigignore;
  while (FUNC_4(VAR_12)) {
   VAR_14 = FUNC_10(&VAR_12);
   FUNC_3(VAR_12, VAR_14);
   if (VAR_14 != VAR_4)
    FUNC_11(VAR_13, VAR_14);
  }
  FUNC_2(VAR_13->ps_sigignore, VAR_4);
 }





 VAR_15 = VAR_10;
 FUNC_0(VAR_15->td_proc == VAR_11);
 VAR_15->td_sigstk.ss_flags = VAR_7;
 VAR_15->td_sigstk.ss_size = 0;
 VAR_15->td_sigstk.ss_sp = 0;
 VAR_15->td_pflags &= ~VAR_9;



 VAR_13->ps_flag &= ~(VAR_2 | VAR_1);
 if (VAR_13->ps_sigact[FUNC_6(VAR_3)] == VAR_6)
  VAR_13->ps_sigact[FUNC_6(VAR_3)] = VAR_5;
 FUNC_8(&VAR_13->ps_mtx);
}

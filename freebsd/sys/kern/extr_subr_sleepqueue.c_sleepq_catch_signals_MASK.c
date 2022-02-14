
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int td_pflags; int td_flags; int td_dbgflags; int * td_lock; int td_name; } ;
struct sleepqueue_chain {int sc_lock; } ;
struct sleepqueue {int dummy; } ;
struct sigacts {int ps_mtx; int ps_sigintr; } ;
struct proc {struct sigacts* p_sigacts; scalar_t__ p_pid; } ;


 int FUNC_0 (int ,char*,void*,long,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct proc*) ;
 int FUNC_4 (struct proc*) ;
 int FUNC_5 (struct proc*) ;
 int FUNC_6 (struct proc*) ;
 struct sleepqueue_chain* FUNC_7 (void*) ;
 scalar_t__ FUNC_8 (int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_9 (struct thread*) ;
 int FUNC_10 (struct thread*) ;
 int FUNC_11 (struct thread*) ;
 struct proc* VAR_11 ;
 int FUNC_12 (struct thread*) ;
 struct thread* VAR_12 ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (char*) ;
 struct sleepqueue* FUNC_19 (void*) ;
 scalar_t__ FUNC_20 (struct sleepqueue*,struct thread*,int ) ;
 int FUNC_21 (void*,int) ;
 int FUNC_22 (struct thread*) ;
 int FUNC_23 (int) ;
 int FUNC_24 (struct thread*) ;

__attribute__((used)) static int
FUNC_25(void *VAR_13, int VAR_14)
{
 struct sleepqueue_chain *VAR_15;
 struct sleepqueue *VAR_16;
 struct thread *VAR_17;
 struct proc *VAR_18;
 struct sigacts *VAR_19;
 int VAR_20, VAR_21;

 VAR_21 = 0;
 VAR_17 = VAR_12;
 VAR_18 = VAR_11;
 VAR_15 = FUNC_7(VAR_13);
 FUNC_13(&VAR_15->sc_lock, VAR_3);
 FUNC_2(VAR_13 != ((void*)0));
 if ((VAR_17->td_pflags & VAR_10) != 0) {
  VAR_17->td_pflags &= ~VAR_10;
  VAR_21 = VAR_0;
  FUNC_22(VAR_17);
  goto out;
 }





 FUNC_22(VAR_17);
 if ((VAR_17->td_flags & (VAR_5 | VAR_6)) != 0) {
  FUNC_24(VAR_17);
  FUNC_17(&VAR_15->sc_lock);
  FUNC_0(VAR_2, "sleepq catching signals: thread %p (pid %ld, %s)",
   (void *)VAR_17, (long)VAR_18->p_pid, VAR_17->td_name);
  FUNC_3(VAR_18);





  if ((VAR_17->td_flags & VAR_6) != 0) {
   VAR_21 = FUNC_23(1);
   FUNC_2(VAR_21 == 0 || VAR_21 == VAR_0 || VAR_21 == VAR_1);
   if (VAR_21 != 0) {
    FUNC_6(VAR_18);
    FUNC_15(&VAR_15->sc_lock);
    FUNC_22(VAR_17);
    goto out;
   }
  }
  if ((VAR_17->td_flags & VAR_5) != 0) {
   VAR_19 = VAR_18->p_sigacts;
   FUNC_14(&VAR_19->ps_mtx);
   VAR_20 = FUNC_12(VAR_17);
   if (VAR_20 == -1) {
    FUNC_16(&VAR_19->ps_mtx);
    FUNC_1((VAR_17->td_flags & VAR_7) != 0,
        ("lost TDF_SBDRY"));
    FUNC_1(FUNC_11(VAR_17),
        ("lost TDF_SERESTART of TDF_SEINTR"));
    FUNC_1((VAR_17->td_flags &
        (VAR_8 | VAR_9)) !=
        (VAR_8 | VAR_9),
        ("both TDF_SEINTR and TDF_SERESTART"));
    VAR_21 = FUNC_10(VAR_17);
   } else if (VAR_20 != 0) {
    VAR_21 = FUNC_8(VAR_19->ps_sigintr, VAR_20) ?
        VAR_0 : VAR_1;
    FUNC_16(&VAR_19->ps_mtx);
   } else {
    FUNC_16(&VAR_19->ps_mtx);
   }
   if ((VAR_17->td_dbgflags & VAR_4) != 0) {
    if (VAR_21 == 0)
     VAR_21 = VAR_0;
    VAR_17->td_dbgflags &= ~VAR_4;
   }
  }





  FUNC_4(VAR_18);
  FUNC_15(&VAR_15->sc_lock);
  FUNC_6(VAR_18);
  FUNC_22(VAR_17);
  FUNC_5(VAR_18);
 }
 if (VAR_21 == 0) {
  FUNC_21(VAR_13, VAR_14);
  return (0);
 }
out:




 if (FUNC_9(VAR_17)) {
  VAR_16 = FUNC_19(VAR_13);
  if (FUNC_20(VAR_16, VAR_17, 0)) {







  }
 }
 FUNC_17(&VAR_15->sc_lock);
 FUNC_2(VAR_17->td_lock != &VAR_15->sc_lock);
 return (VAR_21);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {struct proc* td_proc; } ;
struct sigacts {int ps_flag; int ps_mtx; int ps_osigset; int ** ps_sigact; int ps_freebsd4; int ps_sigcatch; int ps_sigignore; int ps_signodefer; int ps_sigreset; int ps_sigonstack; int ps_sigintr; int ps_siginfo; int * ps_catchmask; } ;
struct sigaction {int sa_flags; int * sa_handler; int * sa_sigaction; int sa_mask; } ;
struct proc {int p_pid; struct sigacts* p_sigacts; } ;
typedef int __siginfohandler_t ;
typedef int __sighandler_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct proc*) ;
 int FUNC_1 (struct proc*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (int ,int) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (int ,int) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_5 (int ) ;
 int * VAR_18 ;
 int * VAR_19 ;
 size_t FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct sigaction*,int ,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (struct sigaction const*,int) ;
 int FUNC_12 (int) ;
 int FUNC_13 (struct proc*,int) ;

int
FUNC_14(struct thread *VAR_20, int VAR_21, const struct sigaction *VAR_22,
    struct sigaction *VAR_23, int VAR_24)
{
 struct sigacts *VAR_25;
 struct proc *VAR_26 = VAR_20->td_proc;

 if (!FUNC_7(VAR_21))
  return (VAR_0);
 if (VAR_22 != ((void*)0) && VAR_22->sa_handler != VAR_18 &&
     VAR_22->sa_handler != VAR_19 && (VAR_22->sa_flags & ~(VAR_9 |
     VAR_11 | VAR_10 | VAR_6 | VAR_8 |
     VAR_7 | VAR_12)) != 0)
  return (VAR_0);

 FUNC_0(VAR_26);
 VAR_25 = VAR_26->p_sigacts;
 FUNC_9(&VAR_25->ps_mtx);
 if (VAR_23) {
  FUNC_8(VAR_23, 0, sizeof(*VAR_23));
  VAR_23->sa_mask = VAR_25->ps_catchmask[FUNC_6(VAR_21)];
  if (FUNC_4(VAR_25->ps_sigonstack, VAR_21))
   VAR_23->sa_flags |= VAR_9;
  if (!FUNC_4(VAR_25->ps_sigintr, VAR_21))
   VAR_23->sa_flags |= VAR_11;
  if (FUNC_4(VAR_25->ps_sigreset, VAR_21))
   VAR_23->sa_flags |= VAR_10;
  if (FUNC_4(VAR_25->ps_signodefer, VAR_21))
   VAR_23->sa_flags |= VAR_8;
  if (FUNC_4(VAR_25->ps_siginfo, VAR_21)) {
   VAR_23->sa_flags |= VAR_12;
   VAR_23->sa_sigaction =
       (__siginfohandler_t *)VAR_25->ps_sigact[FUNC_6(VAR_21)];
  } else
   VAR_23->sa_handler = VAR_25->ps_sigact[FUNC_6(VAR_21)];
  if (VAR_21 == VAR_13 && VAR_25->ps_flag & VAR_4)
   VAR_23->sa_flags |= VAR_6;
  if (VAR_21 == VAR_13 && VAR_25->ps_flag & VAR_5)
   VAR_23->sa_flags |= VAR_7;
 }
 if (VAR_22) {
  if ((VAR_21 == VAR_15 || VAR_21 == VAR_17) &&
      VAR_22->sa_handler != VAR_18) {
   FUNC_10(&VAR_25->ps_mtx);
   FUNC_1(VAR_26);
   return (VAR_0);
  }





  VAR_25->ps_catchmask[FUNC_6(VAR_21)] = VAR_22->sa_mask;
  FUNC_5(VAR_25->ps_catchmask[FUNC_6(VAR_21)]);
  if (FUNC_11(VAR_22, VAR_12)) {
   VAR_25->ps_sigact[FUNC_6(VAR_21)] =
       (__sighandler_t *)VAR_22->sa_sigaction;
   FUNC_2(VAR_25->ps_siginfo, VAR_21);
  } else {
   VAR_25->ps_sigact[FUNC_6(VAR_21)] = VAR_22->sa_handler;
   FUNC_3(VAR_25->ps_siginfo, VAR_21);
  }
  if (!FUNC_11(VAR_22, VAR_11))
   FUNC_2(VAR_25->ps_sigintr, VAR_21);
  else
   FUNC_3(VAR_25->ps_sigintr, VAR_21);
  if (FUNC_11(VAR_22, VAR_9))
   FUNC_2(VAR_25->ps_sigonstack, VAR_21);
  else
   FUNC_3(VAR_25->ps_sigonstack, VAR_21);
  if (FUNC_11(VAR_22, VAR_10))
   FUNC_2(VAR_25->ps_sigreset, VAR_21);
  else
   FUNC_3(VAR_25->ps_sigreset, VAR_21);
  if (FUNC_11(VAR_22, VAR_8))
   FUNC_2(VAR_25->ps_signodefer, VAR_21);
  else
   FUNC_3(VAR_25->ps_signodefer, VAR_21);
  if (VAR_21 == VAR_13) {
   if (VAR_22->sa_flags & VAR_6)
    VAR_25->ps_flag |= VAR_4;
   else
    VAR_25->ps_flag &= ~VAR_4;
   if (VAR_22->sa_flags & VAR_7) {






    if (VAR_26->p_pid == 1)
     VAR_25->ps_flag &= ~VAR_5;
    else
     VAR_25->ps_flag |= VAR_5;
   } else
    VAR_25->ps_flag &= ~VAR_5;
   if (VAR_25->ps_sigact[FUNC_6(VAR_13)] == VAR_19)
    VAR_25->ps_flag |= VAR_3;
   else
    VAR_25->ps_flag &= ~VAR_3;
  }






  if (VAR_25->ps_sigact[FUNC_6(VAR_21)] == VAR_19 ||
      (FUNC_12(VAR_21) & VAR_16 &&
       VAR_25->ps_sigact[FUNC_6(VAR_21)] == VAR_18)) {

   FUNC_13(VAR_26, VAR_21);
   if (VAR_21 != VAR_14)

    FUNC_2(VAR_25->ps_sigignore, VAR_21);
   FUNC_3(VAR_25->ps_sigcatch, VAR_21);
  } else {
   FUNC_3(VAR_25->ps_sigignore, VAR_21);
   if (VAR_25->ps_sigact[FUNC_6(VAR_21)] == VAR_18)
    FUNC_3(VAR_25->ps_sigcatch, VAR_21);
   else
    FUNC_2(VAR_25->ps_sigcatch, VAR_21);
  }
 }
 FUNC_10(&VAR_25->ps_mtx);
 FUNC_1(VAR_26);
 return (0);
}

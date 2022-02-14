
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct tty {scalar_t__ t_pgrp; int t_bgwait; } ;
struct thread {int td_sigmask; struct proc* td_proc; } ;
struct proc {scalar_t__ p_pgrp; int p_flag; TYPE_1__* p_sigacts; } ;
struct pgrp {scalar_t__ pg_jobc; } ;
struct TYPE_6__ {int ksi_signo; int ksi_code; } ;
typedef TYPE_2__ ksiginfo_t ;
struct TYPE_5__ {int ps_sigignore; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct pgrp*) ;
 int FUNC_2 (struct pgrp*) ;
 int FUNC_3 (struct proc*) ;
 int FUNC_4 (struct proc*) ;
 int VAR_2 ;
 scalar_t__ FUNC_5 (int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (struct pgrp*,int,int,TYPE_2__*) ;
 int FUNC_8 (struct tty*,struct proc*) ;
 int FUNC_9 (struct tty*,int ) ;
 int FUNC_10 (struct tty*,int *) ;

int
FUNC_11(struct tty *VAR_6, struct thread *VAR_7, int VAR_8)
{
 struct proc *VAR_9 = VAR_7->td_proc;
 struct pgrp *VAR_10;
 ksiginfo_t VAR_11;
 int VAR_12;

 FUNC_0(VAR_8 == VAR_3 || VAR_8 == VAR_4);
 FUNC_9(VAR_6, VAR_1);

 for (;;) {
  FUNC_3(VAR_9);
  if (!FUNC_8(VAR_6, VAR_9) || VAR_9->p_pgrp == VAR_6->t_pgrp) {

   FUNC_4(VAR_9);
   return (0);
  }

  if (FUNC_5(VAR_9->p_sigacts->ps_sigignore, VAR_8) ||
      FUNC_5(VAR_7->td_sigmask, VAR_8)) {

   FUNC_4(VAR_9);
   return (VAR_8 == VAR_4 ? 0 : VAR_0);
  }

  VAR_10 = VAR_9->p_pgrp;
  if (VAR_9->p_flag & VAR_2 || VAR_10->pg_jobc == 0) {

   FUNC_4(VAR_9);
   return (VAR_0);
  }
  FUNC_4(VAR_9);





  if (VAR_8 != 0) {
   FUNC_6(&VAR_11);
   VAR_11.ksi_code = VAR_5;
   VAR_11.ksi_signo = VAR_8;
   VAR_8 = 0;
  }
  FUNC_1(VAR_10);
  FUNC_7(VAR_10, VAR_11.ksi_signo, 1, &VAR_11);
  FUNC_2(VAR_10);

  VAR_12 = FUNC_10(VAR_6, &VAR_6->t_bgwait);
  if (VAR_12)
   return (VAR_12);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int td_sigmask; } ;
struct sigacts {int ps_mtx; int ps_sigintr; int ps_sigcatch; } ;
struct proc {int p_flag; int p_siglist; struct sigacts* p_sigacts; } ;
typedef int sigset_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct proc*,int ) ;
 int VAR_4 ;
 int FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int) ;
 int VAR_5 ;
 int FUNC_4 (int ,int ) ;
 int VAR_6 ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct thread*) ;
 struct thread* FUNC_10 (struct proc*,int,int ) ;
 int FUNC_11 (struct thread*,int,int ,int ) ;

__attribute__((used)) static void
FUNC_12(struct proc *VAR_7, sigset_t VAR_8, int VAR_9)
{
 struct sigacts *VAR_10;
 struct thread *VAR_11;
 int VAR_12;

 FUNC_0(VAR_7, VAR_3);
 VAR_10 = VAR_7->p_sigacts;
 FUNC_5(&VAR_10->ps_mtx, (VAR_9 & VAR_5) != 0 ?
     VAR_3 : VAR_2);
 if (FUNC_2(VAR_7->p_siglist))
  return;
 FUNC_4(VAR_8, VAR_7->p_siglist);
 while ((VAR_12 = FUNC_8(&VAR_8)) != 0) {
  FUNC_1(VAR_8, VAR_12);
  VAR_11 = FUNC_10(VAR_7, VAR_12, 0);
  FUNC_9(VAR_11);
  if (!(VAR_9 & VAR_5))
   FUNC_6(&VAR_10->ps_mtx);
  if (VAR_7->p_flag & VAR_4 ||
      (FUNC_3(VAR_10->ps_sigcatch, VAR_12) &&
      !FUNC_3(VAR_11->td_sigmask, VAR_12)))
   FUNC_11(VAR_11, VAR_12, VAR_6,
       (FUNC_3(VAR_10->ps_sigintr, VAR_12) ? VAR_0 :
        VAR_1));
  if (!(VAR_9 & VAR_5))
   FUNC_7(&VAR_10->ps_mtx);
 }
}

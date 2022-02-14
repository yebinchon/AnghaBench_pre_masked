
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {int td_siglist; int td_sigmask; struct proc* td_proc; } ;
struct proc {int p_siglist; TYPE_1__* p_sigacts; } ;
struct nfsmount {int nm_flag; int nm_mountp; } ;
typedef int sigset_t ;
struct TYPE_2__ {int ps_mtx; int ps_sigignore; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (struct proc*) ;
 int FUNC_2 (struct proc*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int ) ;

int
FUNC_9(struct nfsmount *VAR_3, struct thread *VAR_4)
{
 struct proc *VAR_5;
 sigset_t VAR_6;


 if (FUNC_0(VAR_3->nm_mountp))
  return (VAR_1);
 if (!(VAR_3->nm_flag & VAR_2))
  return (0);
 if (VAR_4 == ((void*)0))
  return (0);
 VAR_5 = VAR_4->td_proc;
 FUNC_1(VAR_5);
 VAR_6 = VAR_5->p_siglist;
 FUNC_5(VAR_6, VAR_4->td_siglist);
 FUNC_4(VAR_6, VAR_4->td_sigmask);
 FUNC_6(&VAR_5->p_sigacts->ps_mtx);
 FUNC_4(VAR_6, VAR_5->p_sigacts->ps_sigignore);
 FUNC_7(&VAR_5->p_sigacts->ps_mtx);
 if ((FUNC_3(VAR_5->p_siglist) || FUNC_3(VAR_4->td_siglist))
     && FUNC_8(VAR_6)) {
  FUNC_2(VAR_5);
  return (VAR_0);
 }
 FUNC_2(VAR_5);
 return (0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct proc {int p_pendingcnt; } ;
struct ksiginfo {int ksi_signo; } ;
struct TYPE_5__ {int sq_signals; int sq_ptrace; int sq_kill; int sq_list; struct proc* sq_proc; } ;
typedef TYPE_1__ sigqueue_t ;
struct TYPE_6__ {int ksi_flags; int ksi_signo; TYPE_1__* ksi_sigq; } ;
typedef TYPE_2__ ksiginfo_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 struct ksiginfo* FUNC_2 (int *) ;
 struct ksiginfo* FUNC_3 (struct ksiginfo*,int ) ;
 int FUNC_4 (int *,TYPE_2__*,int ) ;
 int VAR_1 ;

void
FUNC_5(ksiginfo_t *VAR_2)
{
 struct ksiginfo *VAR_3;
 struct proc *VAR_4;
 sigqueue_t *VAR_5;

 if (VAR_2 == ((void*)0) || (VAR_5 = VAR_2->ksi_sigq) == ((void*)0))
  return;

 VAR_4 = VAR_5->sq_proc;
 FUNC_4(&VAR_5->sq_list, VAR_2, VAR_1);
 VAR_2->ksi_sigq = ((void*)0);
 if (!(VAR_2->ksi_flags & VAR_0) && VAR_4 != ((void*)0))
  VAR_4->p_pendingcnt--;

 for (VAR_3 = FUNC_2(&VAR_5->sq_list); VAR_3 != ((void*)0);
      VAR_3 = FUNC_3(VAR_3, VAR_1)) {
  if (VAR_3->ksi_signo == VAR_2->ksi_signo)
   break;
 }
 if (VAR_3 == ((void*)0) && !FUNC_1(VAR_5->sq_kill, VAR_2->ksi_signo) &&
     !FUNC_1(VAR_5->sq_ptrace, VAR_2->ksi_signo))
  FUNC_0(VAR_5->sq_signals, VAR_2->ksi_signo);
}

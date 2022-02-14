
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct proc {int p_pendingcnt; } ;
struct TYPE_7__ {int sq_flags; int sq_ptrace; int sq_kill; int sq_signals; int sq_list; struct proc* sq_proc; } ;
typedef TYPE_1__ sigqueue_t ;
struct TYPE_8__ {int * ksi_sigq; } ;
typedef TYPE_2__ ksiginfo_t ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct proc*,int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 TYPE_2__* FUNC_3 (int *) ;
 int FUNC_4 (int *,TYPE_2__*,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;

void
FUNC_6(sigqueue_t *VAR_3)
{
 struct proc *VAR_4 = VAR_3->sq_proc;
 ksiginfo_t *VAR_5;

 FUNC_0(VAR_3->sq_flags & VAR_1, ("sigqueue not inited"));

 if (VAR_4 != ((void*)0))
  FUNC_1(VAR_4, VAR_0);

 while ((VAR_5 = FUNC_3(&VAR_3->sq_list)) != ((void*)0)) {
  FUNC_4(&VAR_3->sq_list, VAR_5, VAR_2);
  VAR_5->ksi_sigq = ((void*)0);
  if (FUNC_5(VAR_5) && VAR_4 != ((void*)0))
   VAR_4->p_pendingcnt--;
 }

 FUNC_2(VAR_3->sq_signals);
 FUNC_2(VAR_3->sq_kill);
 FUNC_2(VAR_3->sq_ptrace);
}

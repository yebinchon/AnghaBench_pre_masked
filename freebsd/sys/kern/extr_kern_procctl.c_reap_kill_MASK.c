
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct thread {TYPE_2__* td_ucred; TYPE_1__* td_proc; } ;
struct reap_kill_tracker_head {int dummy; } ;
struct reap_kill_tracker {struct proc* parent; } ;
struct procctl_reaper_kill {scalar_t__ rk_sig; int rk_flags; int rk_fpid; scalar_t__ rk_subtree; scalar_t__ rk_killed; } ;
struct proc {int p_treeflag; scalar_t__ p_reapsubtree; int p_reaplist; int p_children; struct proc* p_reaper; } ;
struct TYPE_8__ {scalar_t__ ksi_signo; int ksi_uid; int ksi_pid; int ksi_code; } ;
typedef TYPE_3__ ksiginfo_t ;
struct TYPE_7__ {int cr_ruid; } ;
struct TYPE_6__ {int p_pid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct thread*) ;
 struct proc* FUNC_1 (int *) ;
 struct proc* FUNC_2 (struct proc*,int ) ;
 int FUNC_3 (int) ;
 int VAR_3 ;
 int FUNC_4 (struct proc*) ;
 int FUNC_5 (struct proc*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct reap_kill_tracker* FUNC_6 (struct reap_kill_tracker_head*) ;
 int FUNC_7 (struct reap_kill_tracker_head*) ;
 int FUNC_8 (struct reap_kill_tracker_head*,struct reap_kill_tracker*,int ) ;
 scalar_t__ VAR_9 ;
 int FUNC_9 (struct reap_kill_tracker*,int ) ;
 int FUNC_10 (TYPE_3__*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_11 (struct thread*,struct proc*,TYPE_3__*,struct procctl_reaper_kill*,int*) ;
 int FUNC_12 (struct reap_kill_tracker_head*,struct proc*) ;
 int FUNC_13 (int *,int ) ;

__attribute__((used)) static int
FUNC_14(struct thread *VAR_14, struct proc *VAR_15, struct procctl_reaper_kill *VAR_16)
{
 struct proc *VAR_17, *VAR_18;
 ksiginfo_t VAR_19;
 struct reap_kill_tracker_head VAR_20;
 struct reap_kill_tracker *VAR_21;
 int VAR_22;

 FUNC_13(&VAR_13, VAR_8);
 if (FUNC_0(VAR_14))
  return (VAR_0);
 if (VAR_16->rk_sig <= 0 || VAR_16->rk_sig > VAR_9 ||
     (VAR_16->rk_flags & ~(VAR_5 |
     VAR_6)) != 0 || (VAR_16->rk_flags &
     (VAR_5 | VAR_6)) ==
     (VAR_5 | VAR_6))
  return (VAR_1);
 FUNC_5(VAR_15);
 VAR_17 = (VAR_15->p_treeflag & VAR_4) == 0 ? VAR_15->p_reaper : VAR_15;
 FUNC_10(&VAR_19);
 VAR_19.ksi_signo = VAR_16->rk_sig;
 VAR_19.ksi_code = VAR_7;
 VAR_19.ksi_pid = VAR_14->td_proc->p_pid;
 VAR_19.ksi_uid = VAR_14->td_ucred->cr_ruid;
 VAR_22 = VAR_2;
 VAR_16->rk_killed = 0;
 VAR_16->rk_fpid = -1;
 if ((VAR_16->rk_flags & VAR_5) != 0) {
  for (VAR_18 = FUNC_1(&VAR_17->p_children); VAR_18 != ((void*)0);
      VAR_18 = FUNC_2(VAR_18, VAR_12)) {
   FUNC_11(VAR_14, VAR_18, &VAR_19, VAR_16, &VAR_22);




  }
 } else {
  FUNC_7(&VAR_20);
  FUNC_12(&VAR_20, VAR_17);
  while ((VAR_21 = FUNC_6(&VAR_20)) != ((void*)0)) {
   FUNC_3((VAR_21->parent->p_treeflag & VAR_4) != 0);
   FUNC_8(&VAR_20, VAR_21, VAR_10);
   for (VAR_18 = FUNC_1(&VAR_21->parent->p_reaplist); VAR_18 != ((void*)0);
       VAR_18 = FUNC_2(VAR_18, VAR_11)) {
    if (VAR_21->parent == VAR_17 &&
        (VAR_16->rk_flags & VAR_6) != 0 &&
        VAR_18->p_reapsubtree != VAR_16->rk_subtree)
     continue;
    if ((VAR_18->p_treeflag & VAR_4) != 0)
     FUNC_12(&VAR_20, VAR_18);
    FUNC_11(VAR_14, VAR_18, &VAR_19, VAR_16, &VAR_22);
   }
   FUNC_9(VAR_21, VAR_3);
  }
 }
 FUNC_4(VAR_15);
 return (VAR_22);
}

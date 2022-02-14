
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct session {scalar_t__ s_sid; int s_login; int * s_ttyp; int * s_ttydp; int * s_ttyvp; int s_count; struct proc* s_leader; int s_mtx; } ;
struct proc {scalar_t__ p_pid; struct session* p_session; int p_flag; } ;
struct pgrp {int pg_sigiolst; scalar_t__ pg_jobc; int pg_members; scalar_t__ pg_id; struct session* pg_session; int pg_mtx; } ;
typedef scalar_t__ pid_t ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,struct pgrp*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct pgrp*) ;
 int FUNC_5 (struct pgrp*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (struct proc*) ;
 int FUNC_7 (struct proc*) ;
 int VAR_4 ;
 int FUNC_8 (struct proc*) ;
 int FUNC_9 (int *) ;
 int VAR_5 ;
 int FUNC_10 (int ,int ,int) ;
 struct proc* VAR_6 ;
 int FUNC_11 (struct proc*,struct pgrp*) ;
 int FUNC_12 (int *,char*,int *,int) ;
 int VAR_7 ;
 int * FUNC_13 (scalar_t__) ;
 int FUNC_14 (int ,scalar_t__) ;
 int VAR_8 ;
 int FUNC_15 (int *,int) ;
 int FUNC_16 (struct session*) ;
 int FUNC_17 (int *,int ) ;

int
FUNC_18(struct proc *VAR_9, pid_t VAR_10, struct pgrp *VAR_11, struct session *VAR_12)
{

 FUNC_17(&VAR_8, VAR_5);

 FUNC_0(VAR_11 != ((void*)0), ("enterpgrp: pgrp == NULL"));
 FUNC_0(VAR_9->p_pid == VAR_10,
     ("enterpgrp: new pgrp and pid != pgid"));
 FUNC_0(FUNC_13(VAR_10) == ((void*)0),
     ("enterpgrp: pgrp with pgid exists"));
 FUNC_0(!FUNC_8(VAR_9),
     ("enterpgrp: session leader attempted setpgrp"));

 FUNC_12(&VAR_11->pg_mtx, "process group", ((void*)0), VAR_0 | VAR_1);

 if (VAR_12 != ((void*)0)) {



  FUNC_12(&VAR_12->s_mtx, "session", ((void*)0), VAR_0);
  FUNC_6(VAR_9);
  VAR_9->p_flag &= ~VAR_4;
  FUNC_7(VAR_9);
  FUNC_4(VAR_11);
  VAR_12->s_leader = VAR_9;
  VAR_12->s_sid = VAR_9->p_pid;
  FUNC_14(VAR_3, VAR_9->p_pid);
  FUNC_15(&VAR_12->s_count, 1);
  VAR_12->s_ttyvp = ((void*)0);
  VAR_12->s_ttydp = ((void*)0);
  VAR_12->s_ttyp = ((void*)0);
  FUNC_10(VAR_9->p_session->s_login, VAR_12->s_login,
       sizeof(VAR_12->s_login));
  VAR_11->pg_session = VAR_12;
  FUNC_0(VAR_9 == VAR_6,
      ("enterpgrp: mksession and p != curproc"));
 } else {
  VAR_11->pg_session = VAR_9->p_session;
  FUNC_16(VAR_11->pg_session);
  FUNC_4(VAR_11);
 }
 VAR_11->pg_id = VAR_10;
 FUNC_14(VAR_2, VAR_9->p_pid);
 FUNC_1(&VAR_11->pg_members);





 FUNC_2(FUNC_3(VAR_10), VAR_11, VAR_7);
 VAR_11->pg_jobc = 0;
 FUNC_9(&VAR_11->pg_sigiolst);
 FUNC_5(VAR_11);

 FUNC_11(VAR_9, VAR_11);

 return (0);
}

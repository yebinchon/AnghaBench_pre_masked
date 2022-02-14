
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {struct proc* td_proc; } ;
struct setpgid_args {scalar_t__ pgid; scalar_t__ pid; } ;
struct proc {scalar_t__ p_pid; scalar_t__ p_session; int p_flag; struct pgrp* p_pgrp; } ;
struct pgrp {scalar_t__ pg_id; scalar_t__ pg_session; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct pgrp*) ;
 int FUNC_2 (struct proc*) ;
 int VAR_7 ;
 scalar_t__ FUNC_3 (struct proc*) ;
 int FUNC_4 (struct proc*,scalar_t__,struct pgrp*,int *) ;
 int FUNC_5 (struct proc*,struct pgrp*) ;
 int FUNC_6 (struct pgrp*,int ) ;
 int FUNC_7 (struct proc*) ;
 struct pgrp* FUNC_8 (int,int ,int) ;
 int FUNC_9 (struct thread*,struct proc*) ;
 struct proc* FUNC_10 (scalar_t__) ;
 struct pgrp* FUNC_11 (scalar_t__) ;
 int VAR_8 ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

int
FUNC_14(struct thread *VAR_9, struct setpgid_args *VAR_10)
{
 struct proc *VAR_11 = VAR_9->td_proc;
 struct proc *VAR_12;
 struct pgrp *VAR_13;
 int VAR_14;
 struct pgrp *VAR_15;

 if (VAR_10->pgid < 0)
  return (VAR_1);

 VAR_14 = 0;

 VAR_15 = FUNC_8(sizeof(struct pgrp), VAR_4, VAR_5 | VAR_6);

 FUNC_12(&VAR_8);
 if (VAR_10->pid != 0 && VAR_10->pid != VAR_11->p_pid) {
  if ((VAR_12 = FUNC_10(VAR_10->pid)) == ((void*)0)) {
   VAR_14 = VAR_3;
   goto done;
  }
  if (!FUNC_7(VAR_12)) {
   FUNC_2(VAR_12);
   VAR_14 = VAR_3;
   goto done;
  }
  if ((VAR_14 = FUNC_9(VAR_9, VAR_12))) {
   FUNC_2(VAR_12);
   goto done;
  }
  if (VAR_12->p_pgrp == ((void*)0) ||
      VAR_12->p_session != VAR_11->p_session) {
   FUNC_2(VAR_12);
   VAR_14 = VAR_2;
   goto done;
  }
  if (VAR_12->p_flag & VAR_7) {
   FUNC_2(VAR_12);
   VAR_14 = VAR_0;
   goto done;
  }
  FUNC_2(VAR_12);
 } else
  VAR_12 = VAR_11;
 if (FUNC_3(VAR_12)) {
  VAR_14 = VAR_2;
  goto done;
 }
 if (VAR_10->pgid == 0)
  VAR_10->pgid = VAR_12->p_pid;
 if ((VAR_13 = FUNC_11(VAR_10->pgid)) == ((void*)0)) {
  if (VAR_10->pgid == VAR_12->p_pid) {
   VAR_14 = FUNC_4(VAR_12, VAR_10->pgid, VAR_15,
       ((void*)0));
   if (VAR_14 == 0)
    VAR_15 = ((void*)0);
  } else
   VAR_14 = VAR_2;
 } else {
  if (VAR_13 == VAR_12->p_pgrp) {
   FUNC_1(VAR_13);
   goto done;
  }
  if (VAR_13->pg_id != VAR_12->p_pid &&
      VAR_13->pg_session != VAR_11->p_session) {
   FUNC_1(VAR_13);
   VAR_14 = VAR_2;
   goto done;
  }
  FUNC_1(VAR_13);
  VAR_14 = FUNC_5(VAR_12, VAR_13);
 }
done:
 FUNC_13(&VAR_8);
 FUNC_0((VAR_14 == 0) || (VAR_15 != ((void*)0)),
     ("setpgid failed and newpgrp is NULL"));
 if (VAR_15 != ((void*)0))
  FUNC_6(VAR_15, VAR_4);
 return (VAR_14);
}

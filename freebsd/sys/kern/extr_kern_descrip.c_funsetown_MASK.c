
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigio {scalar_t__ sio_pgid; int sio_ucred; struct proc* sio_proc; struct pgrp* sio_pgrp; int ** sio_myref; } ;
struct proc {int p_sigiolst; } ;
struct pgrp {int pg_sigiolst; } ;


 int VAR_0 ;
 int FUNC_0 (struct pgrp*) ;
 int FUNC_1 (struct pgrp*) ;
 int FUNC_2 (struct proc*) ;
 int FUNC_3 (struct proc*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int *,struct sigio*,struct sigio*,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct sigio*,int ) ;
 int VAR_1 ;

void
FUNC_9(struct sigio **VAR_2)
{
 struct sigio *VAR_3;

 if (*VAR_2 == ((void*)0))
  return;
 FUNC_4();
 VAR_3 = *VAR_2;
 if (VAR_3 == ((void*)0)) {
  FUNC_5();
  return;
 }
 *(VAR_3->sio_myref) = ((void*)0);
 if ((VAR_3)->sio_pgid < 0) {
  struct pgrp *VAR_4 = (VAR_3)->sio_pgrp;
  FUNC_0(VAR_4);
  FUNC_6(&VAR_3->sio_pgrp->pg_sigiolst, VAR_3,
       VAR_3, VAR_1);
  FUNC_1(VAR_4);
 } else {
  struct proc *VAR_5 = (VAR_3)->sio_proc;
  FUNC_2(VAR_5);
  FUNC_6(&VAR_3->sio_proc->p_sigiolst, VAR_3,
       VAR_3, VAR_1);
  FUNC_3(VAR_5);
 }
 FUNC_5();
 FUNC_7(VAR_3->sio_ucred);
 FUNC_8(VAR_3, VAR_0);
}

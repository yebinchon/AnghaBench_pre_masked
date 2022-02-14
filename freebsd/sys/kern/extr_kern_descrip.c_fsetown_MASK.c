
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sigio {int sio_ucred; struct pgrp* sio_pgrp; struct proc* sio_proc; struct sigio** sio_myref; int sio_pgid; } ;
struct proc {scalar_t__ p_session; int p_flag; int p_sigiolst; } ;
struct pgrp {scalar_t__ pg_session; int pg_sigiolst; } ;
typedef int pid_t ;
struct TYPE_4__ {TYPE_1__* td_proc; int td_ucred; } ;
struct TYPE_3__ {scalar_t__ p_session; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct pgrp*) ;
 int FUNC_1 (struct pgrp*) ;
 int FUNC_2 (struct proc*) ;
 int FUNC_3 (struct proc*) ;
 int VAR_4 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int *,struct sigio*,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 TYPE_2__* VAR_5 ;
 int FUNC_9 (struct sigio*,int ) ;
 int FUNC_10 (struct sigio**) ;
 struct sigio* FUNC_11 (int,int ,int ) ;
 struct proc* FUNC_12 (int ) ;
 struct pgrp* FUNC_13 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;

int
FUNC_16(pid_t VAR_8, struct sigio **VAR_9)
{
 struct proc *VAR_10;
 struct pgrp *VAR_11;
 struct sigio *VAR_12;
 int VAR_13;

 if (VAR_8 == 0) {
  FUNC_10(VAR_9);
  return (0);
 }

 VAR_13 = 0;


 VAR_12 = FUNC_11(sizeof(struct sigio), VAR_2, VAR_3);
 VAR_12->sio_pgid = VAR_8;
 VAR_12->sio_ucred = FUNC_8(VAR_5->td_ucred);
 VAR_12->sio_myref = VAR_9;

 FUNC_14(&VAR_6);
 if (VAR_8 > 0) {
  VAR_10 = FUNC_12(VAR_8);
  if (VAR_10 == ((void*)0)) {
   VAR_13 = VAR_1;
   goto fail;
  }
  FUNC_3(VAR_10);
  if (VAR_10->p_session != VAR_5->td_proc->p_session) {
   VAR_13 = VAR_0;
   goto fail;
  }

  VAR_11 = ((void*)0);
 } else {
  VAR_11 = FUNC_13(-VAR_8);
  if (VAR_11 == ((void*)0)) {
   VAR_13 = VAR_1;
   goto fail;
  }
  FUNC_1(VAR_11);
  if (VAR_11->pg_session != VAR_5->td_proc->p_session) {
   VAR_13 = VAR_0;
   goto fail;
  }

  VAR_10 = ((void*)0);
 }
 FUNC_10(VAR_9);
 if (VAR_8 > 0) {
  FUNC_2(VAR_10);





  if ((VAR_10->p_flag & VAR_4) != 0) {
   FUNC_3(VAR_10);
   VAR_13 = VAR_1;
   goto fail;
  }
  FUNC_6(&VAR_10->p_sigiolst, VAR_12, VAR_7);
  VAR_12->sio_proc = VAR_10;
  FUNC_3(VAR_10);
 } else {
  FUNC_0(VAR_11);
  FUNC_6(&VAR_11->pg_sigiolst, VAR_12, VAR_7);
  VAR_12->sio_pgrp = VAR_11;
  FUNC_1(VAR_11);
 }
 FUNC_15(&VAR_6);
 FUNC_4();
 *VAR_9 = VAR_12;
 FUNC_5();
 return (0);

fail:
 FUNC_15(&VAR_6);
 FUNC_7(VAR_12->sio_ucred);
 FUNC_9(VAR_12, VAR_2);
 return (VAR_13);
}

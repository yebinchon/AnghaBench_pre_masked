
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigiolst {int dummy; } ;
struct sigio {scalar_t__ sio_pgid; int sio_ucred; struct proc* sio_proc; struct pgrp* sio_pgrp; int ** sio_myref; } ;
struct proc {int p_sigiolst; } ;
struct pgrp {int pg_sigiolst; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct pgrp*) ;
 int FUNC_2 (struct pgrp*,int ) ;
 int FUNC_3 (struct pgrp*) ;
 int FUNC_4 (struct proc*) ;
 int FUNC_5 (struct proc*,int ) ;
 int FUNC_6 (struct proc*) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 struct sigio* FUNC_9 (struct sigiolst*) ;
 int FUNC_10 (int *,struct sigio*,struct sigio*,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct sigio*,int ) ;
 int VAR_2 ;

void
FUNC_13(struct sigiolst *VAR_3)
{
 struct proc *VAR_4;
 struct pgrp *VAR_5;
 struct sigio *VAR_6;

 VAR_6 = FUNC_9(VAR_3);
 if (VAR_6 == ((void*)0))
  return;
 VAR_4 = ((void*)0);
 VAR_5 = ((void*)0);





 if (VAR_6->sio_pgid < 0) {
  VAR_5 = VAR_6->sio_pgrp;
  FUNC_2(VAR_5, VAR_0);
 } else {
  VAR_4 = VAR_6->sio_proc;
  FUNC_5(VAR_4, VAR_0);
 }

 FUNC_7();
 while ((VAR_6 = FUNC_9(VAR_3)) != ((void*)0)) {
  *(VAR_6->sio_myref) = ((void*)0);
  if (VAR_5 != ((void*)0)) {
   FUNC_0(VAR_6->sio_pgid < 0,
       ("Proc sigio in pgrp sigio list"));
   FUNC_0(VAR_6->sio_pgrp == VAR_5,
       ("Bogus pgrp in sigio list"));
   FUNC_1(VAR_5);
   FUNC_10(&VAR_5->pg_sigiolst, VAR_6, VAR_6,
       VAR_2);
   FUNC_3(VAR_5);
  } else {
   FUNC_0(VAR_6->sio_pgid > 0,
       ("Pgrp sigio in proc sigio list"));
   FUNC_0(VAR_6->sio_proc == VAR_4,
       ("Bogus proc in sigio list"));
   FUNC_4(VAR_4);
   FUNC_10(&VAR_4->p_sigiolst, VAR_6, VAR_6,
       VAR_2);
   FUNC_6(VAR_4);
  }
  FUNC_8();
  FUNC_11(VAR_6->sio_ucred);
  FUNC_12(VAR_6, VAR_1);
  FUNC_7();
 }
 FUNC_8();
}

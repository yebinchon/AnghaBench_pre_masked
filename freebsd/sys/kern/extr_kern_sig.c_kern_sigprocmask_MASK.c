
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {int td_sigmask; struct proc* td_proc; } ;
struct proc {int p_numthreads; TYPE_1__* p_sigacts; } ;
typedef int sigset_t ;
struct TYPE_2__ {int ps_mtx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct proc*) ;
 int FUNC_1 (struct proc*,int ) ;
 int FUNC_2 (struct proc*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;

 int FUNC_6 (int ) ;


 int FUNC_7 (int *,int ) ;
 int FUNC_8 (struct proc*,int ,int) ;
 int FUNC_9 (struct thread*) ;

int
FUNC_10(struct thread *VAR_6, int VAR_7, sigset_t *VAR_8, sigset_t *VAR_9,
    int VAR_10)
{
 sigset_t VAR_11, VAR_12;
 struct proc *VAR_13;
 int VAR_14;

 VAR_13 = VAR_6->td_proc;
 if ((VAR_10 & VAR_4) != 0)
  FUNC_1(VAR_13, VAR_2);
 else
  FUNC_0(VAR_13);
 FUNC_7(&VAR_13->p_sigacts->ps_mtx, (VAR_10 & VAR_5) != 0
     ? VAR_2 : VAR_1);
 if (VAR_9 != ((void*)0))
  *VAR_9 = VAR_6->td_sigmask;

 VAR_14 = 0;
 if (VAR_8 != ((void*)0)) {
  switch (VAR_7) {
  case 130:
   FUNC_6(*VAR_8);
   VAR_12 = VAR_6->td_sigmask;
   FUNC_5(VAR_6->td_sigmask, *VAR_8);
   VAR_11 = VAR_6->td_sigmask;
   FUNC_4(VAR_11, VAR_12);
   break;
  case 128:
   FUNC_4(VAR_6->td_sigmask, *VAR_8);
   FUNC_9(VAR_6);
   goto out;
  case 129:
   FUNC_6(*VAR_8);
   VAR_12 = VAR_6->td_sigmask;
   if (VAR_10 & VAR_3)
    FUNC_3(VAR_6->td_sigmask, *VAR_8);
   else
    VAR_6->td_sigmask = *VAR_8;
   VAR_11 = VAR_6->td_sigmask;
   FUNC_4(VAR_11, VAR_12);
   FUNC_9(VAR_6);
   break;
  default:
   VAR_14 = VAR_0;
   goto out;
  }
  if (VAR_13->p_numthreads != 1)
   FUNC_8(VAR_13, VAR_11, VAR_10);
 }

out:
 if (!(VAR_10 & VAR_4))
  FUNC_2(VAR_13);
 return (VAR_14);
}

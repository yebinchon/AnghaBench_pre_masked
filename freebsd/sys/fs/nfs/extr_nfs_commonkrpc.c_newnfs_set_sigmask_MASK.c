
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {int td_sigmask; struct proc* td_proc; } ;
struct proc {TYPE_1__* p_sigacts; } ;
typedef int sigset_t ;
struct TYPE_2__ {int ps_mtx; int ps_sigignore; } ;


 int FUNC_0 (struct proc*) ;
 int FUNC_1 (struct proc*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct thread* VAR_2 ;
 int FUNC_5 (struct thread*,int ,int *,int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int * VAR_3 ;
 int FUNC_8 (int *) ;

void
FUNC_9(struct thread *VAR_4, sigset_t *VAR_5)
{
 sigset_t VAR_6;
 int VAR_7;
 struct proc *VAR_8;

 FUNC_3(VAR_6);
 if (VAR_4 == ((void*)0))
  VAR_4 = VAR_2;
 VAR_8 = VAR_4->td_proc;

 FUNC_0(VAR_8);
 FUNC_6(&VAR_8->p_sigacts->ps_mtx);
 for (VAR_7 = 0 ; VAR_7 < FUNC_8(VAR_3); VAR_7++) {






  if (!FUNC_4(VAR_4->td_sigmask, VAR_3[VAR_7]) &&
      !FUNC_4(VAR_8->p_sigacts->ps_sigignore, VAR_3[VAR_7]))
   FUNC_2(VAR_6, VAR_3[VAR_7]);
 }
 FUNC_7(&VAR_8->p_sigacts->ps_mtx);
 FUNC_5(VAR_4, VAR_1, &VAR_6, VAR_5,
     VAR_0);
 FUNC_1(VAR_8);
}

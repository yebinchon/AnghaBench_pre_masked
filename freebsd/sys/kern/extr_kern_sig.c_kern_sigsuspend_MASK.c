
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct thread {int td_pflags; int td_errno; int td_oldsigmask; struct proc* td_proc; } ;
struct proc {TYPE_2__* p_sigacts; int p_mtx; TYPE_1__* p_sysent; } ;
typedef int sigset_t ;
struct TYPE_4__ {int ps_mtx; } ;
struct TYPE_3__ {int (* sv_set_syscall_retval ) (struct thread*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct proc*) ;
 int FUNC_2 (struct proc*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (struct thread*) ;
 int FUNC_4 (struct thread*,int ,int *,int *,int ) ;
 scalar_t__ FUNC_5 (TYPE_2__**,int *,int,char*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (struct thread*,int ) ;
 int FUNC_10 (int ) ;

int
FUNC_11(struct thread *VAR_8, sigset_t VAR_9)
{
 struct proc *VAR_10 = VAR_8->td_proc;
 int VAR_11, VAR_12;
 FUNC_1(VAR_10);
 FUNC_4(VAR_8, VAR_5, &VAR_9, &VAR_8->td_oldsigmask,
     VAR_4);
 VAR_8->td_pflags |= VAR_7;







 (VAR_10->p_sysent->sv_set_syscall_retval)(VAR_8, VAR_0);
 for (VAR_11 = 0; !VAR_11;) {
  while (FUNC_5(&VAR_10->p_sigacts, &VAR_10->p_mtx, VAR_3|VAR_2, "pause",
   0) == 0)
             ;
  FUNC_10(0);
  FUNC_6(&VAR_10->p_sigacts->ps_mtx);
  while ((VAR_12 = FUNC_3(VAR_8)) != 0) {
   FUNC_0(VAR_12 >= 0, ("sig %d", VAR_12));
   VAR_11 += FUNC_8(VAR_12);
  }
  FUNC_7(&VAR_10->p_sigacts->ps_mtx);
 }
 FUNC_2(VAR_10);
 VAR_8->td_errno = VAR_0;
 VAR_8->td_pflags |= VAR_6;
 return (VAR_1);
}

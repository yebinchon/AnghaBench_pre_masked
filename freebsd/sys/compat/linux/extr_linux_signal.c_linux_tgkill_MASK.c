
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct thread {TYPE_2__* td_proc; } ;
struct linux_tgkill_args {scalar_t__ pid; scalar_t__ tgid; scalar_t__ sig; } ;
struct TYPE_8__ {int ksi_signo; int ksi_uid; int ksi_pid; scalar_t__ ksi_errno; int ksi_code; } ;
typedef TYPE_3__ ksiginfo_t ;
struct TYPE_7__ {TYPE_1__* p_ucred; int p_pid; } ;
struct TYPE_6__ {int cr_ruid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (struct thread*,struct thread*,TYPE_3__*) ;
 struct thread* FUNC_3 (struct thread*,scalar_t__,scalar_t__) ;
 int FUNC_4 (scalar_t__) ;

int
FUNC_5(struct thread *VAR_3, struct linux_tgkill_args *VAR_4)
{
 struct thread *VAR_5;
 ksiginfo_t VAR_6;
 int VAR_7;

 if (VAR_4->pid <= 0 || VAR_4->tgid <=0)
  return (VAR_0);




 if (!FUNC_0(VAR_4->sig) && VAR_4->sig != 0)
  return (VAR_0);

 if (VAR_4->sig > 0)
  VAR_7 = FUNC_4(VAR_4->sig);
 else
  VAR_7 = 0;

 VAR_5 = FUNC_3(VAR_3, VAR_4->pid, VAR_4->tgid);
 if (VAR_5 == ((void*)0))
  return (VAR_1);

 FUNC_1(&VAR_6);
 VAR_6.ksi_signo = VAR_7;
 VAR_6.ksi_code = VAR_2;
 VAR_6.ksi_errno = 0;
 VAR_6.ksi_pid = VAR_3->td_proc->p_pid;
 VAR_6.ksi_uid = VAR_3->td_proc->p_ucred->cr_ruid;
 return (FUNC_2(VAR_3, VAR_5, &VAR_6));
}

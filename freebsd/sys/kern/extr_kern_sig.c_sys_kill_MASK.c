
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct thread {TYPE_2__* td_ucred; TYPE_1__* td_proc; } ;
struct proc {int dummy; } ;
struct kill_args {int pid; scalar_t__ signum; } ;
struct TYPE_9__ {int ksi_pid; int ksi_uid; int ksi_code; scalar_t__ ksi_signo; } ;
typedef TYPE_3__ ksiginfo_t ;
struct TYPE_8__ {int cr_ruid; } ;
struct TYPE_7__ {int p_pid; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct proc*) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (struct thread*) ;
 int FUNC_4 (struct proc*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (struct thread*,scalar_t__,int,int,TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (struct thread*,struct proc*,scalar_t__) ;
 struct proc* FUNC_8 (int) ;
 int FUNC_9 (struct proc*,scalar_t__,TYPE_3__*) ;

int
FUNC_10(struct thread *VAR_5, struct kill_args *VAR_6)
{
 ksiginfo_t VAR_7;
 struct proc *VAR_8;
 int VAR_9;






 if (FUNC_3(VAR_5) && VAR_6->pid != VAR_5->td_proc->p_pid)
  return (VAR_0);

 FUNC_2(VAR_6->signum);
 FUNC_0(VAR_6->pid);
 if ((u_int)VAR_6->signum > VAR_4)
  return (VAR_1);

 FUNC_6(&VAR_7);
 VAR_7.ksi_signo = VAR_6->signum;
 VAR_7.ksi_code = VAR_3;
 VAR_7.ksi_pid = VAR_5->td_proc->p_pid;
 VAR_7.ksi_uid = VAR_5->td_ucred->cr_ruid;

 if (VAR_6->pid > 0) {

  if ((VAR_8 = FUNC_8(VAR_6->pid)) == ((void*)0))
   return (VAR_2);
  FUNC_1(VAR_8);
  VAR_9 = FUNC_7(VAR_5, VAR_8, VAR_6->signum);
  if (VAR_9 == 0 && VAR_6->signum)
   FUNC_9(VAR_8, VAR_6->signum, &VAR_7);
  FUNC_4(VAR_8);
  return (VAR_9);
 }
 switch (VAR_6->pid) {
 case -1:
  return (FUNC_5(VAR_5, VAR_6->signum, 0, 1, &VAR_7));
 case 0:
  return (FUNC_5(VAR_5, VAR_6->signum, 0, 0, &VAR_7));
 default:
  return (FUNC_5(VAR_5, VAR_6->signum, -VAR_6->pid, 0, &VAR_7));
 }

}

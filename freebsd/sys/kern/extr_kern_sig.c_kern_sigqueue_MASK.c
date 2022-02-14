
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef union sigval {int dummy; } sigval ;
typedef scalar_t__ u_int ;
struct thread {TYPE_2__* td_ucred; TYPE_1__* td_proc; } ;
struct proc {int dummy; } ;
typedef scalar_t__ pid_t ;
struct TYPE_8__ {int ksi_signo; union sigval ksi_value; int ksi_uid; int ksi_pid; int ksi_code; int ksi_flags; } ;
typedef TYPE_3__ ksiginfo_t ;
struct TYPE_7__ {int cr_ruid; } ;
struct TYPE_6__ {int p_pid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct proc*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (struct thread*,struct proc*,int) ;
 struct proc* FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct proc*,int,TYPE_3__*) ;

int
FUNC_5(struct thread *VAR_5, pid_t VAR_6, int VAR_7, union sigval *VAR_8)
{
 ksiginfo_t VAR_9;
 struct proc *VAR_10;
 int VAR_11;

 if ((u_int)VAR_7 > VAR_4)
  return (VAR_0);





 if (VAR_6 <= 0)
  return (VAR_0);

 if ((VAR_10 = FUNC_3(VAR_6)) == ((void*)0))
  return (VAR_1);
 VAR_11 = FUNC_2(VAR_5, VAR_10, VAR_7);
 if (VAR_11 == 0 && VAR_7 != 0) {
  FUNC_1(&VAR_9);
  VAR_9.ksi_flags = VAR_2;
  VAR_9.ksi_signo = VAR_7;
  VAR_9.ksi_code = VAR_3;
  VAR_9.ksi_pid = VAR_5->td_proc->p_pid;
  VAR_9.ksi_uid = VAR_5->td_ucred->cr_ruid;
  VAR_9.ksi_value = *VAR_8;
  VAR_11 = FUNC_4(VAR_10, VAR_9.ksi_signo, &VAR_9);
 }
 FUNC_0(VAR_10);
 return (VAR_11);
}

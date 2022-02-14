
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {void* td_tid; TYPE_1__* td_proc; } ;
struct proc {int dummy; } ;
typedef void* pid_t ;
typedef void* lwpid_t ;
typedef void* id_t ;
typedef int clockid_t ;
struct TYPE_2__ {void* p_pid; } ;




 int VAR_0 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct proc*) ;
 int FUNC_3 (void*,int,struct proc**) ;

int
FUNC_4(struct thread *VAR_3, id_t VAR_4, int VAR_5,
    clockid_t *VAR_6)
{
 struct proc *VAR_7;
 pid_t VAR_8;
 lwpid_t VAR_9;
 int VAR_10;

 switch (VAR_5) {
 case 129:
  if (VAR_4 != 0) {
   VAR_10 = FUNC_3(VAR_4, VAR_1 | VAR_2, &VAR_7);
   if (VAR_10 != 0)
    return (VAR_10);
   FUNC_2(VAR_7);
   VAR_8 = VAR_4;
  } else {
   VAR_8 = VAR_3->td_proc->p_pid;
  }
  *VAR_6 = FUNC_0(VAR_8);
  return (0);
 case 128:
  VAR_9 = VAR_4 == 0 ? VAR_3->td_tid : VAR_4;
  *VAR_6 = FUNC_1(VAR_9);
  return (0);
 default:
  return (VAR_0);
 }
}

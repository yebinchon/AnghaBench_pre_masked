
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct sigevent {scalar_t__ sigev_notify; int sigev_notify_thread_id; } ;
struct proc {int p_pid; } ;


 int VAR_0 ;
 int FUNC_0 (struct proc*) ;
 scalar_t__ VAR_1 ;
 struct thread* FUNC_1 (int ,int ) ;

int
FUNC_2(struct proc *VAR_2 ,struct sigevent *VAR_3, struct thread **VAR_4)
{
 struct thread *VAR_5;

 if (VAR_3->sigev_notify == VAR_1) {
  VAR_5 = FUNC_1(VAR_3->sigev_notify_thread_id, VAR_2->p_pid);
  if (VAR_5 == ((void*)0))
   return (VAR_0);
  *VAR_4 = VAR_5;
 } else {
  *VAR_4 = ((void*)0);
  FUNC_0(VAR_2);
 }
 return (0);
}

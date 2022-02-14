
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {scalar_t__ td_tid; struct proc* td_proc; } ;
struct rtprio_thread_args {int function; scalar_t__ lwpid; int rtp; } ;
struct rtprio {int type; } ;
struct proc {int dummy; } ;
struct TYPE_2__ {int p_pid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct proc*) ;
 int FUNC_1 (struct proc*) ;

 int FUNC_2 (int ) ;
 int VAR_3 ;
 int VAR_4 ;

 int FUNC_3 (int ,struct rtprio*,int) ;
 int FUNC_4 (struct rtprio*,int ,int) ;
 TYPE_1__* VAR_5 ;
 int FUNC_5 (struct thread*,struct proc*) ;
 int FUNC_6 (struct thread*,struct proc*) ;
 int FUNC_7 (struct thread*,struct rtprio*) ;
 int FUNC_8 (struct thread*,int ) ;
 int FUNC_9 (struct rtprio*,struct thread*) ;
 struct thread* FUNC_10 (scalar_t__,int ) ;
 int VAR_6 ;

int
FUNC_11(struct thread *VAR_7, struct rtprio_thread_args *VAR_8)
{
 struct proc *VAR_9;
 struct rtprio VAR_10;
 struct thread *VAR_11;
 int VAR_12, VAR_13;


 if (VAR_8->function == 128)
  VAR_12 = FUNC_3(VAR_8->rtp, &VAR_10, sizeof(struct rtprio));
 else
  VAR_12 = 0;

 if (VAR_8->lwpid == 0 || VAR_8->lwpid == VAR_7->td_tid) {
  VAR_9 = VAR_7->td_proc;
  VAR_11 = VAR_7;
  FUNC_0(VAR_9);
 } else {

  VAR_11 = FUNC_10(VAR_8->lwpid, VAR_5->p_pid);
  if (VAR_11 == ((void*)0))
   return (VAR_1);
  VAR_9 = VAR_11->td_proc;
 }

 switch (VAR_8->function) {
 case 129:
  if ((VAR_13 = FUNC_6(VAR_7, VAR_9)))
   break;
  FUNC_7(VAR_11, &VAR_10);
  FUNC_1(VAR_9);
  return (FUNC_4(&VAR_10, VAR_8->rtp, sizeof(struct rtprio)));
 case 128:
  if ((VAR_13 = FUNC_5(VAR_7, VAR_9)) || (VAR_13 = VAR_12))
   break;
  if (FUNC_2(VAR_10.type) == VAR_4 ||
      (FUNC_2(VAR_10.type) == VAR_3 &&
      VAR_6 == 0)) {
   VAR_13 = FUNC_8(VAR_7, VAR_2);
   if (VAR_13)
    break;
  }
  VAR_13 = FUNC_9(&VAR_10, VAR_11);
  break;
 default:
  VAR_13 = VAR_0;
  break;
 }
 FUNC_1(VAR_9);
 return (VAR_13);
}

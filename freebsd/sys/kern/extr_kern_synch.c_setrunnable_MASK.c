
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {int td_state; int td_flags; int td_inhibitors; TYPE_1__* td_proc; } ;
struct TYPE_2__ {scalar_t__ p_state; int p_pid; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;




 int FUNC_1 (struct thread*,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (struct thread*) ;

int
FUNC_5(struct thread *VAR_5)
{

 FUNC_1(VAR_5, VAR_0);
 FUNC_0(VAR_5->td_proc->p_state != VAR_1,
     ("setrunnable: pid %d is a zombie", VAR_5->td_proc->p_pid));
 switch (VAR_5->td_state) {
 case 129:
 case 128:
  return (0);
 case 130:




  if (VAR_5->td_inhibitors != VAR_4)
   return (0);

 case 131:
  break;
 default:
  FUNC_3("state is 0x%x", VAR_5->td_state);
  FUNC_2("setrunnable(2)");
 }
 if ((VAR_5->td_flags & VAR_2) == 0) {
  if ((VAR_5->td_flags & VAR_3) == 0) {
   VAR_5->td_flags |= VAR_3;
   return (1);
  }
 } else
  FUNC_4(VAR_5);
 return (0);
}

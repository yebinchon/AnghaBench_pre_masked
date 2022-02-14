
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {TYPE_1__* td_frame; int td_proc; int * td_retval; } ;
struct TYPE_2__ {int tf_eflags; int tf_eax; int tf_err; int tf_eip; int tf_edx; } ;




 int VAR_0 ;
 int FUNC_0 (int ,int) ;

void
FUNC_1(struct thread *VAR_1, int VAR_2)
{

 switch (VAR_2) {
 case 0:
  VAR_1->td_frame->tf_eax = VAR_1->td_retval[0];
  VAR_1->td_frame->tf_edx = VAR_1->td_retval[1];
  VAR_1->td_frame->tf_eflags &= ~VAR_0;
  break;

 case 128:




  VAR_1->td_frame->tf_eip -= VAR_1->td_frame->tf_err;
  break;

 case 129:
  break;

 default:
  VAR_1->td_frame->tf_eax = FUNC_0(VAR_1->td_proc, VAR_2);
  VAR_1->td_frame->tf_eflags |= VAR_0;
  break;
 }
}

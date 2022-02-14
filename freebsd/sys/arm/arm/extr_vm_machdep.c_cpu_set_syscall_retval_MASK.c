
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct trapframe {scalar_t__ tf_r7; scalar_t__ tf_r0; scalar_t__ tf_r1; int tf_spsr; int tf_pc; } ;
struct thread {scalar_t__* td_retval; int td_proc; struct trapframe* td_frame; } ;
typedef scalar_t__ register_t ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;

void
FUNC_1(struct thread *VAR_7, int VAR_8)
{
 struct trapframe *VAR_9;
 int VAR_10;




 VAR_9 = VAR_7->td_frame;
 VAR_10 = 0;
 switch (VAR_8) {
 case 0:
  if (VAR_10) {
   VAR_9->tf_r0 = 0;
   VAR_9->tf_r1 = VAR_7->td_retval[0];
  } else {
   VAR_9->tf_r0 = VAR_7->td_retval[0];
   VAR_9->tf_r1 = VAR_7->td_retval[1];
  }
  VAR_9->tf_spsr &= ~VAR_1;
  break;
 case 128:
   VAR_9->tf_pc -= VAR_0;
  break;
 case 129:

  break;
 default:
  VAR_9->tf_r0 = FUNC_0(VAR_7->td_proc, VAR_8);
  VAR_9->tf_spsr |= VAR_1;
  break;
 }
}

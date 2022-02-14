
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {int td_dbgflags; TYPE_1__* td_frame; int td_proc; } ;
struct TYPE_2__ {int tf_rflags; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;

int
FUNC_1(struct thread *VAR_3)
{

 FUNC_0(VAR_3->td_proc, VAR_0);
 if ((VAR_3->td_frame->tf_rflags & VAR_1) == 0) {
  VAR_3->td_frame->tf_rflags |= VAR_1;
  VAR_3->td_dbgflags |= VAR_2;
 }
 return (0);
}

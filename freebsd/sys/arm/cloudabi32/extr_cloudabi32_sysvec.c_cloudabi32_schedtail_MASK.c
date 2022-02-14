
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trapframe {int tf_r1; int tf_r0; } ;
struct thread {int td_pflags; int td_tid; struct trapframe* td_frame; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_0(struct thread *VAR_2)
{
 struct trapframe *VAR_3 = VAR_2->td_frame;






 if ((VAR_2->td_pflags & VAR_1) != 0) {
  VAR_3->tf_r0 = VAR_0;
  VAR_3->tf_r1 = VAR_2->td_tid;
 }
}

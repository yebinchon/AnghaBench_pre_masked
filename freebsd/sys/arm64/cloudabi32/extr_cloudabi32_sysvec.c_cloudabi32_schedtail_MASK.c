
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trapframe {int tf_spsr; scalar_t__* tf_x; } ;
struct thread {int td_pflags; int td_tid; struct trapframe* td_frame; } ;
typedef int retval ;
typedef int register_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,void*,int) ;

__attribute__((used)) static void
FUNC_1(struct thread *VAR_3)
{
 struct trapframe *VAR_4 = VAR_3->td_frame;
 register_t VAR_5[2];


 if ((VAR_3->td_pflags & VAR_2) != 0) {
  VAR_5[0] = VAR_0;
  VAR_5[1] = VAR_3->td_tid;
  FUNC_0(VAR_5, (void *)VAR_4->tf_x[2], sizeof(VAR_5));
 }
 VAR_4->tf_spsr |= VAR_1;
}

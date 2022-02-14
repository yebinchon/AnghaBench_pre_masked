
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trapframe {scalar_t__ tf_rcx; } ;
struct thread {int td_pflags; int td_tid; struct trapframe* td_frame; } ;
typedef int retval ;
typedef int register_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,void*,int) ;

__attribute__((used)) static void
FUNC_1(struct thread *VAR_2)
{
 struct trapframe *VAR_3 = VAR_2->td_frame;
 register_t VAR_4[2];


 if ((VAR_2->td_pflags & VAR_1) != 0) {
  VAR_4[0] = VAR_0;
  VAR_4[1] = VAR_2->td_tid;
  FUNC_0(VAR_4, (void *)VAR_3->tf_rcx, sizeof(VAR_4));
 }
}

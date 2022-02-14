
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trapframe {int tf_edx; int tf_eax; } ;
struct thread {int td_tid; struct trapframe* td_frame; } ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0(struct thread *VAR_1)
{
 struct trapframe *VAR_2 = VAR_1->td_frame;


 VAR_2->tf_eax = VAR_0;
 VAR_2->tf_edx = VAR_1->td_tid;
}

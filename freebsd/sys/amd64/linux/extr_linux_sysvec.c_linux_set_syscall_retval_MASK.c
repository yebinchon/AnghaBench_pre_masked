
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trapframe {int tf_rcx; int tf_r10; int tf_rdx; } ;
struct thread {int td_pcb; int * td_retval; struct trapframe* td_frame; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct thread*,int) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct thread *VAR_2, int VAR_3)
{
 struct trapframe *VAR_4 = VAR_2->td_frame;





 VAR_2->td_retval[1] = VAR_4->tf_rdx;
 if (VAR_3 != VAR_0)
  VAR_4->tf_r10 = VAR_4->tf_rcx;

 FUNC_0(VAR_2, VAR_3);


 FUNC_1(VAR_2->td_pcb, VAR_1);
}

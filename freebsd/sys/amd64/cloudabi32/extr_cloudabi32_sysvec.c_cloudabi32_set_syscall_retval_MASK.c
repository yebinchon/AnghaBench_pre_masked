
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trapframe {int tf_rax; scalar_t__ tf_rcx; scalar_t__ tf_r10; int tf_err; int tf_rip; } ;
struct thread {int td_pcb; int td_retval; struct trapframe* td_frame; } ;


 int VAR_0 ;


 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,void*,int) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void
FUNC_3(struct thread *VAR_2, int VAR_3)
{
 struct trapframe *VAR_4 = VAR_2->td_frame;

 switch (VAR_3) {
 case 0:
  VAR_4->tf_rax = FUNC_1(VAR_2->td_retval, (void *)VAR_4->tf_rcx,
      sizeof(VAR_2->td_retval)) == 0 ? 0 : VAR_0;
  break;
 case 128:

  VAR_4->tf_rip -= VAR_4->tf_err;
  VAR_4->tf_r10 = VAR_4->tf_rcx;
  FUNC_2(VAR_2->td_pcb, VAR_1);
  break;
 case 129:
  break;
 default:

  VAR_4->tf_rax = FUNC_0(VAR_3);
  break;
 }
}

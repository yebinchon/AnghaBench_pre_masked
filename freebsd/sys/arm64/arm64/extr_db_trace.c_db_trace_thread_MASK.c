
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint64_t ;
struct unwind_state {void* pc; void* fp; void* sp; } ;
struct thread {int dummy; } ;
struct pcb {scalar_t__* pcb_x; scalar_t__ pcb_sp; } ;


 struct thread* VAR_0 ;
 int FUNC_0 (struct unwind_state*) ;
 int FUNC_1 () ;
 struct pcb* FUNC_2 (struct thread*) ;

int
FUNC_3(struct thread *VAR_1, int VAR_2)
{
 struct unwind_state VAR_3;
 struct pcb *VAR_4;

 if (VAR_1 != VAR_0) {
  VAR_4 = FUNC_2(VAR_1);

  VAR_3.sp = (uint64_t)VAR_4->pcb_sp;
  VAR_3.fp = (uint64_t)VAR_4->pcb_x[29];
  VAR_3.pc = (uint64_t)VAR_4->pcb_x[30];
  FUNC_0(&VAR_3);
 } else
  FUNC_1();
 return (0);
}

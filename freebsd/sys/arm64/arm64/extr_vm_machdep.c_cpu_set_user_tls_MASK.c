
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {TYPE_1__* td_frame; struct pcb* td_pcb; } ;
struct pcb {void* pcb_tpidr_el0; void* pcb_tpidrro_el0; } ;
typedef void* register_t ;
struct TYPE_2__ {int tf_spsr; } ;


 int VAR_0 ;
 int VAR_1 ;
 uintptr_t VAR_2 ;
 int FUNC_0 (int ,void*) ;
 struct thread* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

int
FUNC_1(struct thread *VAR_6, void *VAR_7)
{
 struct pcb *VAR_8;

 if ((uintptr_t)VAR_7 >= VAR_2)
  return (VAR_0);

 VAR_8 = VAR_6->td_pcb;
 if (VAR_6->td_frame->tf_spsr & VAR_1) {

  VAR_8->pcb_tpidrro_el0 = (register_t)VAR_7;
  VAR_8->pcb_tpidr_el0 = (register_t)VAR_7;
  if (VAR_6 == VAR_3) {
   FUNC_0(VAR_5, VAR_7);
   FUNC_0(VAR_4, VAR_7);
  }
 } else {
  VAR_8->pcb_tpidr_el0 = (register_t)VAR_7;
  if (VAR_6 == VAR_3)
   FUNC_0(VAR_4, VAR_7);
 }

 return (0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {TYPE_1__* td_frame; struct pcb* td_pcb; } ;
struct pcb {void* pcb_gsbase; void* pcb_fsbase; } ;
typedef void* register_t ;
struct TYPE_2__ {int tf_gs; int tf_fs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct pcb*,int ) ;

__attribute__((used)) static void
FUNC_1(struct thread *VAR_4, int VAR_5, register_t VAR_6)
{
 struct pcb *VAR_7;

 VAR_7 = VAR_4->td_pcb;
 FUNC_0(VAR_7, VAR_0);
 if (VAR_5 == VAR_1) {
  VAR_7->pcb_fsbase = VAR_6;
  VAR_4->td_frame->tf_fs = VAR_2;
 } else {
  VAR_7->pcb_gsbase = VAR_6;
  VAR_4->td_frame->tf_gs = VAR_3;
 }
}

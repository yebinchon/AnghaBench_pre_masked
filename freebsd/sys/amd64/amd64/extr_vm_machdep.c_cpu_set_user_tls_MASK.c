
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int64_t ;
struct thread {int td_proc; struct pcb* td_pcb; } ;
struct pcb {void* pcb_fsbase; void* pcb_gsbase; } ;
typedef void* register_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct pcb*,int ) ;

int
FUNC_2(struct thread *VAR_4, void *VAR_5)
{
 struct pcb *VAR_6;

 if ((u_int64_t)VAR_5 >= VAR_3)
  return (VAR_0);

 VAR_6 = VAR_4->td_pcb;
 FUNC_1(VAR_6, VAR_1);






 VAR_6->pcb_fsbase = (register_t)VAR_5;
 return (0);
}

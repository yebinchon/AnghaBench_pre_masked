
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trapframe {int dummy; } ;
struct thread {int dummy; } ;
struct pcb {int pcb_rsp; int pcb_rip; scalar_t__ pcb_rbp; } ;
struct amd64_frame {int dummy; } ;


 int FUNC_0 (struct thread*,struct trapframe*,struct amd64_frame*,int ,int ,int) ;
 struct trapframe* VAR_0 ;
 struct pcb* FUNC_1 (struct thread*) ;
 struct thread* VAR_1 ;

int
FUNC_2(struct thread *VAR_2, int VAR_3)
{
 struct pcb *VAR_4;
 struct trapframe *VAR_5;

 VAR_4 = FUNC_1(VAR_2);
 VAR_5 = VAR_2 == VAR_1 ? VAR_0 : ((void*)0);
 return (FUNC_0(VAR_2, VAR_5, (struct amd64_frame *)VAR_4->pcb_rbp,
     VAR_4->pcb_rip, VAR_4->pcb_rsp, VAR_3));
}

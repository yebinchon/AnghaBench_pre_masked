
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcb {int dummy; } ;
struct TYPE_2__ {struct pcb md_pcb; } ;
struct thread {TYPE_1__ td_md; } ;



struct pcb *
FUNC_0(struct thread *VAR_0)
{

 return (&VAR_0->td_md.md_pcb);
}

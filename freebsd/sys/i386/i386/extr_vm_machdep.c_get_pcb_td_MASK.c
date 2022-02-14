
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_offset_t ;
struct thread {int td_kstack_pages; scalar_t__ td_kstack; } ;
struct pcb {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ) ;

struct pcb *
FUNC_1(struct thread *VAR_3)
{
 vm_offset_t VAR_4;

 VAR_4 = VAR_3->td_kstack + VAR_3->td_kstack_pages * VAR_0 -
     FUNC_0(VAR_2, VAR_1) -
     sizeof(struct pcb);
 return ((struct pcb *)VAR_4);
}

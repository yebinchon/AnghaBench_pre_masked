
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_offset_t ;
typedef union savefpu {int dummy; } savefpu ;
struct pcb {int dummy; } ;



union savefpu *
FUNC_0(struct pcb *VAR_0)
{
 vm_offset_t VAR_1;

 VAR_1 = (vm_offset_t)(VAR_0 + 1);
 return ((union savefpu *)VAR_1);
}

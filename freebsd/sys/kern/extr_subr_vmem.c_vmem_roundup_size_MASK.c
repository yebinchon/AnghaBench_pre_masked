
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int vm_quantum_mask; } ;
typedef TYPE_1__ vmem_t ;
typedef int vmem_size_t ;



vmem_size_t
FUNC_0(vmem_t *VAR_0, vmem_size_t VAR_1)
{

 return (VAR_1 + VAR_0->vm_quantum_mask) & ~VAR_0->vm_quantum_mask;
}

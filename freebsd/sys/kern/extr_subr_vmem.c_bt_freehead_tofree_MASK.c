
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ vm_quantum_shift; scalar_t__ vm_quantum_mask; struct vmem_freelist* vm_freelist; } ;
typedef TYPE_1__ vmem_t ;
typedef scalar_t__ vmem_size_t ;
struct vmem_freelist {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__ const) ;
 int const VAR_0 ;

__attribute__((used)) static struct vmem_freelist *
FUNC_2(vmem_t *VAR_1, vmem_size_t VAR_2)
{
 const vmem_size_t VAR_3 = VAR_2 >> VAR_1->vm_quantum_shift;
 const int VAR_4 = FUNC_1(VAR_3);

 FUNC_0(VAR_2 != 0 && VAR_3 != 0);
 FUNC_0((VAR_2 & VAR_1->vm_quantum_mask) == 0);
 FUNC_0(VAR_4 >= 0);
 FUNC_0(VAR_4 < VAR_0);

 return &VAR_1->vm_freelist[VAR_4];
}

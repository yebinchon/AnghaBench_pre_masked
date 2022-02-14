
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
 int VAR_0 ;
 scalar_t__ const FUNC_1 (int) ;
 int FUNC_2 (scalar_t__ const) ;
 int VAR_1 ;

__attribute__((used)) static struct vmem_freelist *
FUNC_3(vmem_t *VAR_2, vmem_size_t VAR_3, int VAR_4)
{
 const vmem_size_t VAR_5 = VAR_3 >> VAR_2->vm_quantum_shift;
 int VAR_6 = FUNC_2(VAR_5);

 FUNC_0(VAR_3 != 0 && VAR_5 != 0);
 FUNC_0((VAR_3 & VAR_2->vm_quantum_mask) == 0);

 if (VAR_4 == VAR_0 && FUNC_1(VAR_6) != VAR_5) {
  VAR_6++;

 }
 FUNC_0(VAR_6 >= 0);
 FUNC_0(VAR_6 < VAR_1);

 return &VAR_2->vm_freelist[VAR_6];
}

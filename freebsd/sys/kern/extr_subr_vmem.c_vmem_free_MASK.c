
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int vm_qcache_max; int vm_quantum_shift; TYPE_2__* vm_qcache; } ;
typedef TYPE_1__ vmem_t ;
typedef int vmem_size_t ;
typedef scalar_t__ vmem_addr_t ;
struct TYPE_6__ {int qc_cache; } ;
typedef TYPE_2__ qcache_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,void*) ;
 int FUNC_3 (TYPE_1__*,scalar_t__,int) ;

void
FUNC_4(vmem_t *VAR_1, vmem_addr_t VAR_2, vmem_size_t VAR_3)
{
 qcache_t *VAR_4;
 FUNC_0(VAR_3 > 0);

 if (VAR_3 <= VAR_1->vm_qcache_max &&
     FUNC_1(VAR_2 >= VAR_0)) {
  VAR_4 = &VAR_1->vm_qcache[(VAR_3 - 1) >> VAR_1->vm_quantum_shift];
  FUNC_2(VAR_4->qc_cache, (void *)VAR_2);
 } else
  FUNC_3(VAR_1, VAR_2, VAR_3);
}

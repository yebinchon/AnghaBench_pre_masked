
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int vm_qcache_max; int vm_quantum_shift; TYPE_1__* vm_qcache; } ;
typedef TYPE_2__ vmem_t ;
struct TYPE_4__ {int qc_cache; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(vmem_t *VAR_0)
{
 int VAR_1;
 int VAR_2;

 VAR_1 = VAR_0->vm_qcache_max >> VAR_0->vm_quantum_shift;
 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++)
  FUNC_0(VAR_0->vm_qcache[VAR_2].qc_cache);
}

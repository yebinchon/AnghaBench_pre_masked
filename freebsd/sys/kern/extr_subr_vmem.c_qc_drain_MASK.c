
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int vm_qcache_max; int vm_quantum_shift; TYPE_1__* vm_qcache; } ;
typedef TYPE_2__ vmem_t ;
struct TYPE_4__ {int qc_cache; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void
FUNC_1(vmem_t *VAR_1)
{
 int VAR_2;
 int VAR_3;

 VAR_2 = VAR_1->vm_qcache_max >> VAR_1->vm_quantum_shift;
 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
  FUNC_0(VAR_1->vm_qcache[VAR_3].qc_cache, VAR_0);
}

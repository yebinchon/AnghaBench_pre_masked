
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int vm_quantum_mask; int vm_quantum_shift; int vm_qcache_max; char* vm_name; TYPE_2__* vm_qcache; } ;
typedef TYPE_1__ vmem_t ;
typedef int vmem_size_t ;
struct TYPE_6__ {int qc_size; int qc_cache; int qc_name; TYPE_1__* qc_vmem; } ;
typedef TYPE_2__ qcache_t ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int,char*,char*,int) ;
 int FUNC_3 (int ,int,int *,int *,int *,int *,int ,int ,TYPE_2__*,int ) ;

__attribute__((used)) static void
FUNC_4(vmem_t *VAR_4, vmem_size_t VAR_5)
{
 qcache_t *VAR_6;
 vmem_size_t VAR_7;
 int VAR_8;
 int VAR_9;

 FUNC_1((VAR_5 & VAR_4->vm_quantum_mask) == 0);
 VAR_8 = FUNC_0(VAR_5 >> VAR_4->vm_quantum_shift,
     VAR_1);
 VAR_4->vm_qcache_max = VAR_8 << VAR_4->vm_quantum_shift;
 for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
  VAR_6 = &VAR_4->vm_qcache[VAR_9];
  VAR_7 = (VAR_9 + 1) << VAR_4->vm_quantum_shift;
  FUNC_2(VAR_6->qc_name, sizeof(VAR_6->qc_name), "%s-%zu",
      VAR_4->vm_name, VAR_7);
  VAR_6->qc_vmem = VAR_4;
  VAR_6->qc_size = VAR_7;
  VAR_6->qc_cache = FUNC_3(VAR_6->qc_name, VAR_7,
      ((void*)0), ((void*)0), ((void*)0), ((void*)0), VAR_2, VAR_3, VAR_6,
      VAR_0);
  FUNC_1(VAR_6->qc_cache);
 }
}

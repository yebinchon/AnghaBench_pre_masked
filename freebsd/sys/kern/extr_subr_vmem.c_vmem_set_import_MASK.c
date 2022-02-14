
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int vm_import_quantum; void* vm_arg; int * vm_releasefn; int * vm_importfn; } ;
typedef TYPE_1__ vmem_t ;
typedef int vmem_size_t ;
typedef int vmem_release_t ;
typedef int vmem_import_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

void
FUNC_2(vmem_t *VAR_0, vmem_import_t *VAR_1,
     vmem_release_t *VAR_2, void *VAR_3, vmem_size_t VAR_4)
{

 FUNC_0(VAR_0);
 VAR_0->vm_importfn = VAR_1;
 VAR_0->vm_releasefn = VAR_2;
 VAR_0->vm_arg = VAR_3;
 VAR_0->vm_import_quantum = VAR_4;
 FUNC_1(VAR_0);
}

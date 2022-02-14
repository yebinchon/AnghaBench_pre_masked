
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int (* vm_importfn ) (int ,scalar_t__,int,int *) ;scalar_t__ vm_quantum_mask; scalar_t__ vm_limit; scalar_t__ vm_size; scalar_t__ vm_nfreetags; int vm_arg; int vm_import_quantum; } ;
typedef TYPE_1__ vmem_t ;
typedef scalar_t__ vmem_size_t ;
typedef int vmem_addr_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (int ,scalar_t__,int,int *) ;
 int FUNC_5 (TYPE_1__*,int ,scalar_t__,int ) ;

__attribute__((used)) static int
FUNC_6(vmem_t *VAR_4, vmem_size_t VAR_5, vmem_size_t VAR_6, int VAR_7)
{
 vmem_addr_t VAR_8;
 int VAR_9;

 if (VAR_4->vm_importfn == ((void*)0))
  return (VAR_2);





 if (VAR_6 != VAR_4->vm_quantum_mask + 1)
  VAR_5 = (VAR_6 * 2) + VAR_5;
 VAR_5 = FUNC_3(VAR_5, VAR_4->vm_import_quantum);

 if (VAR_4->vm_limit != 0 && VAR_4->vm_limit < VAR_4->vm_size + VAR_5)
  return (VAR_3);





 FUNC_0(VAR_4->vm_nfreetags >= VAR_0);
 VAR_4->vm_nfreetags -= VAR_0;
 FUNC_2(VAR_4);
 VAR_9 = (VAR_4->vm_importfn)(VAR_4->vm_arg, VAR_5, VAR_7, &VAR_8);
 FUNC_1(VAR_4);
 VAR_4->vm_nfreetags += VAR_0;
 if (VAR_9)
  return (VAR_3);

 FUNC_5(VAR_4, VAR_8, VAR_5, VAR_1);

 return 0;
}

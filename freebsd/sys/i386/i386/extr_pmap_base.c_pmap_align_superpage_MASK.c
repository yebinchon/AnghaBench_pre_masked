
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_size_t ;
typedef int vm_ooffset_t ;
typedef int vm_offset_t ;
typedef int vm_object_t ;
struct TYPE_2__ {void (* pm_align_superpage ) (int ,int ,int *,int ) ;} ;


 TYPE_1__* VAR_0 ;
 void FUNC_0 (int ,int ,int *,int ) ;

void
FUNC_1(vm_object_t VAR_1, vm_ooffset_t VAR_2,
    vm_offset_t *VAR_3, vm_size_t VAR_4)
{

 return (VAR_0->pm_align_superpage(VAR_1, VAR_2,
     VAR_3, VAR_4));
}

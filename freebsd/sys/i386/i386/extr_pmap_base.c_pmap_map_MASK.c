
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_paddr_t ;
typedef int vm_offset_t ;
struct TYPE_2__ {int (* pm_map ) (int *,int ,int ,int) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int *,int ,int ,int) ;

vm_offset_t
FUNC_1(vm_offset_t *VAR_1, vm_paddr_t VAR_2, vm_paddr_t VAR_3, int VAR_4)
{

 return (VAR_0->pm_map(VAR_1, VAR_2, VAR_3, VAR_4));
}

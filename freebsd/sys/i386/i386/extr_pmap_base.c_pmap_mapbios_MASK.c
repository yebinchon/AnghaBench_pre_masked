
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_size_t ;
typedef int vm_paddr_t ;
struct TYPE_2__ {void* (* pm_mapdev_attr ) (int ,int ,int ,int ) ;} ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 void* FUNC_0 (int ,int ,int ,int ) ;

void *
FUNC_1(vm_paddr_t VAR_2, vm_size_t VAR_3)
{

 return (VAR_1->pm_mapdev_attr(VAR_2, VAR_3, VAR_0, 0));
}

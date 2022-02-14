
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_size_t ;
typedef int vm_paddr_t ;
struct TYPE_2__ {void* (* pm_mapdev_attr ) (int ,int ,int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 void* FUNC_0 (int ,int ,int ,int ) ;

void *
FUNC_1(vm_paddr_t VAR_3, vm_size_t VAR_4)
{

 return (VAR_2->pm_mapdev_attr(VAR_3, VAR_4, VAR_1,
     VAR_0));
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_page_t ;
typedef int vm_memattr_t ;
struct TYPE_2__ {int (* pm_page_set_memattr ) (int ,int ) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int ,int ) ;

void
FUNC_1(vm_page_t VAR_1, vm_memattr_t VAR_2)
{

 VAR_0->pm_page_set_memattr(VAR_1, VAR_2);
}

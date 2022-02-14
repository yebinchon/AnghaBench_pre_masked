
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_page_t ;
typedef int vm_offset_t ;
struct TYPE_2__ {int (* pm_quick_enter_page ) (int ) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int ) ;

vm_offset_t
FUNC_1(vm_page_t VAR_1)
{

 return (VAR_0->pm_quick_enter_page(VAR_1));
}

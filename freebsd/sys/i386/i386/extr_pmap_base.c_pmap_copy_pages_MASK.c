
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_page_t ;
typedef int vm_offset_t ;
struct TYPE_2__ {int (* pm_copy_pages ) (int *,int ,int *,int ,int) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int *,int ,int *,int ,int) ;

void
FUNC_1(vm_page_t VAR_1[], vm_offset_t VAR_2, vm_page_t VAR_3[],
    vm_offset_t VAR_4, int VAR_5)
{

 VAR_0->pm_copy_pages(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
}

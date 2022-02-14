
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_prot_t ;
typedef int vm_page_t ;
typedef int vm_offset_t ;
typedef int pmap_t ;
struct TYPE_2__ {int (* pm_extract_and_hold ) (int ,int ,int ) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;

vm_page_t
FUNC_1(pmap_t VAR_1, vm_offset_t VAR_2, vm_prot_t VAR_3)
{

 return (VAR_0->pm_extract_and_hold(VAR_1, VAR_2, VAR_3));
}

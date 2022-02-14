
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_prot_t ;
typedef int vm_page_t ;
typedef int vm_offset_t ;
typedef int u_int ;
typedef int pmap_t ;
typedef int int8_t ;
struct TYPE_2__ {int (* pm_enter ) (int ,int ,int ,int ,int ,int ) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int ) ;

int
FUNC_1(pmap_t VAR_1, vm_offset_t VAR_2, vm_page_t VAR_3, vm_prot_t VAR_4,
    u_int VAR_5, int8_t VAR_6)
{

 return (VAR_0->pm_enter(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6));
}

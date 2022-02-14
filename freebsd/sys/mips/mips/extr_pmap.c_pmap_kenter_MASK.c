
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_paddr_t ;
typedef int vm_offset_t ;
typedef int u_long ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,scalar_t__,int ) ;

void
FUNC_3(vm_offset_t VAR_1, vm_paddr_t VAR_2)
{

 FUNC_0(FUNC_1(VAR_2),
  ("pmap_kenter: memory at 0x%lx is not cacheable", (u_long)VAR_2));

 FUNC_2(VAR_1, VAR_2, VAR_0);
}

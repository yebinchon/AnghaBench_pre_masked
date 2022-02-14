
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_paddr_t ;
typedef scalar_t__ vm_offset_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int ) ;

void *
FUNC_2(vm_paddr_t VAR_2, int VAR_3)
{
 vm_offset_t VAR_4;

 VAR_4 = (vm_offset_t)VAR_1 + (VAR_3 * VAR_0);
 FUNC_1(VAR_4, VAR_2);
 FUNC_0(VAR_4);
 return ((void *)VAR_1);
}

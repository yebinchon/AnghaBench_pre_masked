
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static __inline vm_offset_t
FUNC_1(vm_offset_t VAR_2)
{

 VAR_2 &= ~(VAR_0 * VAR_1 - 1);
 return ((vm_offset_t)FUNC_0(VAR_2));
}

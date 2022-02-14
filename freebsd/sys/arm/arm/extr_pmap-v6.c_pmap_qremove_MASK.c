
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_offset_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;

void
FUNC_2(vm_offset_t VAR_1, int VAR_2)
{
 vm_offset_t VAR_3;

 VAR_3 = VAR_1;
 while (VAR_2-- > 0) {
  FUNC_0(VAR_3);
  VAR_3 += VAR_0;
 }
 FUNC_1(VAR_1, VAR_3 - VAR_1);
}

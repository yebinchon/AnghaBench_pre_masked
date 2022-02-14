
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_size_t ;
typedef int vm_offset_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;

void
FUNC_4(vm_offset_t VAR_2, vm_size_t VAR_3)
{
 vm_offset_t VAR_4 = FUNC_2(VAR_2 + VAR_3);

 VAR_2 = FUNC_3(VAR_2);

 while ((VAR_4 - VAR_2) >= (32 * 32)) {
  FUNC_1(VAR_2, VAR_1|VAR_0);
  VAR_2 += (32 * 32);
 }

 while (VAR_2 < VAR_4) {
  FUNC_0(VAR_2, VAR_1|VAR_0);
  VAR_2 += 32;
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_paddr_t ;
typedef int vm_offset_t ;
typedef int pd_entry_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int* FUNC_3 (int*,int) ;
 int* FUNC_4 (int) ;

vm_paddr_t
FUNC_5(vm_offset_t VAR_7)
{
 pd_entry_t VAR_8;
 vm_paddr_t VAR_9;

 if (VAR_7 >= VAR_1 && VAR_7 < VAR_0) {
  VAR_9 = FUNC_0(VAR_7);
 } else if (FUNC_1(VAR_7)) {
  VAR_9 = FUNC_2(VAR_7);
 } else {
  VAR_8 = *FUNC_4(VAR_7);
  if (VAR_8 & VAR_5) {
   VAR_9 = (VAR_8 & VAR_6) | (VAR_7 & VAR_3);
  } else {
   VAR_9 = *FUNC_3(&VAR_8, VAR_7);
   VAR_9 = (VAR_9 & VAR_4) | (VAR_7 & VAR_2);
  }
 }
 return (VAR_9);
}

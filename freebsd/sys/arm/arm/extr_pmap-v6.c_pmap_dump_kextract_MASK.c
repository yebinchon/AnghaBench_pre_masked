
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_paddr_t ;
typedef int vm_offset_t ;
typedef int pt2_entry_t ;
typedef int pt1_entry_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int) ;

vm_paddr_t
FUNC_9(vm_offset_t VAR_2, pt2_entry_t *VAR_3)
{
 vm_paddr_t VAR_4;
 pt1_entry_t VAR_5;
 pt2_entry_t VAR_6;

 VAR_5 = FUNC_5(FUNC_1(VAR_2));
 if (FUNC_4(VAR_5)) {
  VAR_4 = FUNC_6(VAR_5) | (VAR_2 & VAR_0);
  VAR_6 = VAR_4 | FUNC_0(VAR_5) | VAR_1;
 } else if (FUNC_3(VAR_5)) {
  VAR_6 = FUNC_7(FUNC_2(VAR_2));
  VAR_4 = FUNC_8(VAR_6);
 } else {
  VAR_6 = 0;
  VAR_4 = 0;
 }
 if (VAR_3 != ((void*)0))
  *VAR_3 = VAR_6;
 return (VAR_4);
}

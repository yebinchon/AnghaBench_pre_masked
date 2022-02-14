
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_page_t ;
typedef int vm_paddr_t ;
typedef int vm_offset_t ;
typedef int pt_entry_t ;
typedef int pd_entry_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 int* FUNC_7 (int ) ;
 int FUNC_8 (int*) ;
 int VAR_5 ;

__attribute__((used)) static pt_entry_t *
FUNC_9(vm_offset_t VAR_6, bool *VAR_7)
{
 pd_entry_t *VAR_8;
 pt_entry_t *VAR_9;
 vm_page_t VAR_10;
 vm_paddr_t VAR_11;

 FUNC_2(VAR_5);

 VAR_8 = FUNC_7(VAR_6);
 if (VAR_7 != ((void*)0)) {
  *VAR_7 = 1;
  FUNC_8(VAR_8);
 }
 if (*VAR_8 == 0) {
  VAR_10 = FUNC_5();
  if (*VAR_8 != 0) {
   FUNC_6(VAR_10);
   FUNC_0((*VAR_8 & VAR_1) == 0);
   VAR_11 = *VAR_8 & ~(VAR_0 | VAR_4);
  } else {
   VAR_11 = FUNC_3(VAR_10);
   *VAR_8 = VAR_11 | VAR_2 | VAR_3;
   if (VAR_7 != ((void*)0))
    *VAR_7 = 0;
  }
 } else {
  FUNC_0((*VAR_8 & VAR_1) == 0);
  VAR_11 = *VAR_8 & ~(VAR_0 | VAR_4);
 }

 VAR_9 = (pt_entry_t *)FUNC_1(VAR_11);
 VAR_9 += FUNC_4(VAR_6);

 return (VAR_9);
}

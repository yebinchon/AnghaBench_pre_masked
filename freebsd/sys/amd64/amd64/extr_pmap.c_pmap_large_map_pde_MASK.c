
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * vm_page_t ;
typedef int vm_paddr_t ;
typedef int vm_offset_t ;
typedef int pdp_entry_t ;
typedef int pd_entry_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_3 () ;
 int* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static pd_entry_t *
FUNC_6(vm_offset_t VAR_6)
{
 pdp_entry_t *VAR_7;
 vm_page_t VAR_8;
 vm_paddr_t VAR_9;

retry:
 VAR_7 = FUNC_4(VAR_6);
 if (*VAR_7 == 0) {
  VAR_8 = FUNC_3();
  if (VAR_8 == ((void*)0))
   goto retry;
  VAR_9 = FUNC_2(VAR_8);
  *VAR_7 = VAR_9 | VAR_1 | VAR_3 | VAR_4 | VAR_5;
 } else {
  FUNC_0((*VAR_7 & VAR_2) == 0);
  VAR_9 = *VAR_7 & VAR_0;
 }
 return ((pd_entry_t *)FUNC_1(VAR_9) + FUNC_5(VAR_6));
}

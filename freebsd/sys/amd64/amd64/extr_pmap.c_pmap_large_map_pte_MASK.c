
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int * vm_page_t ;
typedef int vm_paddr_t ;
typedef int vm_offset_t ;
typedef int pt_entry_t ;
typedef int pd_entry_t ;
struct TYPE_2__ {int ref_count; } ;


 int FUNC_0 (uintptr_t) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int) ;
 TYPE_1__* FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_5 () ;
 int* FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static pt_entry_t *
FUNC_8(vm_offset_t VAR_6)
{
 pd_entry_t *VAR_7;
 vm_page_t VAR_8;
 vm_paddr_t VAR_9;

retry:
 VAR_7 = FUNC_6(VAR_6);
 if (*VAR_7 == 0) {
  VAR_8 = FUNC_5();
  if (VAR_8 == ((void*)0))
   goto retry;
  VAR_9 = FUNC_4(VAR_8);
  *VAR_7 = VAR_9 | VAR_1 | VAR_3 | VAR_4 | VAR_5;
  FUNC_3(FUNC_0((uintptr_t)VAR_7))->ref_count++;
 } else {
  FUNC_1((*VAR_7 & VAR_2) == 0);
  VAR_9 = *VAR_7 & VAR_0;
 }
 return ((pt_entry_t *)FUNC_2(VAR_9) + FUNC_7(VAR_6));
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_page_t ;
typedef scalar_t__ vm_paddr_t ;
typedef int vm_offset_t ;
typedef scalar_t__ u_int ;
typedef int pt2_entry_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int * FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int ,int) ;
 scalar_t__ FUNC_9 (int ) ;

void
FUNC_10(vm_offset_t VAR_2, vm_page_t *VAR_3, int VAR_4)
{
 u_int VAR_5;
 pt2_entry_t *VAR_6, *VAR_7, VAR_8;
 vm_page_t VAR_9;
 vm_paddr_t VAR_10;

 VAR_5 = 0;
 VAR_7 = FUNC_3(VAR_2);
 VAR_6 = VAR_7 + VAR_4;
 while (VAR_7 < VAR_6) {
  VAR_9 = *VAR_3++;
  VAR_10 = FUNC_1(VAR_9);
  VAR_8 = FUNC_5(VAR_7);
  if ((FUNC_6(VAR_8) != VAR_10) ||
      (FUNC_4(VAR_8) != FUNC_9(VAR_9))) {
   VAR_5++;
   FUNC_7(VAR_7, FUNC_0(VAR_10, VAR_1,
       FUNC_9(VAR_9)));
  }
  VAR_7++;
 }
 if (FUNC_2(VAR_5))
  FUNC_8(VAR_2, VAR_4 * VAR_0);
}

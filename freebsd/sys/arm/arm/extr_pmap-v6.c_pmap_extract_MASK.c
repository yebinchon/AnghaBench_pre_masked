
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_paddr_t ;
typedef int vm_offset_t ;
typedef int pt2_entry_t ;
typedef int pt1_entry_t ;
typedef int pmap_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int) ;
 int * FUNC_3 (int ,int) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ) ;

vm_paddr_t
FUNC_11(pmap_t VAR_2, vm_offset_t VAR_3)
{
 vm_paddr_t VAR_4;
 pt1_entry_t VAR_5;
 pt2_entry_t *VAR_6;

 FUNC_0(VAR_2);
 VAR_5 = FUNC_7(FUNC_2(VAR_2, VAR_3));
 if (FUNC_6(VAR_5))
  VAR_4 = FUNC_8(VAR_5) | (VAR_3 & VAR_0);
 else if (FUNC_5(VAR_5)) {
  VAR_6 = FUNC_3(VAR_2, VAR_3);
  VAR_4 = FUNC_10(FUNC_9(VAR_6)) | (VAR_3 & VAR_1);
  FUNC_4(VAR_6);
 } else
  VAR_4 = 0;
 FUNC_1(VAR_2);
 return (VAR_4);
}

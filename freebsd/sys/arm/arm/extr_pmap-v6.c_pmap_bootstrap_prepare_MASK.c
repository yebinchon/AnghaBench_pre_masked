
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_paddr_t ;
typedef scalar_t__ vm_offset_t ;
typedef int uint32_t ;
typedef scalar_t__ u_int ;
typedef void pt2_entry_t ;
typedef int pt1_entry_t ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 void* VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (scalar_t__,int ,int ) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_7 (void*,scalar_t__) ;
 int FUNC_8 (scalar_t__) ;
 int * VAR_16 ;
 void* VAR_17 ;
 void* FUNC_9 (scalar_t__) ;
 int * FUNC_10 (scalar_t__) ;
 int VAR_18 ;
 void* FUNC_11 (scalar_t__,int ) ;
 scalar_t__ VAR_19 ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (scalar_t__) ;
 int FUNC_15 (scalar_t__) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (int *,scalar_t__) ;
 int FUNC_18 (void*) ;
 scalar_t__ FUNC_19 (int ) ;
 int FUNC_20 (int ,int ) ;
 int FUNC_21 (void*,scalar_t__) ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 int FUNC_22 (scalar_t__,scalar_t__) ;

void
FUNC_23(vm_paddr_t VAR_22)
{
 vm_paddr_t VAR_23, VAR_24, VAR_25, VAR_26;
 vm_offset_t VAR_27;
 pt1_entry_t *VAR_28;
 pt2_entry_t *VAR_29;
 u_int VAR_30;
 uint32_t VAR_31;
 VAR_18 = FUNC_15(VAR_22);







 VAR_15 = FUNC_12(VAR_5);
 VAR_16 = (pt1_entry_t *)FUNC_1(VAR_15);
 FUNC_7((void*)VAR_16, VAR_1);
 FUNC_17(VAR_16, VAR_1);


 VAR_24 = FUNC_12(VAR_6);
 VAR_17 = (pt2_entry_t *)FUNC_1(VAR_24);
 FUNC_7(VAR_17, VAR_3);
 FUNC_21(VAR_17, VAR_3);


 VAR_23 = FUNC_12(VAR_4);
 VAR_27 = FUNC_1(VAR_23);
 VAR_26 = VAR_4 * VAR_8;
 FUNC_7((void*)VAR_27, VAR_26);
 FUNC_21((pt2_entry_t *)VAR_27, VAR_26);
 FUNC_22(VAR_24, FUNC_12(0));
 VAR_29 = FUNC_9(VAR_0);
 for (VAR_25 = VAR_23; VAR_25 < VAR_23 + VAR_26; VAR_25 += VAR_14)
  FUNC_13(VAR_29++, FUNC_5(VAR_25));

 VAR_28 = FUNC_10(VAR_0);
 for (VAR_25 = VAR_23; VAR_25 < VAR_23 + VAR_26; VAR_25 += VAR_2)
  FUNC_16(VAR_28++, FUNC_4(VAR_25));


 VAR_31 = FUNC_0(VAR_13);
 VAR_28 = FUNC_10(VAR_0);
 for (VAR_25 = FUNC_2(VAR_0); VAR_25 < VAR_22; VAR_25 += VAR_12)
  FUNC_16(VAR_28++, FUNC_3(VAR_25, VAR_11, VAR_31));
 VAR_9 = (pt2_entry_t *)(VAR_0 - VAR_10);
 VAR_28 = FUNC_10((vm_offset_t)VAR_9);
 for (VAR_25 = VAR_24, VAR_30 = 0; VAR_30 < VAR_7; VAR_30++, VAR_25 += VAR_2) {
  FUNC_16(VAR_28++, FUNC_4(VAR_25));
 }





 VAR_29 = FUNC_9((vm_offset_t)VAR_9);
 for (VAR_25 = VAR_24, VAR_30 = 0; VAR_30 < VAR_6; VAR_30++, VAR_25 += VAR_14) {
  FUNC_13(VAR_29++, FUNC_6(VAR_25));
 }
 VAR_29 = FUNC_9((vm_offset_t)VAR_16);
 VAR_27 = FUNC_1(FUNC_19(FUNC_18(VAR_29)));

 VAR_29 = FUNC_11(VAR_27, FUNC_14((vm_offset_t)VAR_16));


 for (VAR_25 = VAR_15, VAR_30 = 0; VAR_30 < VAR_5; VAR_30++, VAR_25 += VAR_14)
  FUNC_20(VAR_29++, FUNC_5(VAR_25));


 for (VAR_25 = VAR_24, VAR_30 = 0; VAR_30 < VAR_6; VAR_30++, VAR_25 += VAR_14)
  FUNC_20(VAR_29++, FUNC_5(VAR_25));


 VAR_19 = VAR_15 | VAR_20;
 FUNC_8(VAR_19);




 VAR_21 = (vm_offset_t)VAR_17 + VAR_6 * VAR_8;
}

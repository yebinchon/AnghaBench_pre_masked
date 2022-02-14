
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_paddr_t ;
typedef int vm_offset_t ;
typedef int pt2_entry_t ;
typedef int pt1_entry_t ;
typedef int pmap_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int* FUNC_2 (int ,int) ;
 int* FUNC_3 (int ,int) ;
 int FUNC_4 (int*) ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (int*) ;
 int FUNC_10 (int) ;
 scalar_t__ FUNC_11 (int) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int*) ;
 int FUNC_14 (int) ;
 int FUNC_15 (int) ;

int
FUNC_16(pmap_t VAR_9, vm_offset_t VAR_10, vm_paddr_t *VAR_11)
{
 pt1_entry_t *VAR_12, VAR_13;
 pt2_entry_t *VAR_14, VAR_15;
 vm_paddr_t VAR_16;
 bool VAR_17;
 int VAR_18;

 FUNC_0(VAR_9);
 VAR_12 = FUNC_2(VAR_9, VAR_10);
 VAR_13 = FUNC_9(VAR_12);
 if (FUNC_8(VAR_13)) {
  VAR_16 = FUNC_15(FUNC_10(VAR_13) | (VAR_10 & VAR_7));
  VAR_17 = FUNC_7(VAR_13);
  VAR_18 = VAR_5 | VAR_0;
  if (FUNC_5(VAR_13))
   VAR_18 |= VAR_1 | VAR_2;
  if (VAR_13 & VAR_6)
   VAR_18 |= VAR_3 | VAR_4;
 } else if (FUNC_6(VAR_13)) {
  VAR_14 = FUNC_3(VAR_9, VAR_10);
  VAR_15 = FUNC_13(VAR_14);
  FUNC_4(VAR_14);
  VAR_16 = FUNC_14(VAR_15);
  VAR_17 = FUNC_12(VAR_15);
  VAR_18 = VAR_0;
  if (FUNC_11(VAR_15))
   VAR_18 |= VAR_1 | VAR_2;
  if (VAR_15 & VAR_8)
   VAR_18 |= VAR_3 | VAR_4;
 } else {
  VAR_17 = 0;
  VAR_18 = 0;
 }
 if ((VAR_18 & (VAR_2 | VAR_4)) !=
     (VAR_2 | VAR_4) && VAR_17) {
  *VAR_11 = VAR_16;
 }
 FUNC_1(VAR_9);
 return (VAR_18);
}

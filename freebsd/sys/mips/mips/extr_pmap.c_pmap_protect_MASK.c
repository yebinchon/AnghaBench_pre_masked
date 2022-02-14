
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_prot_t ;
typedef int vm_page_t ;
typedef int vm_paddr_t ;
typedef int vm_offset_t ;
typedef int pt_entry_t ;
typedef int pmap_t ;
typedef scalar_t__ pd_entry_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (int ,int,int) ;
 int * FUNC_5 (scalar_t__*,int) ;
 scalar_t__* FUNC_6 (scalar_t__*,int) ;
 int FUNC_7 (int ,int,int) ;
 scalar_t__* FUNC_8 (int ,int) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,int ) ;
 scalar_t__ FUNC_11 (int *,int ) ;
 int FUNC_12 (int ) ;

void
FUNC_13(pmap_t VAR_12, vm_offset_t VAR_13, vm_offset_t VAR_14, vm_prot_t VAR_15)
{
 pt_entry_t VAR_16, *VAR_17;
 pd_entry_t *VAR_18, *VAR_19;
 vm_offset_t VAR_20, VAR_21;
 vm_paddr_t VAR_22;
 vm_page_t VAR_23;

 if ((VAR_15 & VAR_10) == VAR_9) {
  FUNC_7(VAR_12, VAR_13, VAR_14);
  return;
 }
 if (VAR_15 & VAR_11)
  return;

 FUNC_1(VAR_12);
 for (; VAR_13 < VAR_14; VAR_13 = VAR_21) {
  VAR_19 = FUNC_8(VAR_12, VAR_13);
  VAR_21 = (VAR_13 + VAR_0) & ~VAR_3;
  if (VAR_21 < VAR_13)
   VAR_21 = VAR_14;

  VAR_18 = FUNC_6(VAR_19, VAR_13);
  if (*VAR_18 == ((void*)0))
   continue;






  if (VAR_21 > VAR_14)
   VAR_21 = VAR_14;

  VAR_20 = VAR_21;
  for (VAR_17 = FUNC_5(VAR_18, VAR_13); VAR_13 != VAR_21; VAR_17++,
      VAR_13 += VAR_2) {
   VAR_16 = *VAR_17;
   if (!FUNC_11(&VAR_16, VAR_7) || FUNC_11(&VAR_16,
       VAR_6)) {
    if (VAR_20 != VAR_21) {
     FUNC_4(VAR_12, VAR_20, VAR_13);
     VAR_20 = VAR_21;
    }
    continue;
   }
   FUNC_10(&VAR_16, VAR_6);
   if (FUNC_11(&VAR_16, VAR_4)) {
    FUNC_9(&VAR_16, VAR_4);
    if (FUNC_11(&VAR_16, VAR_5)) {
     VAR_22 = FUNC_3(VAR_16);
     VAR_23 = FUNC_0(VAR_22);
     FUNC_12(VAR_23);
    }
    if (VAR_20 == VAR_21)
     VAR_20 = VAR_13;
   } else {





    if (VAR_20 != VAR_21) {
     FUNC_4(VAR_12, VAR_20, VAR_13);
     VAR_20 = VAR_21;
    }
   }
   *VAR_17 = VAR_16;
  }
  if (VAR_20 != VAR_21)
   FUNC_4(VAR_12, VAR_20, VAR_13);
 }
 FUNC_2(VAR_12);
}

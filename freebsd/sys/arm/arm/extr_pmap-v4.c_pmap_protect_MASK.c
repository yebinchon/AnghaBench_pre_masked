
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_prot_t ;
typedef int vm_offset_t ;
typedef int u_int ;
struct vm_page {int oflags; } ;
struct l2_bucket {int* l2b_kva; } ;
typedef int pt_entry_t ;
typedef int pmap_t ;


 int FUNC_0 (int ,char*,int ,int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 struct vm_page* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int*) ;
 int VAR_4 ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int ,int,int,int ,int ) ;
 struct l2_bucket* FUNC_11 (int ,int) ;
 int FUNC_12 (struct vm_page*,int ,int,int,int ) ;
 int FUNC_13 (int ,int,int) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ,int) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ,int) ;
 int VAR_8 ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (struct vm_page*) ;

void
FUNC_21(pmap_t VAR_9, vm_offset_t VAR_10, vm_offset_t VAR_11, vm_prot_t VAR_12)
{
 struct l2_bucket *VAR_13;
 pt_entry_t *VAR_14, VAR_15;
 vm_offset_t VAR_16;
 u_int VAR_17;
 int VAR_18;

 FUNC_0(VAR_1, "pmap_protect: pmap %p sva 0x%08x eva 0x%08x prot %x",
     VAR_9, VAR_10, VAR_11, VAR_12);

 if ((VAR_12 & VAR_5) == 0) {
  FUNC_13(VAR_9, VAR_10, VAR_11);
  return;
 }

 if (VAR_12 & VAR_6) {




  return;
 }

 FUNC_18(&VAR_8);
 FUNC_3(VAR_9);





 FUNC_10(VAR_9, VAR_10, VAR_11 - VAR_10, VAR_0, VAR_0);

 VAR_18 = ((VAR_11 - VAR_10) >= (VAR_3 * 4)) ? 0 : -1;
 VAR_17 = 0;

 while (VAR_10 < VAR_11) {
  VAR_16 = FUNC_1(VAR_10);
  if (VAR_16 > VAR_11)
   VAR_16 = VAR_11;

  VAR_13 = FUNC_11(VAR_9, VAR_10);
  if (VAR_13 == ((void*)0)) {
   VAR_10 = VAR_16;
   continue;
  }

  VAR_14 = &VAR_13->l2b_kva[FUNC_8(VAR_10)];

  while (VAR_10 < VAR_16) {
   if ((VAR_15 = *VAR_14) != 0 && (VAR_15 & VAR_2) != 0) {
    struct vm_page *VAR_19;
    u_int VAR_20;

    VAR_19 = FUNC_2(FUNC_9(VAR_15));
    VAR_15 &= ~VAR_2;
    *VAR_14 = VAR_15;
    FUNC_5(VAR_14);

    if (!(VAR_19->oflags & VAR_7)) {
     VAR_20 = FUNC_12(VAR_19, VAR_9, VAR_10,
         VAR_4, 0);
     if (VAR_20 & VAR_4)
      FUNC_20(VAR_19);
    } else
     VAR_20 = 0;

    if (VAR_18 >= 0) {
     VAR_18++;
     VAR_17 |= VAR_20;
    } else
    if (FUNC_6(VAR_20))
     FUNC_17(VAR_9, VAR_10);
    else
    if (FUNC_7(VAR_20))
     FUNC_15(VAR_9, VAR_10);
   }

   VAR_10 += VAR_3;
   VAR_14++;
  }
 }


 if (VAR_18) {
  if (FUNC_6(VAR_17))
   FUNC_16(VAR_9);
  else
  if (FUNC_7(VAR_17))
   FUNC_14(VAR_9);
 }
 FUNC_19(&VAR_8);

  FUNC_4(VAR_9);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_page_prot; int anon_vma; } ;
struct page {int dummy; } ;
struct mm_struct {int page_table_lock; } ;
typedef int pmd_t ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct page*) ;
 struct page* FUNC_4 (int ,struct vm_area_struct*,unsigned long,int ,int ) ;
 int FUNC_5 (struct page*,struct page*,unsigned long,struct vm_area_struct*,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct mm_struct*,struct vm_area_struct*,unsigned long,int *,int ,struct page*,unsigned long) ;
 int FUNC_8 (struct page*) ;
 int FUNC_9 (int ,struct vm_area_struct*) ;
 int FUNC_10 (struct page*,struct mm_struct*,int ) ;
 int FUNC_11 (struct page*) ;
 int FUNC_12 (struct page*,int ) ;
 int FUNC_13 () ;
 int FUNC_14 (struct page*,struct vm_area_struct*,unsigned long) ;
 int FUNC_15 (struct page*) ;
 int FUNC_16 (struct page*) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ) ;
 struct page* FUNC_20 (int ) ;
 int FUNC_21 (int ,int ) ;
 int FUNC_22 (struct vm_area_struct*,unsigned long,int *) ;
 scalar_t__ FUNC_23 (struct vm_area_struct*,unsigned long,int *,int ,int) ;
 int FUNC_24 (struct page*) ;
 int FUNC_25 (struct mm_struct*,unsigned long,int *,int ) ;
 int FUNC_26 (int *) ;
 int FUNC_27 (int *) ;
 int FUNC_28 (struct page*) ;
 int FUNC_29 () ;
 int FUNC_30 (struct vm_area_struct*) ;
 scalar_t__ FUNC_31 (struct vm_area_struct*) ;
 scalar_t__ FUNC_32 (int) ;
 int FUNC_33 (struct vm_area_struct*,unsigned long,int ) ;

int FUNC_34(struct mm_struct *VAR_7, struct vm_area_struct *VAR_8,
   unsigned long VAR_9, pmd_t *VAR_10, pmd_t VAR_11)
{
 int VAR_12 = 0;
 struct page *VAR_13, *VAR_14;
 unsigned long VAR_15;

 FUNC_2(!VAR_8->anon_vma);
 FUNC_26(&VAR_7->page_table_lock);
 if (FUNC_32(!FUNC_21(*VAR_10, VAR_11)))
  goto out_unlock;

 VAR_13 = FUNC_20(VAR_11);
 FUNC_2(!FUNC_0(VAR_13) || !FUNC_1(VAR_13));
 VAR_15 = VAR_9 & VAR_1;
 if (FUNC_15(VAR_13) == 1) {
  pmd_t VAR_16;
  VAR_16 = FUNC_19(VAR_11);
  VAR_16 = FUNC_9(FUNC_17(VAR_16), VAR_8);
  if (FUNC_23(VAR_8, VAR_15, VAR_10, VAR_16, 1))
   FUNC_33(VAR_8, VAR_9, VAR_16);
  VAR_12 |= VAR_6;
  goto out_unlock;
 }
 FUNC_8(VAR_13);
 FUNC_27(&VAR_7->page_table_lock);

 if (FUNC_31(VAR_8) &&
     !FUNC_29())
  VAR_14 = FUNC_4(FUNC_30(VAR_8),
           VAR_8, VAR_15, FUNC_13(), 0);
 else
  VAR_14 = ((void*)0);

 if (FUNC_32(!VAR_14)) {
  FUNC_6(VAR_4);
  VAR_12 = FUNC_7(VAR_7, VAR_8, VAR_9,
         VAR_10, VAR_11, VAR_13, VAR_15);
  if (VAR_12 & VAR_5)
   FUNC_28(VAR_13);
  FUNC_24(VAR_13);
  goto out;
 }
 FUNC_6(VAR_3);

 if (FUNC_32(FUNC_10(VAR_14, VAR_7, VAR_0))) {
  FUNC_24(VAR_14);
  FUNC_28(VAR_13);
  FUNC_24(VAR_13);
  VAR_12 |= VAR_5;
  goto out;
 }

 FUNC_5(VAR_14, VAR_13, VAR_15, VAR_8, VAR_2);
 FUNC_3(VAR_14);

 FUNC_26(&VAR_7->page_table_lock);
 FUNC_24(VAR_13);
 if (FUNC_32(!FUNC_21(*VAR_10, VAR_11))) {
  FUNC_11(VAR_14);
  FUNC_24(VAR_14);
 } else {
  pmd_t VAR_17;
  FUNC_2(!FUNC_1(VAR_13));
  VAR_17 = FUNC_12(VAR_14, VAR_8->vm_page_prot);
  VAR_17 = FUNC_9(FUNC_17(VAR_17), VAR_8);
  VAR_17 = FUNC_18(VAR_17);
  FUNC_22(VAR_8, VAR_15, VAR_10);
  FUNC_14(VAR_14, VAR_8, VAR_15);
  FUNC_25(VAR_7, VAR_15, VAR_10, VAR_17);
  FUNC_33(VAR_8, VAR_9, VAR_17);
  FUNC_16(VAR_13);
  FUNC_24(VAR_13);
  VAR_12 |= VAR_6;
 }
out_unlock:
 FUNC_27(&VAR_7->page_table_lock);
out:
 return VAR_12;
}

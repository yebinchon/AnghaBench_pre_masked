
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int swp_entry_t ;
struct vm_area_struct {int vm_flags; TYPE_1__* vm_ops; int anon_vma; struct mm_struct* vm_mm; } ;
struct page {int dummy; } ;
struct mm_struct {int page_table_lock; } ;
typedef int spinlock_t ;
typedef int pud_t ;
typedef int pte_t ;
typedef int pmd_t ;
typedef int pgd_t ;
struct TYPE_2__ {int fault; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 struct page* FUNC_1 (int ) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 int VAR_7 ;
 struct page* FUNC_4 (struct mm_struct*,unsigned long,unsigned int) ;
 struct page* FUNC_5 (struct mm_struct*,unsigned long,int *,unsigned int) ;
 struct page* FUNC_6 (struct mm_struct*,unsigned long,int *,unsigned int) ;
 struct page* FUNC_7 (struct mm_struct*,unsigned long,int *,unsigned int) ;
 int FUNC_8 (struct page*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int) ;
 int FUNC_12 (struct page*) ;
 int FUNC_13 (struct mm_struct*,int *,unsigned long) ;
 int FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (int ) ;
 int * FUNC_16 (struct mm_struct*,unsigned long) ;
 int FUNC_17 (int ) ;
 scalar_t__ FUNC_18 (int ) ;
 scalar_t__ FUNC_19 (int ) ;
 int * FUNC_20 (int *,unsigned long) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (int ) ;
 scalar_t__ FUNC_24 (int ) ;
 scalar_t__ FUNC_25 (int ) ;
 int * FUNC_26 (struct mm_struct*,int *,unsigned long,int **) ;
 struct page* FUNC_27 (int ) ;
 int FUNC_28 (int ) ;
 int FUNC_29 (int ) ;
 int FUNC_30 (int ) ;
 int FUNC_31 (int *,int *) ;
 int FUNC_32 (int ) ;
 int FUNC_33 (int ) ;
 scalar_t__ FUNC_34 (int ) ;
 scalar_t__ FUNC_35 (int ) ;
 int * FUNC_36 (int *,unsigned long) ;
 int FUNC_37 (struct page*) ;
 int FUNC_38 (int *) ;
 int FUNC_39 (int *) ;
 int FUNC_40 (struct mm_struct*,int *) ;
 scalar_t__ FUNC_41 (int) ;
 struct page* FUNC_42 (struct vm_area_struct*,unsigned long,int ) ;
 int FUNC_43 (int ,int *) ;

struct page *FUNC_44(struct vm_area_struct *VAR_8, unsigned long VAR_9,
   unsigned int VAR_10)
{
 pgd_t *VAR_11;
 pud_t *VAR_12;
 pmd_t *VAR_13;
 pte_t *VAR_14, VAR_15;
 spinlock_t *VAR_16;
 struct page *VAR_17;
 struct mm_struct *VAR_18 = VAR_8->vm_mm;

 VAR_17 = FUNC_4(VAR_18, VAR_9, VAR_10 & VAR_6);
 if (!FUNC_2(VAR_17)) {
  FUNC_0(VAR_10 & VAR_2);
  goto out;
 }

 VAR_17 = ((void*)0);
 VAR_11 = FUNC_16(VAR_18, VAR_9);
 if (FUNC_15(*VAR_11) || FUNC_41(FUNC_14(*VAR_11)))
  goto no_page_table;

 VAR_12 = FUNC_36(VAR_11, VAR_9);
 if (FUNC_35(*VAR_12))
  goto no_page_table;
 if (FUNC_34(*VAR_12)) {
  FUNC_0(VAR_10 & VAR_2);
  VAR_17 = FUNC_6(VAR_18, VAR_9, VAR_12, VAR_10 & VAR_6);
  goto out;
 }
 if (FUNC_41(FUNC_33(*VAR_12)))
  goto no_page_table;

 VAR_13 = FUNC_20(VAR_12, VAR_9);
 if (FUNC_19(*VAR_13))
  goto no_page_table;
 if (FUNC_18(*VAR_13) && VAR_8->vm_flags & VAR_7) {
  FUNC_0(VAR_10 & VAR_2);
  VAR_17 = FUNC_5(VAR_18, VAR_9, VAR_13, VAR_10 & VAR_6);
  goto out;
 }
 if (FUNC_21(*VAR_13)) {
  if (VAR_10 & VAR_4) {
   FUNC_40(VAR_18, VAR_13);
   goto split_fallthrough;
  }
  FUNC_38(&VAR_18->page_table_lock);
  if (FUNC_11(FUNC_21(*VAR_13))) {
   if (FUNC_41(FUNC_22(*VAR_13))) {
    FUNC_39(&VAR_18->page_table_lock);
    FUNC_43(VAR_8->anon_vma, VAR_13);
   } else {
    VAR_17 = FUNC_7(VAR_18, VAR_9,
            VAR_13, VAR_10);
    FUNC_39(&VAR_18->page_table_lock);
    goto out;
   }
  } else
   FUNC_39(&VAR_18->page_table_lock);

 }
split_fallthrough:
 if (FUNC_41(FUNC_17(*VAR_13)))
  goto no_page_table;

 VAR_14 = FUNC_26(VAR_18, VAR_13, VAR_9, &VAR_16);

 VAR_15 = *VAR_14;
 if (!FUNC_29(VAR_15)) {
  swp_entry_t VAR_19;





  if (FUNC_11(!(VAR_10 & VAR_3)))
   goto no_page;
  if (FUNC_25(VAR_15) || FUNC_24(VAR_15))
   goto no_page;
  VAR_19 = FUNC_30(VAR_15);
  if (!FUNC_9(VAR_19))
   goto no_page;
  FUNC_31(VAR_14, VAR_16);
  FUNC_13(VAR_18, VAR_13, VAR_9);
  goto split_fallthrough;
 }
 if ((VAR_10 & VAR_6) && !FUNC_32(VAR_15))
  goto unlock;

 VAR_17 = FUNC_42(VAR_8, VAR_9, VAR_15);
 if (FUNC_41(!VAR_17)) {
  if ((VAR_10 & VAR_1) ||
      !FUNC_10(FUNC_28(VAR_15)))
   goto bad_page;
  VAR_17 = FUNC_27(VAR_15);
 }

 if (VAR_10 & VAR_2)
  FUNC_8(VAR_17);
 if (VAR_10 & VAR_5) {
  if ((VAR_10 & VAR_6) &&
      !FUNC_23(VAR_15) && !FUNC_3(VAR_17))
   FUNC_37(VAR_17);





  FUNC_12(VAR_17);
 }
unlock:
 FUNC_31(VAR_14, VAR_16);
out:
 return VAR_17;

bad_page:
 FUNC_31(VAR_14, VAR_16);
 return FUNC_1(-VAR_0);

no_page:
 FUNC_31(VAR_14, VAR_16);
 if (!FUNC_25(VAR_15))
  return VAR_17;

no_page_table:
 if ((VAR_10 & VAR_1) &&
     (!VAR_8->vm_ops || !VAR_8->vm_ops->fault))
  return FUNC_1(-VAR_0);
 return VAR_17;
}

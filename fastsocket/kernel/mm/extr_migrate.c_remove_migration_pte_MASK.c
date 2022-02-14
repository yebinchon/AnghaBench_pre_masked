
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int swp_entry_t ;
struct vm_area_struct {int vm_page_prot; struct mm_struct* vm_mm; } ;
struct page {int dummy; } ;
struct mm_struct {int page_table_lock; } ;
typedef int spinlock_t ;
typedef int pud_t ;
typedef int pte_t ;
typedef int pmd_t ;
typedef int pgd_t ;


 scalar_t__ FUNC_0 (struct page*) ;
 scalar_t__ FUNC_1 (struct page*) ;
 int VAR_0 ;
 int FUNC_2 (struct vm_area_struct*,unsigned long,int ) ;
 int FUNC_3 (struct page*) ;
 int * FUNC_4 (struct mm_struct*,unsigned long) ;
 int FUNC_5 (struct page*,struct vm_area_struct*,unsigned long) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 void* FUNC_9 (int ) ;
 int FUNC_10 (struct page*,int ) ;
 int FUNC_11 (struct page*,struct vm_area_struct*,unsigned long) ;
 int FUNC_12 (struct page*) ;
 int FUNC_13 (struct page*) ;
 int * FUNC_14 (struct mm_struct*,unsigned long) ;
 int FUNC_15 (int ) ;
 int * FUNC_16 (int *,unsigned long) ;
 int FUNC_17 (int ) ;
 scalar_t__ FUNC_18 (int ) ;
 int * FUNC_19 (struct mm_struct*,int *) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int ) ;
 int * FUNC_23 (int *,unsigned long) ;
 int FUNC_24 (int ) ;
 int FUNC_25 (int ) ;
 int FUNC_26 (int *,int *) ;
 int * FUNC_27 (int *,unsigned long) ;
 int FUNC_28 (int ) ;
 int FUNC_29 (struct mm_struct*,unsigned long,int *,int ) ;
 int FUNC_30 (int *) ;
 scalar_t__ FUNC_31 (scalar_t__) ;
 int FUNC_32 (struct vm_area_struct*,unsigned long,int ) ;

__attribute__((used)) static int FUNC_33(struct page *VAR_1, struct vm_area_struct *VAR_2,
     unsigned long VAR_3, void *VAR_4)
{
 struct mm_struct *VAR_5 = VAR_2->vm_mm;
 swp_entry_t VAR_6;
  pgd_t *VAR_7;
  pud_t *VAR_8;
  pmd_t *VAR_9;
 pte_t *VAR_10, VAR_11;
  spinlock_t *VAR_12;

 if (FUNC_31(FUNC_1(VAR_1))) {
  VAR_10 = FUNC_4(VAR_5, VAR_3);
  if (!VAR_10)
   goto out;
  VAR_12 = &VAR_5->page_table_lock;
 } else {
  VAR_7 = FUNC_14(VAR_5, VAR_3);
  if (!FUNC_15(*VAR_7))
   goto out;

  VAR_8 = FUNC_27(VAR_7, VAR_3);
  if (!FUNC_28(*VAR_8))
   goto out;

  VAR_9 = FUNC_16(VAR_8, VAR_3);
  if (FUNC_18(*VAR_9))
   goto out;
  if (!FUNC_17(*VAR_9))
   goto out;

  VAR_10 = FUNC_23(VAR_9, VAR_3);






  VAR_12 = FUNC_19(VAR_5, VAR_9);
 }

  FUNC_30(VAR_12);
 VAR_11 = *VAR_10;
 if (!FUNC_7(VAR_11))
  goto unlock;

 VAR_6 = FUNC_25(VAR_11);

 if (!FUNC_6(VAR_6) ||
     FUNC_9(VAR_6) != VAR_4)
  goto unlock;

 FUNC_3(VAR_1);
 VAR_11 = FUNC_21(FUNC_10(VAR_1, VAR_2->vm_page_prot));
 if (FUNC_8(VAR_6))
  VAR_11 = FUNC_22(VAR_11);




 FUNC_2(VAR_2, VAR_3, FUNC_24(VAR_11));
 FUNC_29(VAR_5, VAR_3, VAR_10, VAR_11);

 if (FUNC_1(VAR_1)) {
  if (FUNC_0(VAR_1))
   FUNC_5(VAR_1, VAR_2, VAR_3);
  else
   FUNC_13(VAR_1);
 } else if (FUNC_0(VAR_1))
  FUNC_11(VAR_1, VAR_2, VAR_3);
 else
  FUNC_12(VAR_1);


 FUNC_32(VAR_2, VAR_3, VAR_11);
unlock:
 FUNC_26(VAR_10, VAR_12);
out:
 return VAR_0;
}

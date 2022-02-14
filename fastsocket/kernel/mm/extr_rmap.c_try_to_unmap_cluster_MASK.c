
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {unsigned long vm_start; unsigned long vm_end; int vm_flags; struct mm_struct* vm_mm; } ;
struct page {scalar_t__ index; } ;
struct mm_struct {int mmap_sem; } ;
typedef int spinlock_t ;
typedef int pud_t ;
typedef int pte_t ;
typedef int pmd_t ;
typedef int pgd_t ;


 int FUNC_0 (int) ;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (struct page*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct mm_struct*,int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int VAR_6 ;
 int FUNC_4 (struct vm_area_struct*,unsigned long,int ) ;
 scalar_t__ FUNC_5 (struct vm_area_struct*,unsigned long) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (struct page*) ;
 int FUNC_8 (struct page*) ;
 int * FUNC_9 (struct mm_struct*,unsigned long) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (scalar_t__) ;
 int * FUNC_12 (int *,unsigned long) ;
 int FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (int ) ;
 int * FUNC_15 (struct mm_struct*,int *,unsigned long,int **) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int *,int *) ;
 int FUNC_19 (struct vm_area_struct*,unsigned long,int *) ;
 scalar_t__ FUNC_20 (struct vm_area_struct*,unsigned long,int *) ;
 int * FUNC_21 (int *,unsigned long) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (struct page*) ;
 int FUNC_24 (struct mm_struct*,unsigned long,int *,int ) ;
 int FUNC_25 (int *) ;
 int FUNC_26 (struct mm_struct*) ;
 struct page* FUNC_27 (struct vm_area_struct*,unsigned long,int ) ;

__attribute__((used)) static int FUNC_28(unsigned long VAR_7, unsigned int *VAR_8,
  struct vm_area_struct *VAR_9, struct page *VAR_10)
{
 struct mm_struct *VAR_11 = VAR_9->vm_mm;
 pgd_t *VAR_12;
 pud_t *VAR_13;
 pmd_t *VAR_14;
 pte_t *VAR_15;
 pte_t VAR_16;
 spinlock_t *VAR_17;
 struct page *VAR_18;
 unsigned long VAR_19;
 unsigned long VAR_20;
 int VAR_21 = VAR_3;
 int VAR_22 = 0;

 VAR_19 = (VAR_9->vm_start + VAR_7) & VAR_0;
 VAR_20 = VAR_19 + VAR_1;
 if (VAR_19 < VAR_9->vm_start)
  VAR_19 = VAR_9->vm_start;
 if (VAR_20 > VAR_9->vm_end)
  VAR_20 = VAR_9->vm_end;

 VAR_12 = FUNC_9(VAR_11, VAR_19);
 if (!FUNC_10(*VAR_12))
  return VAR_21;

 VAR_13 = FUNC_21(VAR_12, VAR_19);
 if (!FUNC_22(*VAR_13))
  return VAR_21;

 VAR_14 = FUNC_12(VAR_13, VAR_19);
 if (!FUNC_13(*VAR_14))
  return VAR_21;





 if (FUNC_3(&VAR_9->vm_mm->mmap_sem)) {
  VAR_22 = (VAR_9->vm_flags & VAR_5);
  if (!VAR_22)
   FUNC_25(&VAR_9->vm_mm->mmap_sem);
 }

 VAR_15 = FUNC_15(VAR_11, VAR_14, VAR_19, &VAR_17);


 FUNC_26(VAR_11);

 for (; VAR_19 < VAR_20; VAR_15++, VAR_19 += VAR_2) {
  if (!FUNC_17(*VAR_15))
   continue;
  VAR_18 = FUNC_27(VAR_9, VAR_19, *VAR_15);
  FUNC_0(!VAR_18 || FUNC_1(VAR_18));

  if (VAR_22) {
   FUNC_6(VAR_18);
   if (VAR_18 == VAR_10)
    VAR_21 = VAR_4;
   continue;
  }

  if (FUNC_20(VAR_9, VAR_19, VAR_15))
   continue;


  FUNC_4(VAR_9, VAR_19, FUNC_16(*VAR_15));
  VAR_16 = FUNC_19(VAR_9, VAR_19, VAR_15);


  if (VAR_18->index != FUNC_5(VAR_9, VAR_19))
   FUNC_24(VAR_11, VAR_19, VAR_15, FUNC_11(VAR_18->index));


  if (FUNC_14(VAR_16))
   FUNC_23(VAR_18);

  FUNC_8(VAR_18);
  FUNC_7(VAR_18);
  FUNC_2(VAR_11, VAR_6);
  (*VAR_8)--;
 }
 FUNC_18(VAR_15 - 1, VAR_17);
 if (VAR_22)
  FUNC_25(&VAR_9->vm_mm->mmap_sem);
 return VAR_21;
}

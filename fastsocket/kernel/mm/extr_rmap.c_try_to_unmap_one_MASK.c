
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_6__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int val; } ;
typedef TYPE_1__ swp_entry_t ;
struct vm_area_struct {int vm_flags; scalar_t__ vm_start; struct mm_struct* vm_mm; } ;
struct page {scalar_t__ index; } ;
struct mm_struct {int mmap_sem; int mmlist; } ;
typedef int spinlock_t ;
typedef int pte_t ;
typedef enum ttu_flags { ____Placeholder_ttu_flags } ttu_flags ;
struct TYPE_8__ {int mmlist; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (struct page*) ;
 scalar_t__ FUNC_2 (struct page*) ;
 scalar_t__ FUNC_3 (struct page*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (struct mm_struct*,int ) ;
 scalar_t__ FUNC_6 (int *) ;
 int VAR_11 ;
 int FUNC_7 (struct vm_area_struct*,unsigned long,int ) ;
 int FUNC_8 (struct mm_struct*,int ) ;
 TYPE_6__ VAR_12 ;
 int FUNC_9 (int *,int *) ;
 scalar_t__ FUNC_10 (int *) ;
 TYPE_1__ FUNC_11 (struct page*) ;
 TYPE_1__ FUNC_12 (struct page*,int ) ;
 int FUNC_13 (struct page*) ;
 int VAR_13 ;
 int FUNC_14 (struct page*) ;
 int * FUNC_15 (struct page*,struct mm_struct*,unsigned long,int **,int ) ;
 int FUNC_16 (struct page*) ;
 int FUNC_17 (struct page*) ;
 int FUNC_18 (struct page*) ;
 scalar_t__ FUNC_19 (int ) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int *,int *) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (struct vm_area_struct*,unsigned long,int *) ;
 scalar_t__ FUNC_24 (struct vm_area_struct*,unsigned long,int *) ;
 int FUNC_25 (struct page*) ;
 int FUNC_26 (struct mm_struct*,unsigned long,int *,int ) ;
 int FUNC_27 (int *) ;
 int FUNC_28 (int *) ;
 scalar_t__ FUNC_29 (TYPE_1__) ;
 int VAR_14 ;
 int FUNC_30 (TYPE_1__) ;
 int FUNC_31 (struct mm_struct*,scalar_t__) ;
 int FUNC_32 (int *) ;
 int FUNC_33 (struct mm_struct*) ;

int FUNC_34(struct page *VAR_15, struct vm_area_struct *VAR_16,
       unsigned long VAR_17, enum ttu_flags VAR_18)
{
 struct mm_struct *VAR_19 = VAR_16->vm_mm;
 pte_t *VAR_20;
 pte_t VAR_21;
 spinlock_t *VAR_22;
 int VAR_23 = VAR_1;

 VAR_20 = FUNC_15(VAR_15, VAR_19, VAR_17, &VAR_22, 0);
 if (!VAR_20)
  goto out;






 if (!(VAR_18 & VAR_6)) {
  if (VAR_16->vm_flags & VAR_9) {
   VAR_23 = VAR_3;
   goto out_unmap;
  }
  if (FUNC_4(VAR_18) == VAR_8)
   goto out_unmap;
 }
 if (!(VAR_18 & VAR_4)) {
  if (FUNC_24(VAR_16, VAR_17, VAR_20)) {
   VAR_23 = VAR_2;
   goto out_unmap;
  }
   }


 FUNC_7(VAR_16, VAR_17, FUNC_18(VAR_15));
 VAR_21 = FUNC_23(VAR_16, VAR_17, VAR_20);


 if (FUNC_19(VAR_21))
  FUNC_25(VAR_15);


 FUNC_33(VAR_19);

 if (FUNC_2(VAR_15) && !(VAR_18 & VAR_5)) {
  if (FUNC_1(VAR_15))
   FUNC_5(VAR_19, VAR_10);
  else
   FUNC_5(VAR_19, VAR_11);
  FUNC_26(VAR_19, VAR_17, VAR_20,
    FUNC_30(FUNC_11(VAR_15)));
 } else if (FUNC_1(VAR_15)) {
  swp_entry_t VAR_24 = { .val = FUNC_16(VAR_15) };

  if (FUNC_3(VAR_15)) {




   if (FUNC_29(VAR_24) < 0) {
    FUNC_26(VAR_19, VAR_17, VAR_20, VAR_21);
    VAR_23 = VAR_2;
    goto out_unmap;
   }
   if (FUNC_10(&VAR_19->mmlist)) {
    FUNC_27(&VAR_13);
    if (FUNC_10(&VAR_19->mmlist))
     FUNC_9(&VAR_19->mmlist, &VAR_12.mmlist);
    FUNC_28(&VAR_13);
   }
   FUNC_5(VAR_19, VAR_10);
   FUNC_8(VAR_19, VAR_14);
  } else if (VAR_0) {





   FUNC_0(FUNC_4(VAR_18) != VAR_7);
   VAR_24 = FUNC_12(VAR_15, FUNC_22(VAR_21));
  }
  FUNC_26(VAR_19, VAR_17, VAR_20, FUNC_30(VAR_24));
  FUNC_0(FUNC_20(*VAR_20));
 } else if (VAR_0 && (FUNC_4(VAR_18) == VAR_7)) {

  swp_entry_t VAR_25;
  VAR_25 = FUNC_12(VAR_15, FUNC_22(VAR_21));
  FUNC_26(VAR_19, VAR_17, VAR_20, FUNC_30(VAR_25));
 } else
  FUNC_5(VAR_19, VAR_11);

 FUNC_17(VAR_15);
 FUNC_14(VAR_15);

out_unmap:
 FUNC_21(VAR_20, VAR_22);

 if (VAR_23 == VAR_3) {
  VAR_23 = VAR_1;
  if (FUNC_6(&VAR_16->vm_mm->mmap_sem)) {
   if (VAR_16->vm_flags & VAR_9) {
    FUNC_13(VAR_15);
    VAR_23 = VAR_3;
   }
   FUNC_32(&VAR_16->vm_mm->mmap_sem);
  }
  FUNC_31(VAR_16->vm_mm, VAR_16->vm_start+VAR_15->index);
 }
out:
 return VAR_23;
}

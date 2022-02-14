
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct vm_area_struct {int anon_vma; } ;
struct page {int dummy; } ;
struct mmu_gather {TYPE_1__* mm; } ;
typedef int pmd_t ;
typedef int pgtable_t ;
struct TYPE_4__ {int page_table_lock; int nr_ptes; } ;


 int VAR_0 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int ,int ) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct page*) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (int *) ;
 struct page* FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (TYPE_1__*,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct mmu_gather*,struct page*) ;
 scalar_t__ FUNC_15 (int ) ;
 int FUNC_16 (int ,int *) ;

int FUNC_17(struct mmu_gather *VAR_2, struct vm_area_struct *VAR_3,
   pmd_t *VAR_4)
{
 int VAR_5 = 0;

 FUNC_12(&VAR_2->mm->page_table_lock);
 if (FUNC_4(FUNC_9(*VAR_4))) {
  if (FUNC_15(FUNC_10(*VAR_4))) {
   FUNC_13(&VAR_2->mm->page_table_lock);
   FUNC_16(VAR_3->anon_vma,
          VAR_4);
  } else {
   struct page *VAR_6;
   pgtable_t VAR_7;
   VAR_7 = FUNC_3(VAR_2->mm);
   VAR_6 = FUNC_8(*VAR_4);
   FUNC_7(VAR_4);
   FUNC_6(VAR_6);
   FUNC_1(FUNC_5(VAR_6) < 0);
   FUNC_2(VAR_2->mm, VAR_1, -VAR_0);
   FUNC_1(!FUNC_0(VAR_6));
   VAR_2->mm->nr_ptes--;
   FUNC_13(&VAR_2->mm->page_table_lock);
   FUNC_14(VAR_2, VAR_6);
   FUNC_11(VAR_2->mm, VAR_7);
   VAR_5 = 1;
  }
 } else
  FUNC_13(&VAR_2->mm->page_table_lock);

 return VAR_5;
}

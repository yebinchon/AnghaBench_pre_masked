
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vm_area_struct {TYPE_2__* vm_file; struct mm_struct* vm_mm; } ;
struct mm_struct {int page_table_lock; } ;
struct hstate {int dummy; } ;
typedef int pte_t ;
typedef int pgprot_t ;
struct TYPE_4__ {TYPE_1__* f_mapping; } ;
struct TYPE_3__ {int i_mmap_lock; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct vm_area_struct*,unsigned long,unsigned long) ;
 int FUNC_2 (struct vm_area_struct*,unsigned long,unsigned long) ;
 struct hstate* FUNC_3 (struct vm_area_struct*) ;
 scalar_t__ FUNC_4 (struct hstate*) ;
 scalar_t__ FUNC_5 (struct mm_struct*,unsigned long*,int *) ;
 int FUNC_6 (int ) ;
 int * FUNC_7 (struct mm_struct*,unsigned long) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct mm_struct*,unsigned long,int *) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (struct mm_struct*,unsigned long,int *,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;

void FUNC_15(struct vm_area_struct *VAR_0,
  unsigned long VAR_1, unsigned long VAR_2, pgprot_t VAR_3)
{
 struct mm_struct *VAR_4 = VAR_0->vm_mm;
 unsigned long VAR_5 = VAR_1;
 pte_t *VAR_6;
 pte_t VAR_7;
 struct hstate *VAR_8 = FUNC_3(VAR_0);

 FUNC_0(VAR_1 >= VAR_2);
 FUNC_1(VAR_0, VAR_1, VAR_2);

 FUNC_13(&VAR_0->vm_file->f_mapping->i_mmap_lock);
 FUNC_13(&VAR_4->page_table_lock);
 for (; VAR_1 < VAR_2; VAR_1 += FUNC_4(VAR_8)) {
  VAR_6 = FUNC_7(VAR_4, VAR_1);
  if (!VAR_6)
   continue;
  if (FUNC_5(VAR_4, &VAR_1, VAR_6))
   continue;
  if (!FUNC_6(FUNC_8(VAR_6))) {
   VAR_7 = FUNC_9(VAR_4, VAR_1, VAR_6);
   VAR_7 = FUNC_10(FUNC_11(VAR_7, VAR_3));
   FUNC_12(VAR_4, VAR_1, VAR_6, VAR_7);
  }
 }
 FUNC_14(&VAR_4->page_table_lock);






 FUNC_2(VAR_0, VAR_5, VAR_2);
 FUNC_14(&VAR_0->vm_file->f_mapping->i_mmap_lock);
}

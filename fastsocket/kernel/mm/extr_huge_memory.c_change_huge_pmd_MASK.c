
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {struct mm_struct* vm_mm; int anon_vma; } ;
struct mm_struct {int page_table_lock; } ;
typedef int pmd_t ;
typedef int pgprot_t ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct mm_struct*,unsigned long,int *) ;
 int FUNC_5 (struct mm_struct*,unsigned long,int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ,int *) ;

int FUNC_10(struct vm_area_struct *VAR_0, pmd_t *VAR_1,
  unsigned long VAR_2, pgprot_t VAR_3)
{
 struct mm_struct *VAR_4 = VAR_0->vm_mm;
 int VAR_5 = 0;

 FUNC_6(&VAR_4->page_table_lock);
 if (FUNC_0(FUNC_2(*VAR_1))) {
  if (FUNC_8(FUNC_3(*VAR_1))) {
   FUNC_7(&VAR_4->page_table_lock);
   FUNC_9(VAR_0->anon_vma, VAR_1);
  } else {
   pmd_t VAR_6;

   VAR_6 = FUNC_4(VAR_4, VAR_2, VAR_1);
   VAR_6 = FUNC_1(VAR_6, VAR_3);
   FUNC_5(VAR_4, VAR_2, VAR_1, VAR_6);
   FUNC_7(&VAR_0->vm_mm->page_table_lock);
   VAR_5 = 1;
  }
 } else
  FUNC_7(&VAR_0->vm_mm->page_table_lock);

 return VAR_5;
}

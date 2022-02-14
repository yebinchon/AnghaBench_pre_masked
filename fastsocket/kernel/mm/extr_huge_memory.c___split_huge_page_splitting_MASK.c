
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {struct mm_struct* vm_mm; } ;
struct page {int dummy; } ;
struct mm_struct {int page_table_lock; } ;
typedef int pmd_t ;


 int VAR_0 ;
 int * FUNC_0 (struct page*,struct mm_struct*,unsigned long,int ) ;
 int FUNC_1 (struct vm_area_struct*,unsigned long,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct page *VAR_1,
           struct vm_area_struct *VAR_2,
           unsigned long VAR_3)
{
 struct mm_struct *VAR_4 = VAR_2->vm_mm;
 pmd_t *VAR_5;
 int VAR_6 = 0;

 FUNC_2(&VAR_4->page_table_lock);
 VAR_5 = FUNC_0(VAR_1, VAR_4, VAR_3,
         VAR_0);
 if (VAR_5) {







  FUNC_1(VAR_2, VAR_3, VAR_5);
  VAR_6 = 1;
 }
 FUNC_3(&VAR_4->page_table_lock);

 return VAR_6;
}

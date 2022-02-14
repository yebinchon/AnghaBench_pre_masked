
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct mm_struct {int page_table_lock; } ;
typedef int pmd_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 struct page* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct page*) ;
 scalar_t__ FUNC_10 (int) ;

void FUNC_11(struct mm_struct *VAR_0, pmd_t *VAR_1)
{
 struct page *VAR_2;

 FUNC_7(&VAR_0->page_table_lock);
 if (FUNC_10(!FUNC_5(*VAR_1))) {
  FUNC_8(&VAR_0->page_table_lock);
  return;
 }
 VAR_2 = FUNC_4(*VAR_1);
 FUNC_1(!FUNC_3(VAR_2));
 FUNC_2(VAR_2);
 FUNC_8(&VAR_0->page_table_lock);

 FUNC_9(VAR_2);

 FUNC_6(VAR_2);
 FUNC_0(FUNC_5(*VAR_1));
}

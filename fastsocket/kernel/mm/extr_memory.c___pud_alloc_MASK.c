
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int page_table_lock; } ;
typedef int pud_t ;
typedef int pgd_t ;


 int VAR_0 ;
 int FUNC_0 (struct mm_struct*,int *,int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int * FUNC_2 (struct mm_struct*,unsigned long) ;
 int FUNC_3 (struct mm_struct*,int *) ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct mm_struct *VAR_1, pgd_t *VAR_2, unsigned long VAR_3)
{
 pud_t *VAR_4 = FUNC_2(VAR_1, VAR_3);
 if (!VAR_4)
  return -VAR_0;

 FUNC_4();

 FUNC_5(&VAR_1->page_table_lock);
 if (FUNC_1(*VAR_2))
  FUNC_3(VAR_1, VAR_4);
 else
  FUNC_0(VAR_1, VAR_2, VAR_4);
 FUNC_6(&VAR_1->page_table_lock);
 return 0;
}

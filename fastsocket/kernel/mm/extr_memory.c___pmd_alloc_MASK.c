
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int page_table_lock; } ;
typedef int pud_t ;
typedef int pmd_t ;


 int VAR_0 ;
 int FUNC_0 (struct mm_struct*,int *,int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int * FUNC_2 (struct mm_struct*,unsigned long) ;
 int FUNC_3 (struct mm_struct*,int *) ;
 int FUNC_4 (struct mm_struct*,int *,int *) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

int FUNC_9(struct mm_struct *VAR_1, pud_t *VAR_2, unsigned long VAR_3)
{
 pmd_t *VAR_4 = FUNC_2(VAR_1, VAR_3);
 if (!VAR_4)
  return -VAR_0;

 FUNC_6();

 FUNC_7(&VAR_1->page_table_lock);

 if (FUNC_5(*VAR_2))
  FUNC_3(VAR_1, VAR_4);
 else
  FUNC_4(VAR_1, VAR_2, VAR_4);






 FUNC_8(&VAR_1->page_table_lock);
 return 0;
}

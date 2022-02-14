
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct mm_struct {TYPE_1__* pmd_huge_pte; int page_table_lock; } ;
typedef TYPE_1__* pgtable_t ;
struct TYPE_3__ {int lru; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(pgtable_t VAR_0,
     struct mm_struct *VAR_1)
{
 FUNC_1(FUNC_3(&VAR_1->page_table_lock));


 if (!VAR_1->pmd_huge_pte)
  FUNC_0(&VAR_0->lru);
 else
  FUNC_2(&VAR_0->lru, &VAR_1->pmd_huge_pte->lru);
 VAR_1->pmd_huge_pte = VAR_0;
}

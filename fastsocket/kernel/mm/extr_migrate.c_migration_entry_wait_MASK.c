
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int swp_entry_t ;
struct page {int dummy; } ;
struct mm_struct {int dummy; } ;
typedef int spinlock_t ;
typedef int pte_t ;
typedef int pmd_t ;


 int FUNC_0 (struct page*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct page* FUNC_3 (int ) ;
 int * FUNC_4 (struct mm_struct*,int *,unsigned long,int **) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (struct page*) ;
 int FUNC_8 (struct page*) ;

void FUNC_9(struct mm_struct *VAR_0, pmd_t *VAR_1,
    unsigned long VAR_2)
{
 pte_t *VAR_3, VAR_4;
 spinlock_t *VAR_5;
 swp_entry_t VAR_6;
 struct page *VAR_7;

 VAR_3 = FUNC_4(VAR_0, VAR_1, VAR_2, &VAR_5);
 VAR_4 = *VAR_3;
 if (!FUNC_2(VAR_4))
  goto out;

 VAR_6 = FUNC_5(VAR_4);
 if (!FUNC_1(VAR_6))
  goto out;

 VAR_7 = FUNC_3(VAR_6);
 if (!FUNC_0(VAR_7))
  goto out;
 FUNC_6(VAR_3, VAR_5);
 FUNC_8(VAR_7);
 FUNC_7(VAR_7);
 return;
out:
 FUNC_6(VAR_3, VAR_5);
}

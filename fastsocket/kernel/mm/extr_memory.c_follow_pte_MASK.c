
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int dummy; } ;
typedef int spinlock_t ;
typedef int pud_t ;
typedef int pte_t ;
typedef int pmd_t ;
typedef int pgd_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int * FUNC_3 (struct mm_struct*,unsigned long) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int * FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int ) ;
 int * FUNC_9 (struct mm_struct*,int *,unsigned long,int **) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int ) ;
 int * FUNC_14 (int *,unsigned long) ;
 scalar_t__ FUNC_15 (int ) ;

__attribute__((used)) static int FUNC_16(struct mm_struct *VAR_1, unsigned long VAR_2,
  pte_t **VAR_3, spinlock_t **VAR_4)
{
 pgd_t *VAR_5;
 pud_t *VAR_6;
 pmd_t *VAR_7;
 pte_t *VAR_8;

 VAR_5 = FUNC_3(VAR_1, VAR_2);
 if (FUNC_2(*VAR_5) || FUNC_15(FUNC_1(*VAR_5)))
  goto out;

 VAR_6 = FUNC_14(VAR_5, VAR_2);
 if (FUNC_13(*VAR_6) || FUNC_15(FUNC_12(*VAR_6)))
  goto out;

 VAR_7 = FUNC_7(VAR_6, VAR_2);
 FUNC_0(FUNC_8(*VAR_7));
 if (FUNC_6(*VAR_7) || FUNC_15(FUNC_4(*VAR_7)))
  goto out;


 if (FUNC_5(*VAR_7))
  goto out;

 VAR_8 = FUNC_9(VAR_1, VAR_7, VAR_2, VAR_4);
 if (!VAR_8)
  goto out;
 if (!FUNC_10(*VAR_8))
  goto unlock;
 *VAR_3 = VAR_8;
 return 0;
unlock:
 FUNC_11(VAR_8, *VAR_4);
out:
 return -VAR_0;
}

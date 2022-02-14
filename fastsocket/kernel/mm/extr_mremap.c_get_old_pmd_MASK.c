
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int dummy; } ;
typedef int pud_t ;
typedef int pmd_t ;
typedef int pgd_t ;


 scalar_t__ FUNC_0 (int *) ;
 int * FUNC_1 (struct mm_struct*,unsigned long) ;
 scalar_t__ FUNC_2 (int ) ;
 int * FUNC_3 (int *,unsigned long) ;
 scalar_t__ FUNC_4 (int *) ;
 int * FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static pmd_t *FUNC_6(struct mm_struct *VAR_0, unsigned long VAR_1)
{
 pgd_t *VAR_2;
 pud_t *VAR_3;
 pmd_t *VAR_4;

 VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (FUNC_0(VAR_2))
  return ((void*)0);

 VAR_3 = FUNC_5(VAR_2, VAR_1);
 if (FUNC_4(VAR_3))
  return ((void*)0);

 VAR_4 = FUNC_3(VAR_3, VAR_1);
 if (FUNC_2(*VAR_4))
  return ((void*)0);

 return VAR_4;
}

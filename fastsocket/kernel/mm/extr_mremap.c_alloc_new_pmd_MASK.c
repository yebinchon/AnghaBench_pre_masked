
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int dummy; } ;
struct mm_struct {int dummy; } ;
typedef int pud_t ;
typedef int pmd_t ;
typedef int pgd_t ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (struct mm_struct*,unsigned long) ;
 int * FUNC_2 (struct mm_struct*,int *,unsigned long) ;
 int FUNC_3 (int ) ;
 int * FUNC_4 (struct mm_struct*,int *,unsigned long) ;

__attribute__((used)) static pmd_t *FUNC_5(struct mm_struct *VAR_0, struct vm_area_struct *VAR_1,
       unsigned long VAR_2)
{
 pgd_t *VAR_3;
 pud_t *VAR_4;
 pmd_t *VAR_5;

 VAR_3 = FUNC_1(VAR_0, VAR_2);
 VAR_4 = FUNC_4(VAR_0, VAR_3, VAR_2);
 if (!VAR_4)
  return ((void*)0);

 VAR_5 = FUNC_2(VAR_0, VAR_4, VAR_2);
 if (!VAR_5)
  return ((void*)0);

 FUNC_0(FUNC_3(*VAR_5));

 return VAR_5;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
typedef int pud_t ;
typedef int pte_t ;
typedef int pmd_t ;
typedef int pgd_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (void const*) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (unsigned long) ;
 int FUNC_4 (int ) ;
 int * FUNC_5 (int *,unsigned long) ;
 int * FUNC_6 (int *,unsigned long) ;
 struct page* FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ) ;
 int * FUNC_11 (int *,unsigned long) ;

struct page *FUNC_12(const void *VAR_0)
{
 unsigned long VAR_1 = (unsigned long) VAR_0;
 struct page *VAR_2 = ((void*)0);
 pgd_t *VAR_3 = FUNC_3(VAR_1);





 FUNC_0(!FUNC_1(VAR_0));

 if (!FUNC_2(*VAR_3)) {
  pud_t *VAR_4 = FUNC_11(VAR_3, VAR_1);
  if (!FUNC_10(*VAR_4)) {
   pmd_t *VAR_5 = FUNC_5(VAR_4, VAR_1);
   if (!FUNC_4(*VAR_5)) {
    pte_t *VAR_6, VAR_7;

    VAR_6 = FUNC_6(VAR_5, VAR_1);
    VAR_7 = *VAR_6;
    if (FUNC_8(VAR_7))
     VAR_2 = FUNC_7(VAR_7);
    FUNC_9(VAR_6);
   }
  }
 }
 return VAR_2;
}

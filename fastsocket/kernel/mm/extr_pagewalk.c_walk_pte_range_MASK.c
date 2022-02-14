
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_walk {int (* pte_entry ) (int *,unsigned long,scalar_t__,struct mm_walk*) ;} ;
typedef int pte_t ;
typedef int pmd_t ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long,scalar_t__,struct mm_walk*) ;

__attribute__((used)) static int FUNC_3(pmd_t *VAR_1, unsigned long VAR_2, unsigned long VAR_3,
     struct mm_walk *VAR_4)
{
 pte_t *VAR_5;
 int VAR_6 = 0;

 VAR_5 = FUNC_0(VAR_1, VAR_2);
 for (;;) {
  VAR_6 = VAR_4->pte_entry(VAR_5, VAR_2, VAR_2 + VAR_0, VAR_4);
  if (VAR_6)
         break;
  VAR_2 += VAR_0;
  if (VAR_2 == VAR_3)
   break;
  VAR_5++;
 }

 FUNC_1(VAR_5);
 return VAR_6;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int dummy; } ;
typedef int pte_fn_t ;
typedef int pgd_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct mm_struct*,int *,unsigned long,unsigned long,int ,void*) ;
 int FUNC_2 (struct mm_struct*,unsigned long,unsigned long) ;
 int FUNC_3 (struct mm_struct*,unsigned long,unsigned long) ;
 unsigned long FUNC_4 (unsigned long,unsigned long) ;
 int * FUNC_5 (struct mm_struct*,unsigned long) ;

int FUNC_6(struct mm_struct *VAR_0, unsigned long VAR_1,
   unsigned long VAR_2, pte_fn_t VAR_3, void *VAR_4)
{
 pgd_t *VAR_5;
 unsigned long VAR_6;
 unsigned long VAR_7 = VAR_1, VAR_8 = VAR_1 + VAR_2;
 int VAR_9;

 FUNC_0(VAR_1 >= VAR_8);
 FUNC_3(VAR_0, VAR_7, VAR_8);
 VAR_5 = FUNC_5(VAR_0, VAR_1);
 do {
  VAR_6 = FUNC_4(VAR_1, VAR_8);
  VAR_9 = FUNC_1(VAR_0, VAR_5, VAR_1, VAR_6, VAR_3, VAR_4);
  if (VAR_9)
   break;
 } while (VAR_5++, VAR_1 = VAR_6, VAR_1 != VAR_8);
 FUNC_2(VAR_0, VAR_7, VAR_8);
 return VAR_9;
}

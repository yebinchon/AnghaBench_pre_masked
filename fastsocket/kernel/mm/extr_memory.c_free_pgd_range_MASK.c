
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmu_gather {int mm; } ;
typedef int pgd_t ;


 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct mmu_gather*,int *,unsigned long,unsigned long,unsigned long,unsigned long) ;
 unsigned long FUNC_1 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_2 (int *) ;
 int * FUNC_3 (int ,unsigned long) ;

void FUNC_4(struct mmu_gather *VAR_2,
   unsigned long VAR_3, unsigned long VAR_4,
   unsigned long VAR_5, unsigned long VAR_6)
{
 pgd_t *VAR_7;
 unsigned long VAR_8;
 unsigned long VAR_9;
 VAR_3 &= VAR_0;
 if (VAR_3 < VAR_5) {
  VAR_3 += VAR_1;
  if (!VAR_3)
   return;
 }
 if (VAR_6) {
  VAR_6 &= VAR_0;
  if (!VAR_6)
   return;
 }
 if (VAR_4 - 1 > VAR_6 - 1)
  VAR_4 -= VAR_1;
 if (VAR_3 > VAR_4 - 1)
  return;

 VAR_9 = VAR_3;
 VAR_7 = FUNC_3(VAR_2->mm, VAR_3);
 do {
  VAR_8 = FUNC_1(VAR_3, VAR_4);
  if (FUNC_2(VAR_7))
   continue;
  FUNC_0(VAR_2, VAR_7, VAR_3, VAR_8, VAR_5, VAR_6);
 } while (VAR_7++, VAR_3 = VAR_8, VAR_3 != VAR_4);
}

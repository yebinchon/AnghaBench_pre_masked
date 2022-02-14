
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmu_gather {TYPE_1__* mm; } ;
typedef int pmd_t ;
typedef int pgtable_t ;
struct TYPE_2__ {int nr_ptes; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mmu_gather*,int ,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct mmu_gather *VAR_0, pmd_t *VAR_1,
      unsigned long VAR_2)
{
 pgtable_t VAR_3 = FUNC_1(*VAR_1);
 FUNC_0(VAR_1);
 FUNC_2(VAR_0, VAR_3, VAR_2);
 VAR_0->mm->nr_ptes--;
}

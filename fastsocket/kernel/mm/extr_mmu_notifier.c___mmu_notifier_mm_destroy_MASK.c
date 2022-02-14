
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct mm_struct {TYPE_1__* mmu_notifier_mm; } ;
struct TYPE_3__ {int list; } ;


 int FUNC_0 (int) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;

void FUNC_3(struct mm_struct *VAR_1)
{
 FUNC_0(!FUNC_1(&VAR_1->mmu_notifier_mm->list));
 FUNC_2(VAR_1->mmu_notifier_mm);
 VAR_1->mmu_notifier_mm = VAR_0;
}

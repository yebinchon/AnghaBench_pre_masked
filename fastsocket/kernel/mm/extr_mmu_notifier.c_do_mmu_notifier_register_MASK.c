
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmu_notifier_mm {int lock; int list; } ;
struct mmu_notifier {int hlist; } ;
struct mm_struct {int mm_users; int mmap_sem; struct mmu_notifier_mm* mmu_notifier_mm; int mm_count; } ;
struct TYPE_2__ {int per_cpu_ref; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (struct mmu_notifier_mm*) ;
 struct mmu_notifier_mm* FUNC_7 (int,int ) ;
 int FUNC_8 (struct mm_struct*) ;
 int FUNC_9 (struct mm_struct*) ;
 int FUNC_10 (struct mm_struct*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 TYPE_1__ VAR_2 ;
 scalar_t__ FUNC_14 (int) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static int FUNC_16(struct mmu_notifier *VAR_3,
        struct mm_struct *VAR_4,
        int VAR_5)
{
 struct mmu_notifier_mm *VAR_6;
 int VAR_7;

 FUNC_0(FUNC_3(&VAR_4->mm_users) <= 0);





 FUNC_0(!VAR_2.per_cpu_ref);

 VAR_7 = -VAR_0;
 VAR_6 = FUNC_7(sizeof(struct mmu_notifier_mm), VAR_1);
 if (FUNC_14(!VAR_6))
  goto out;

 if (VAR_5)
  FUNC_4(&VAR_4->mmap_sem);
 VAR_7 = FUNC_10(VAR_4);
 if (FUNC_14(VAR_7))
  goto out_cleanup;

 if (!FUNC_9(VAR_4)) {
  FUNC_1(&VAR_6->list);
  FUNC_12(&VAR_6->lock);
  VAR_4->mmu_notifier_mm = VAR_6;
  VAR_6 = ((void*)0);
 }
 FUNC_2(&VAR_4->mm_count);
 FUNC_11(&VAR_4->mmu_notifier_mm->lock);
 FUNC_5(&VAR_3->hlist, &VAR_4->mmu_notifier_mm->list);
 FUNC_13(&VAR_4->mmu_notifier_mm->lock);

 FUNC_8(VAR_4);
out_cleanup:
 if (VAR_5)
  FUNC_15(&VAR_4->mmap_sem);

 FUNC_6(VAR_6);
out:
 FUNC_0(FUNC_3(&VAR_4->mm_users) <= 0);
 return VAR_7;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int dummy; } ;
struct kvm {struct mm_struct* mm; int mmu_notifier; int * coalesced_mmio_ring; int * buses; int vm_list; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 () ;
 int FUNC_2 (struct kvm*) ;
 int FUNC_3 (struct kvm*) ;
 int FUNC_4 (struct kvm*) ;
 int FUNC_5 (struct kvm*) ;
 int FUNC_6 (int ) ;
 int VAR_1 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct mm_struct*) ;
 int FUNC_9 (int *,struct mm_struct*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static void FUNC_12(struct kvm *VAR_2)
{
 int VAR_3;
 struct mm_struct *VAR_4 = VAR_2->mm;

 FUNC_4(VAR_2);
 FUNC_10(&VAR_1);
 FUNC_7(&VAR_2->vm_list);
 FUNC_11(&VAR_1);
 FUNC_5(VAR_2);
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  FUNC_6(VAR_2->buses[VAR_3]);







 FUNC_3(VAR_2);

 FUNC_2(VAR_2);
 FUNC_1();
 FUNC_8(VAR_4);
}

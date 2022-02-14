
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_flags; struct vm_area_struct* vm_next; } ;
struct mmu_gather {int dummy; } ;
struct mm_struct {int nr_ptes; struct vm_area_struct* mmap; scalar_t__ locked_vm; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct mm_struct*) ;
 int FUNC_2 (struct mm_struct*) ;
 int FUNC_3 (struct mm_struct*) ;
 int FUNC_4 (struct mmu_gather*,struct vm_area_struct*,int,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (struct mm_struct*) ;
 int FUNC_7 (struct vm_area_struct*) ;
 struct vm_area_struct* FUNC_8 (struct vm_area_struct*) ;
 int FUNC_9 (struct mmu_gather*,int ,unsigned long) ;
 unsigned long FUNC_10 (struct mmu_gather**,struct vm_area_struct*,int ,int,unsigned long*,int *,int) ;
 int FUNC_11 (unsigned long) ;

void FUNC_12(struct mm_struct *VAR_4)
{
 struct mmu_gather *VAR_5;
 struct vm_area_struct *VAR_6;
 unsigned long VAR_7 = 0;
 unsigned long VAR_8;


 FUNC_6(VAR_4);

 if (VAR_4->locked_vm) {
  VAR_6 = VAR_4->mmap;
  while (VAR_6) {
   if (VAR_6->vm_flags & VAR_3)
    FUNC_7(VAR_6);
   VAR_6 = VAR_6->vm_next;
  }
 }

 FUNC_1(VAR_4);

 VAR_6 = VAR_4->mmap;
 if (!VAR_6)
  return;

 FUNC_5();
 FUNC_3(VAR_4);


 VAR_8 = FUNC_10(&VAR_5, VAR_6, 0, -1, &VAR_7, ((void*)0), 1);
 FUNC_11(VAR_7);

 FUNC_4(VAR_5, VAR_6, VAR_0, 0);
 FUNC_9(VAR_5, 0, VAR_8);
 FUNC_2(VAR_4);





 while (VAR_6)
  VAR_6 = FUNC_8(VAR_6);

 FUNC_0(VAR_4->nr_ptes > (VAR_0+VAR_2-1)>>VAR_1);
}

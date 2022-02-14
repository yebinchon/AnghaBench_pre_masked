
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_start; int vm_end; struct vm_area_struct* vm_next; } ;
struct mmu_gather {int dummy; } ;
struct mm_struct {struct vm_area_struct* mmap; } ;


 int VAR_0 ;
 int FUNC_0 (struct mmu_gather*,struct vm_area_struct*,int ,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (struct mmu_gather*,unsigned long,unsigned long) ;
 int FUNC_3 (struct mmu_gather**,struct vm_area_struct*,unsigned long,unsigned long,unsigned long*,int *,int ) ;
 int FUNC_4 (struct mm_struct*) ;
 int FUNC_5 (unsigned long) ;

__attribute__((used)) static void FUNC_6(struct mm_struct *VAR_1,
  struct vm_area_struct *VAR_2, struct vm_area_struct *VAR_3,
  unsigned long VAR_4, unsigned long VAR_5)
{
 struct vm_area_struct *VAR_6 = VAR_3? VAR_3->vm_next: VAR_1->mmap;
 struct mmu_gather *VAR_7;
 unsigned long VAR_8 = 0;

 FUNC_1();
 FUNC_4(VAR_1);
 FUNC_3(&VAR_7, VAR_2, VAR_4, VAR_5, &VAR_8, ((void*)0), 0);
 FUNC_5(VAR_8);
 FUNC_0(VAR_7, VAR_2, VAR_3? VAR_3->vm_end: VAR_0,
     VAR_6? VAR_6->vm_start: 0);
 FUNC_2(VAR_7, VAR_4, VAR_5);
}

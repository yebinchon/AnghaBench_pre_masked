
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {struct mm_struct* vm_mm; } ;
struct proc_maps_private {struct vm_area_struct* tail_vma; } ;
struct mm_struct {int mmap_sem; } ;


 int FUNC_0 (struct mm_struct*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct proc_maps_private *VAR_0, struct vm_area_struct *VAR_1)
{
 if (VAR_1 && VAR_1 != VAR_0->tail_vma) {
  struct mm_struct *VAR_2 = VAR_1->vm_mm;
  FUNC_1(&VAR_2->mmap_sem);
  FUNC_0(VAR_2);
 }
}

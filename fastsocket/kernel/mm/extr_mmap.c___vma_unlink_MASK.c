
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_flags; int vm_end; int vm_rb; struct vm_area_struct* vm_prev; struct vm_area_struct* vm_next; } ;
struct mm_struct {struct vm_area_struct* mmap_cache; int mm_rb; } ;


 int VAR_0 ;
 int FUNC_0 (struct mm_struct*,int ) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static inline void
FUNC_2(struct mm_struct *VAR_1, struct vm_area_struct *VAR_2,
  struct vm_area_struct *VAR_3)
{
 struct vm_area_struct *VAR_4 = VAR_2->vm_next;

 VAR_3->vm_next = VAR_4;
 if (VAR_4)
  VAR_4->vm_prev = VAR_3;
 FUNC_1(&VAR_2->vm_rb, &VAR_1->mm_rb);
 if (VAR_1->mmap_cache == VAR_2)
  VAR_1->mmap_cache = VAR_3;
 if (VAR_2->vm_flags & VAR_0)
  FUNC_0(VAR_1, VAR_2->vm_end);
}

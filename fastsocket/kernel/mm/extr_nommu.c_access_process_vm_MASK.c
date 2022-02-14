
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {unsigned long vm_end; int vm_flags; } ;
struct task_struct {int dummy; } ;
struct mm_struct {int mmap_sem; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (void*,void*,int) ;
 scalar_t__ FUNC_1 (void*,void*,int) ;
 int FUNC_2 (int *) ;
 struct vm_area_struct* FUNC_3 (struct mm_struct*,unsigned long) ;
 struct mm_struct* FUNC_4 (struct task_struct*) ;
 int FUNC_5 (struct mm_struct*) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct task_struct *VAR_2, unsigned long VAR_3, void *VAR_4, int VAR_5, int VAR_6)
{
 struct vm_area_struct *VAR_7;
 struct mm_struct *VAR_8;

 if (VAR_3 + VAR_5 < VAR_3)
  return 0;

 VAR_8 = FUNC_4(VAR_2);
 if (!VAR_8)
  return 0;

 FUNC_2(&VAR_8->mmap_sem);


 VAR_7 = FUNC_3(VAR_8, VAR_3);
 if (VAR_7) {

  if (VAR_3 + VAR_5 >= VAR_7->vm_end)
   VAR_5 = VAR_7->vm_end - VAR_3;


  if (VAR_6 && VAR_7->vm_flags & VAR_1)
   VAR_5 -= FUNC_1((void *) VAR_3, VAR_4, VAR_5);
  else if (!VAR_6 && VAR_7->vm_flags & VAR_0)
   VAR_5 -= FUNC_0(VAR_4, (void *) VAR_3, VAR_5);
  else
   VAR_5 = 0;
 } else {
  VAR_5 = 0;
 }

 FUNC_6(&VAR_8->mmap_sem);
 FUNC_5(VAR_8);
 return VAR_5;
}

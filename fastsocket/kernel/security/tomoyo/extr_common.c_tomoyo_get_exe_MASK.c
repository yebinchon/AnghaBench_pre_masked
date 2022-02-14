
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vm_area_struct {int vm_flags; TYPE_1__* vm_file; struct vm_area_struct* vm_next; } ;
struct mm_struct {int mmap_sem; struct vm_area_struct* mmap; } ;
struct TYPE_4__ {struct mm_struct* mm; } ;
struct TYPE_3__ {int f_path; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (int *) ;
 char* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static const char *FUNC_3(void)
{
 struct mm_struct *VAR_2 = VAR_1->mm;
 struct vm_area_struct *VAR_3;
 const char *VAR_4 = ((void*)0);

 if (!VAR_2)
  return ((void*)0);
 FUNC_0(&VAR_2->mmap_sem);
 for (VAR_3 = VAR_2->mmap; VAR_3; VAR_3 = VAR_3->vm_next) {
  if ((VAR_3->vm_flags & VAR_0) && VAR_3->vm_file) {
   VAR_4 = FUNC_1(&VAR_3->vm_file->f_path);
   break;
  }
 }
 FUNC_2(&VAR_2->mmap_sem);
 return VAR_4;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vm_area_struct {int vm_flags; } ;
struct TYPE_4__ {TYPE_1__* mm; } ;
struct TYPE_3__ {int mmap_sem; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (unsigned long,int,int ) ;
 TYPE_2__* VAR_5 ;
 int FUNC_1 (int *) ;
 struct vm_area_struct* FUNC_2 (TYPE_1__*,unsigned long) ;
 int FUNC_3 (int *) ;

void *FUNC_4(unsigned long VAR_6)
{
 void *VAR_7;

 VAR_7 = FUNC_0(VAR_6, VAR_0 | VAR_3 | VAR_4,
   VAR_1);
 if (VAR_7) {
  struct vm_area_struct *VAR_8;

  FUNC_1(&VAR_5->mm->mmap_sem);
  VAR_8 = FUNC_2(VAR_5->mm, (unsigned long)VAR_7);
  if (VAR_8)
   VAR_8->vm_flags |= VAR_2;
  FUNC_3(&VAR_5->mm->mmap_sem);
 }

 return VAR_7;
}

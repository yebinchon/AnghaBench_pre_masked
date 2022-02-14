
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vm_area_struct {unsigned int vm_flags; int vm_end; int vm_start; struct vm_area_struct* vm_next; } ;
struct TYPE_4__ {TYPE_1__* mm; } ;
struct TYPE_3__ {unsigned int def_flags; struct vm_area_struct* mmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 TYPE_2__* VAR_3 ;
 int FUNC_0 (struct vm_area_struct*,struct vm_area_struct**,int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_1(int VAR_4)
{
 struct vm_area_struct * VAR_5, * VAR_6 = ((void*)0);
 unsigned int VAR_7 = 0;

 if (VAR_4 & VAR_1)
  VAR_7 = VAR_2;
 VAR_3->mm->def_flags = VAR_7;
 if (VAR_4 == VAR_1)
  goto out;

 for (VAR_5 = VAR_3->mm->mmap; VAR_5 ; VAR_5 = VAR_6->vm_next) {
  unsigned int VAR_8;

  VAR_8 = VAR_5->vm_flags | VAR_2;
  if (!(VAR_4 & VAR_0))
   VAR_8 &= ~VAR_2;


  FUNC_0(VAR_5, &VAR_6, VAR_5->vm_start, VAR_5->vm_end, VAR_8);
 }
out:
 return 0;
}

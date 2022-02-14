
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {unsigned long vm_start; unsigned long vm_end; int vm_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct vm_area_struct*,unsigned long,unsigned long,int *) ;

int FUNC_1(struct vm_area_struct *VAR_1, unsigned long VAR_2,
  unsigned long VAR_3)
{
 if (VAR_2 < VAR_1->vm_start || VAR_2 + VAR_3 > VAR_1->vm_end ||
       !(VAR_1->vm_flags & VAR_0))
  return -1;
 FUNC_0(VAR_1, VAR_2, VAR_3, ((void*)0));
 return 0;
}

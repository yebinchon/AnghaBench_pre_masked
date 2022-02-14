
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {unsigned int vm_end; unsigned int vm_start; int vm_flags; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;

int FUNC_0(struct vm_area_struct *VAR_3, void *VAR_4,
   unsigned long VAR_5)
{
 unsigned int VAR_6 = VAR_3->vm_end - VAR_3->vm_start;

 if (!(VAR_3->vm_flags & VAR_2))
  return -VAR_0;

 VAR_3->vm_start = (unsigned long)(VAR_4 + (VAR_5 << VAR_1));
 VAR_3->vm_end = VAR_3->vm_start + VAR_6;

 return 0;
}

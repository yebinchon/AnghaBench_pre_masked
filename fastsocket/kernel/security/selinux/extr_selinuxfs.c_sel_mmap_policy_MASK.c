
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_flags; int * vm_ops; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

int FUNC_0(struct file *VAR_6, struct vm_area_struct *VAR_7)
{
 if (VAR_7->vm_flags & VAR_3) {

  VAR_7->vm_flags &= ~VAR_1;

  if (VAR_7->vm_flags & VAR_4)
   return -VAR_0;
 }

 VAR_7->vm_flags |= VAR_2;
 VAR_7->vm_ops = &VAR_5;

 return 0;
}

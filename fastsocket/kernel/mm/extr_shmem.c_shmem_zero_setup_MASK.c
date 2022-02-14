
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_flags; int * vm_ops; struct file* vm_file; scalar_t__ vm_start; scalar_t__ vm_end; } ;
struct file {int dummy; } ;
typedef scalar_t__ loff_t ;


 scalar_t__ FUNC_0 (struct file*) ;
 int FUNC_1 (struct file*) ;
 int VAR_0 ;
 int FUNC_2 (struct file*) ;
 struct file* FUNC_3 (char*,scalar_t__,int ) ;
 int VAR_1 ;

int FUNC_4(struct vm_area_struct *VAR_2)
{
 struct file *VAR_3;
 loff_t VAR_4 = VAR_2->vm_end - VAR_2->vm_start;

 VAR_3 = FUNC_3("dev/zero", VAR_4, VAR_2->vm_flags);
 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);

 if (VAR_2->vm_file)
  FUNC_2(VAR_2->vm_file);
 VAR_2->vm_file = VAR_3;
 VAR_2->vm_ops = &VAR_1;
 VAR_2->vm_flags |= VAR_0;
 return 0;
}

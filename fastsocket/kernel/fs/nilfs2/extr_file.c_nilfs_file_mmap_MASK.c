
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_flags; int * vm_ops; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct file*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(struct file *VAR_2, struct vm_area_struct *VAR_3)
{
 FUNC_0(VAR_2);
 VAR_3->vm_ops = &VAR_1;
 VAR_3->vm_flags |= VAR_0;
 return 0;
}

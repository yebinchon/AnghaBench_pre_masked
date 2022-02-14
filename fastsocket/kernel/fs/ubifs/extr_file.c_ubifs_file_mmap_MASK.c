
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int * vm_ops; } ;
struct file {int dummy; } ;


 int FUNC_0 (struct file*,struct vm_area_struct*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(struct file *VAR_1, struct vm_area_struct *VAR_2)
{
 int VAR_3;


 VAR_3 = FUNC_0(VAR_1, VAR_2);
 if (VAR_3)
  return VAR_3;
 VAR_2->vm_ops = &VAR_0;
 return 0;
}

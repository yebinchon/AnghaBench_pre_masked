
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_start; } ;
struct task_struct {int mm; } ;
struct seq_file {scalar_t__ count; scalar_t__ size; int version; struct proc_maps_private* private; } ;
struct proc_maps_private {struct task_struct* task; } ;


 struct vm_area_struct* FUNC_0 (int ) ;
 int FUNC_1 (struct seq_file*,struct vm_area_struct*) ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_0, void *VAR_1)
{
 struct vm_area_struct *VAR_2 = VAR_1;
 struct proc_maps_private *VAR_3 = VAR_0->private;
 struct task_struct *VAR_4 = VAR_3->task;

 FUNC_1(VAR_0, VAR_2);

 if (VAR_0->count < VAR_0->size)
  VAR_0->version = (VAR_2 != FUNC_0(VAR_4->mm))
   ? VAR_2->vm_start : 0;
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {struct proc_maps_private* private; } ;
struct proc_maps_private {TYPE_1__* task; } ;
struct mm_struct {int mmap_sem; } ;
struct TYPE_2__ {struct mm_struct* mm; } ;


 int FUNC_0 (struct mm_struct*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct seq_file *VAR_0, void *VAR_1)
{
 struct proc_maps_private *VAR_2 = VAR_0->private;

 if (VAR_2->task) {
  struct mm_struct *VAR_3 = VAR_2->task->mm;
  FUNC_2(&VAR_3->mmap_sem);
  FUNC_0(VAR_3);
  FUNC_1(VAR_2->task);
 }
}

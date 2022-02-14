
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int dummy; } ;
struct seq_file {struct proc_maps_private* private; } ;
struct proc_maps_private {scalar_t__ task; } ;


 int FUNC_0 (struct vm_area_struct*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct proc_maps_private*,struct vm_area_struct*) ;

__attribute__((used)) static void FUNC_3(struct seq_file *VAR_0, void *VAR_1)
{
 struct proc_maps_private *VAR_2 = VAR_0->private;
 struct vm_area_struct *VAR_3 = VAR_1;

 if (!FUNC_0(VAR_3))
  FUNC_2(VAR_2, VAR_3);
 if (VAR_2->task)
  FUNC_1(VAR_2->task);
}

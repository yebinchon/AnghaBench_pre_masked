
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_operations {int dummy; } ;
struct seq_file {struct proc_maps_private* private; } ;
struct proc_maps_private {int pid; } ;
struct inode {int dummy; } ;
struct file {struct seq_file* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct proc_maps_private*) ;
 struct proc_maps_private* FUNC_1 (int,int ) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct file*,struct seq_operations const*) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_2, struct file *VAR_3,
   const struct seq_operations *VAR_4)
{
 struct proc_maps_private *VAR_5;
 int VAR_6 = -VAR_0;
 VAR_5 = FUNC_1(sizeof(*VAR_5), VAR_1);
 if (VAR_5) {
  VAR_5->pid = FUNC_2(VAR_2);
  VAR_6 = FUNC_3(VAR_3, VAR_4);
  if (!VAR_6) {
   struct seq_file *VAR_7 = VAR_3->private_data;
   VAR_7->private = VAR_5;
  } else {
   FUNC_0(VAR_5);
  }
 }
 return VAR_6;
}

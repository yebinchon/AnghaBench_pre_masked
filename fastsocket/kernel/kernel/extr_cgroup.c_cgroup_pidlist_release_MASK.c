
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {struct cgroup_pidlist* private; } ;
struct inode {int dummy; } ;
struct file {int f_mode; scalar_t__ private_data; } ;
struct cgroup_pidlist {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct cgroup_pidlist*) ;
 int FUNC_1 (struct inode*,struct file*) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_1, struct file *VAR_2)
{
 struct cgroup_pidlist *VAR_3;
 if (!(VAR_2->f_mode & VAR_0))
  return 0;




 VAR_3 = ((struct seq_file *)VAR_2->private_data)->private;
 FUNC_0(VAR_3);
 return FUNC_1(VAR_1, VAR_2);
}

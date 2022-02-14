
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int comm; } ;
struct seq_file {struct inode* private; } ;
struct inode {int dummy; } ;


 int VAR_0 ;
 struct task_struct* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct task_struct*) ;
 int FUNC_2 (struct seq_file*,char*,int ) ;
 int FUNC_3 (struct task_struct*) ;
 int FUNC_4 (struct task_struct*) ;

__attribute__((used)) static int FUNC_5(struct seq_file *VAR_1, void *VAR_2)
{
 struct inode *VAR_3 = VAR_1->private;
 struct task_struct *VAR_4;

 VAR_4 = FUNC_0(VAR_3);
 if (!VAR_4)
  return -VAR_0;

 FUNC_3(VAR_4);
 FUNC_2(VAR_1, "%s\n", VAR_4->comm);
 FUNC_4(VAR_4);

 FUNC_1(VAR_4);

 return 0;
}

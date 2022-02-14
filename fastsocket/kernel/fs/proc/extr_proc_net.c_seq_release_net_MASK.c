
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct inode {int dummy; } ;
struct file {struct seq_file* private_data; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct seq_file*) ;
 int FUNC_2 (struct inode*,struct file*) ;

int FUNC_3(struct inode *VAR_0, struct file *VAR_1)
{
 struct seq_file *VAR_2;

 VAR_2 = VAR_1->private_data;

 FUNC_0(FUNC_1(VAR_2));
 FUNC_2(VAR_0, VAR_1);
 return 0;
}

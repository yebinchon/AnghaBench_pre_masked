
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {struct inode* private; } ;
struct inode {int dummy; } ;
struct file {struct seq_file* private_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct file*,int ,int *) ;

__attribute__((used)) static int FUNC_1(struct inode *VAR_1, struct file *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_2, VAR_0, ((void*)0));
 if (!VAR_3) {
  struct seq_file *VAR_4 = VAR_2->private_data;

  VAR_4->private = VAR_1;
 }
 return VAR_3;
}

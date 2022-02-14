
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {struct gcov_iterator* private; } ;
struct inode {int dummy; } ;
struct gcov_iterator {int dummy; } ;
struct gcov_info {int dummy; } ;
struct file {struct seq_file* private_data; } ;


 int FUNC_0 (struct gcov_info*) ;
 int FUNC_1 (struct gcov_iterator*) ;
 struct gcov_info* FUNC_2 (struct gcov_iterator*) ;
 int FUNC_3 (struct inode*,struct file*) ;

__attribute__((used)) static int
FUNC_4(struct inode *VAR_0, struct file *VAR_1)
{
 struct gcov_iterator *VAR_2;
 struct gcov_info *VAR_3;
 struct seq_file *VAR_4;

 VAR_4 = VAR_1->private_data;
 VAR_2 = VAR_4->private;
 VAR_3 = FUNC_2(VAR_2);
 FUNC_1(VAR_2);
 FUNC_0(VAR_3);
 FUNC_3(VAR_0, VAR_1);

 return (0);
}

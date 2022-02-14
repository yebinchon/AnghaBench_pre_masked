
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {struct gcov_iterator* private; } ;
struct inode {struct gcov_node* i_private; } ;
struct gcov_node {int dummy; } ;
struct gcov_iterator {int dummy; } ;
struct gcov_info {int dummy; } ;
struct file {struct seq_file* private_data; } ;


 int VAR_0 ;
 struct gcov_info* FUNC_0 (int ) ;
 int FUNC_1 (struct gcov_info*) ;
 int FUNC_2 (struct gcov_iterator*) ;
 struct gcov_iterator* FUNC_3 (struct gcov_info*) ;
 int VAR_1 ;
 int FUNC_4 (struct gcov_node*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_2 ;
 int FUNC_7 (struct file*,int *) ;

__attribute__((used)) static int FUNC_8(struct inode *VAR_3, struct file *VAR_4)
{
 struct gcov_node *VAR_5 = VAR_3->i_private;
 struct gcov_iterator *VAR_6;
 struct seq_file *VAR_7;
 struct gcov_info *VAR_8;
 int VAR_9 = -VAR_0;

 FUNC_5(&VAR_2);




 VAR_8 = FUNC_0(FUNC_4(VAR_5));
 if (!VAR_8)
  goto out_unlock;
 VAR_6 = FUNC_3(VAR_8);
 if (!VAR_6)
  goto err_free_info;
 VAR_9 = FUNC_7(VAR_4, &VAR_1);
 if (VAR_9)
  goto err_free_iter_info;
 VAR_7 = VAR_4->private_data;
 VAR_7->private = VAR_6;
out_unlock:
 FUNC_6(&VAR_2);
 return VAR_9;

err_free_iter_info:
 FUNC_2(VAR_6);
err_free_info:
 FUNC_1(VAR_8);
 goto out_unlock;
}

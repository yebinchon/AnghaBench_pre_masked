
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {int private; } ;
struct TYPE_2__ {int prop; } ;
struct op_inode_info {scalar_t__ type; TYPE_1__ u; } ;
struct inode {int dummy; } ;
struct file {struct seq_file* private_data; } ;


 int FUNC_0 (int) ;
 struct op_inode_info* FUNC_1 (struct inode*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct file*,int *) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_2, struct file *VAR_3)
{
 struct op_inode_info *VAR_4 = FUNC_1(VAR_2);
 int VAR_5;

 FUNC_0(VAR_4->type != VAR_0);

 VAR_5 = FUNC_2(VAR_3, &VAR_1);
 if (!VAR_5) {
  struct seq_file *VAR_6 = VAR_3->private_data;
  VAR_6->private = VAR_4->u.prop;
 }
 return VAR_5;
}

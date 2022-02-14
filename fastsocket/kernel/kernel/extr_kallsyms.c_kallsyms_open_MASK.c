
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {struct kallsym_iter* private; } ;
struct kallsym_iter {int dummy; } ;
struct inode {int dummy; } ;
struct file {scalar_t__ private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct kallsym_iter*) ;
 struct kallsym_iter* FUNC_1 (int,int ) ;
 int FUNC_2 (struct kallsym_iter*,int ) ;
 int FUNC_3 (struct file*,int *) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_3, struct file *VAR_4)
{





 struct kallsym_iter *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_1(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;
 FUNC_2(VAR_5, 0);

 VAR_6 = FUNC_3(VAR_4, &VAR_2);
 if (VAR_6 == 0)
  ((struct seq_file *)VAR_4->private_data)->private = VAR_5;
 else
  FUNC_0(VAR_5);
 return VAR_6;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_private; } ;
struct file {int private_data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

int FUNC_0(struct inode *VAR_2, struct file *VAR_3)
{
 if (VAR_1)
  return -VAR_0;

 VAR_3->private_data = VAR_2->i_private;
 return 0;
}

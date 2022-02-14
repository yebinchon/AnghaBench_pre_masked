
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_oss_devinfo {int dummy; } ;
struct file {struct seq_oss_devinfo* private_data; } ;
typedef int poll_table ;


 unsigned int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 unsigned int FUNC_1 (struct seq_oss_devinfo*,struct file*,int *) ;

__attribute__((used)) static unsigned int
FUNC_2(struct file *VAR_1, poll_table * VAR_2)
{
 struct seq_oss_devinfo *VAR_3;
 VAR_3 = VAR_1->private_data;
 if (FUNC_0(!VAR_3))
  return -VAR_0;
 return FUNC_1(VAR_3, VAR_1, VAR_2);
}

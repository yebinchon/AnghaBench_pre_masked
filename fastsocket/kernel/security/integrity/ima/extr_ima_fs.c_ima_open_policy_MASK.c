
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {int f_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_3 ;

int FUNC_1(struct inode * VAR_4, struct file * VAR_5)
{

 if (!(VAR_5->f_flags & VAR_2))
  return -VAR_0;
 if (FUNC_0(&VAR_3))
  return 0;
 return -VAR_1;
}

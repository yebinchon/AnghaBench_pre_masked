
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {int f_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_1(struct inode *VAR_4, struct file *VAR_5)
{
 if (VAR_5->f_mode & VAR_2)
  return -VAR_1;
 if (VAR_3)
  return -VAR_0;

 VAR_3 = 1;

 FUNC_0();

 return 0;
}

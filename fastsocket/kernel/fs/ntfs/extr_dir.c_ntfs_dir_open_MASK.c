
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct inode*) ;

__attribute__((used)) static int FUNC_1(struct inode *VAR_2, struct file *VAR_3)
{
 if (sizeof(unsigned long) < 8) {
  if (FUNC_0(VAR_2) > VAR_1)
   return -VAR_0;
 }
 return 0;
}

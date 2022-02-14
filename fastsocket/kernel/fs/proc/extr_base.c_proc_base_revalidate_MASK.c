
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct nameidata {int dummy; } ;
struct inode {int dummy; } ;
struct dentry {struct inode* d_inode; } ;


 int FUNC_0 (struct dentry*) ;
 struct task_struct* FUNC_1 (struct inode*) ;
 int FUNC_2 (struct task_struct*) ;

__attribute__((used)) static int FUNC_3(struct dentry *VAR_0, struct nameidata *VAR_1)
{
 struct inode *VAR_2 = VAR_0->d_inode;
 struct task_struct *VAR_3 = FUNC_1(VAR_2);
 if (VAR_3) {
  FUNC_2(VAR_3);
  return 1;
 }
 FUNC_0(VAR_0);
 return 0;
}

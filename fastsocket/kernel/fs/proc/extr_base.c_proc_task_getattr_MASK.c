
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsmount {int dummy; } ;
struct task_struct {int dummy; } ;
struct kstat {int nlink; } ;
struct inode {int dummy; } ;
struct dentry {struct inode* d_inode; } ;


 int FUNC_0 (struct inode*,struct kstat*) ;
 scalar_t__ FUNC_1 (struct task_struct*) ;
 struct task_struct* FUNC_2 (struct inode*) ;
 int FUNC_3 (struct task_struct*) ;

__attribute__((used)) static int FUNC_4(struct vfsmount *VAR_0, struct dentry *VAR_1, struct kstat *VAR_2)
{
 struct inode *VAR_3 = VAR_1->d_inode;
 struct task_struct *VAR_4 = FUNC_2(VAR_3);
 FUNC_0(VAR_3, VAR_2);

 if (VAR_4) {
  VAR_2->nlink += FUNC_1(VAR_4);
  FUNC_3(VAR_4);
 }

 return 0;
}

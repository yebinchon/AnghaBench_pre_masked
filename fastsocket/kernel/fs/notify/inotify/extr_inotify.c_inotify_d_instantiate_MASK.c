
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct dentry {int d_lock; int d_flags; scalar_t__ d_inode; struct dentry* d_parent; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct dentry *VAR_1, struct inode *VAR_2)
{
 struct dentry *VAR_3;

 if (!VAR_2)
  return;

 FUNC_1(&VAR_1->d_lock);
 VAR_3 = VAR_1->d_parent;
 if (VAR_3->d_inode && FUNC_0(VAR_3->d_inode))
  VAR_1->d_flags |= VAR_0;
 FUNC_2(&VAR_1->d_lock);
}

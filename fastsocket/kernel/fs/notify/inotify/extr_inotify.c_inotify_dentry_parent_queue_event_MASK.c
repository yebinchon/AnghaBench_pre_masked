
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct inode {int dummy; } ;
struct dentry {int d_flags; int d_lock; struct inode* d_inode; struct dentry* d_parent; } ;


 int VAR_0 ;
 int FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct inode*,int ,int ,char const*,struct inode*) ;
 scalar_t__ FUNC_3 (struct inode*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct dentry *VAR_1, u32 VAR_2,
           u32 VAR_3, const char *VAR_4)
{
 struct dentry *VAR_5;
 struct inode *VAR_6;

 if (!(VAR_1->d_flags & VAR_0))
  return;

 FUNC_4(&VAR_1->d_lock);
 VAR_5 = VAR_1->d_parent;
 VAR_6 = VAR_5->d_inode;

 if (FUNC_3(VAR_6)) {
  FUNC_0(VAR_5);
  FUNC_5(&VAR_1->d_lock);
  FUNC_2(VAR_6, VAR_2, VAR_3, VAR_4,
       VAR_1->d_inode);
  FUNC_1(VAR_5);
 } else
  FUNC_5(&VAR_1->d_lock);
}

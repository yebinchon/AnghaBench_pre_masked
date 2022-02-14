
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int d_flags; int d_inode; struct dentry* d_parent; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

void FUNC_1(struct dentry *VAR_1)
{
 struct dentry *VAR_2;

 VAR_2 = VAR_1->d_parent;
 if (FUNC_0(VAR_2->d_inode))
  VAR_1->d_flags |= VAR_0;
 else
  VAR_1->d_flags &= ~VAR_0;
}

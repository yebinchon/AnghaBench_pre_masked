
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct dentry {scalar_t__ d_inode; } ;
struct TYPE_2__ {int (* inode_rename ) (struct inode*,struct dentry*,struct inode*,struct dentry*) ;} ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (struct inode*,struct dentry*,struct inode*,struct dentry*) ;
 scalar_t__ FUNC_2 (int) ;

int FUNC_3(struct inode *VAR_1, struct dentry *VAR_2,
      struct inode *VAR_3, struct dentry *VAR_4)
{
        if (FUNC_2(FUNC_0(VAR_2->d_inode) ||
            (VAR_4->d_inode && FUNC_0(VAR_4->d_inode))))
  return 0;
 return VAR_0->inode_rename(VAR_1, VAR_2,
        VAR_3, VAR_4);
}

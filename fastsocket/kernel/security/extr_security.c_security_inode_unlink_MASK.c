
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct dentry {int d_inode; } ;
struct TYPE_2__ {int (* inode_unlink ) (struct inode*,struct dentry*) ;} ;


 int FUNC_0 (int ) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (struct inode*,struct dentry*) ;
 scalar_t__ FUNC_2 (int ) ;

int FUNC_3(struct inode *VAR_1, struct dentry *VAR_2)
{
 if (FUNC_2(FUNC_0(VAR_2->d_inode)))
  return 0;
 return VAR_0->inode_unlink(VAR_1, VAR_2);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct dentry {int dummy; } ;
typedef int dev_t ;
struct TYPE_2__ {int (* inode_mknod ) (struct inode*,struct dentry*,int,int ) ;} ;


 int FUNC_0 (struct inode*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (struct inode*,struct dentry*,int,int ) ;
 scalar_t__ FUNC_2 (int ) ;

int FUNC_3(struct inode *VAR_1, struct dentry *VAR_2, int VAR_3, dev_t VAR_4)
{
 if (FUNC_2(FUNC_0(VAR_1)))
  return 0;
 return VAR_0->inode_mknod(VAR_1, VAR_2, VAR_3, VAR_4);
}

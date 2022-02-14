
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vfsmount {int dummy; } ;
struct dentry {int d_inode; } ;
struct TYPE_2__ {int (* inode_getattr ) (struct vfsmount*,struct dentry*) ;} ;


 int FUNC_0 (int ) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (struct vfsmount*,struct dentry*) ;
 scalar_t__ FUNC_2 (int ) ;

int FUNC_3(struct vfsmount *VAR_1, struct dentry *VAR_2)
{
 if (FUNC_2(FUNC_0(VAR_2->d_inode)))
  return 0;
 return VAR_0->inode_getattr(VAR_1, VAR_2);
}

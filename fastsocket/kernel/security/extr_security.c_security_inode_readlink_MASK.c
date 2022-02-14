
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dentry {int d_inode; } ;
struct TYPE_2__ {int (* inode_readlink ) (struct dentry*) ;} ;


 int FUNC_0 (int ) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (struct dentry*) ;
 scalar_t__ FUNC_2 (int ) ;

int FUNC_3(struct dentry *VAR_1)
{
 if (FUNC_2(FUNC_0(VAR_1->d_inode)))
  return 0;
 return VAR_0->inode_readlink(VAR_1);
}

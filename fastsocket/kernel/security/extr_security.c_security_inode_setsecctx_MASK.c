
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct dentry {int dummy; } ;
struct TYPE_2__ {int (* inode_setsecctx ) (struct dentry*,void*,int ) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct dentry*,void*,int ) ;

int FUNC_1(struct dentry *VAR_1, void *VAR_2, u32 VAR_3)
{
 return VAR_0->inode_setsecctx(VAR_1, VAR_2, VAR_3);
}

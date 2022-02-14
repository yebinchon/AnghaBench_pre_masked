
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct inode {int dummy; } ;
struct TYPE_2__ {int (* inode_notifysecctx ) (struct inode*,void*,int ) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct inode*,void*,int ) ;

int FUNC_1(struct inode *VAR_1, void *VAR_2, u32 VAR_3)
{
 return VAR_0->inode_notifysecctx(VAR_1, VAR_2, VAR_3);
}

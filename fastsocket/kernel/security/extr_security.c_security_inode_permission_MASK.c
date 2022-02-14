
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct TYPE_2__ {int (* inode_permission ) (struct inode*,int) ;} ;


 int FUNC_0 (struct inode*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (struct inode*,int) ;
 scalar_t__ FUNC_2 (int ) ;

int FUNC_3(struct inode *VAR_1, int VAR_2)
{
 if (FUNC_2(FUNC_0(VAR_1)))
  return 0;
 return VAR_0->inode_permission(VAR_1, VAR_2);
}

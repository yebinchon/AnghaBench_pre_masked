
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct TYPE_2__ {int (* inode_delete ) (struct inode*) ;} ;


 int FUNC_0 (struct inode*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (int ) ;

void FUNC_3(struct inode *VAR_1)
{
 if (FUNC_2(FUNC_0(VAR_1)))
  return;
 VAR_0->inode_delete(VAR_1);
}

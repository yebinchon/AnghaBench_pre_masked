
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ ili_lock_flags; int ili_item; } ;
typedef TYPE_1__ xfs_inode_log_item_t ;
struct xfs_trans {int dummy; } ;
struct xfs_inode {struct xfs_trans* i_transp; TYPE_1__* i_itemp; int i_mount; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct xfs_inode*,int ) ;
 int FUNC_2 (struct xfs_inode*,int ) ;
 int FUNC_3 (struct xfs_trans*,int *) ;
 int FUNC_4 (struct xfs_inode*) ;

void
FUNC_5(
 struct xfs_trans *VAR_1,
 struct xfs_inode *VAR_2)
{
 xfs_inode_log_item_t *VAR_3;

 FUNC_0(VAR_2->i_transp == ((void*)0));
 FUNC_0(FUNC_2(VAR_2, VAR_0));
 if (VAR_2->i_itemp == ((void*)0))
  FUNC_1(VAR_2, VAR_2->i_mount);
 VAR_3 = VAR_2->i_itemp;
 FUNC_0(VAR_3->ili_lock_flags == 0);




 FUNC_3(VAR_1, &VAR_3->ili_item);

 FUNC_4(VAR_2);





 VAR_2->i_transp = VAR_1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint ;
struct xfs_trans {int dummy; } ;
struct xfs_inode {TYPE_1__* i_itemp; } ;
struct TYPE_2__ {int ili_lock_flags; } ;


 int FUNC_0 (struct xfs_inode*) ;
 int FUNC_1 (struct xfs_trans*,struct xfs_inode*) ;

void
FUNC_2(
 struct xfs_trans *VAR_0,
 struct xfs_inode *VAR_1,
 uint VAR_2)
{
 FUNC_1(VAR_0, VAR_1);
 FUNC_0(VAR_1);
 VAR_1->i_itemp->ili_lock_flags = VAR_2;
}

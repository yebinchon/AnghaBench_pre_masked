
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_buf {int dummy; } ;
struct xfs_btree_cur {int bc_flags; } ;
struct xfs_btree_block {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct xfs_btree_cur*,struct xfs_btree_block*,int,struct xfs_buf*) ;
 int FUNC_1 (struct xfs_btree_cur*,struct xfs_btree_block*,int,struct xfs_buf*) ;

int
FUNC_2(
 struct xfs_btree_cur *VAR_1,
 struct xfs_btree_block *VAR_2,
 int VAR_3,
 struct xfs_buf *VAR_4)
{
 if (VAR_1->bc_flags & VAR_0)
  return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);
 else
  return FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4);
}

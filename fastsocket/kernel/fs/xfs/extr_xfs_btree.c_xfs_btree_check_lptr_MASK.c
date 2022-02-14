
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ xfs_dfsbno_t ;
struct xfs_btree_cur {int bc_mp; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int) ;

int
FUNC_2(
 struct xfs_btree_cur *VAR_1,
 xfs_dfsbno_t VAR_2,
 int VAR_3)
{
 FUNC_1(
  VAR_3 > 0 &&
  VAR_2 != VAR_0 &&
  FUNC_0(VAR_1->bc_mp, VAR_2));
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int xfs_extlen_t ;
typedef int xfs_agblock_t ;
struct TYPE_3__ {int ar_blockcount; int ar_startblock; } ;
struct TYPE_4__ {TYPE_1__ a; } ;
struct xfs_btree_cur {TYPE_2__ bc_rec; } ;


 int VAR_0 ;
 int FUNC_0 (struct xfs_btree_cur*,int ,int*) ;

int
FUNC_1(
 struct xfs_btree_cur *VAR_1,
 xfs_agblock_t VAR_2,
 xfs_extlen_t VAR_3,
 int *VAR_4)
{
 VAR_1->bc_rec.a.ar_startblock = VAR_2;
 VAR_1->bc_rec.a.ar_blockcount = VAR_3;
 return FUNC_0(VAR_1, VAR_0, VAR_4);
}

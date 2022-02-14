
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* xfs_extlen_t ;
typedef void* xfs_agblock_t ;
struct TYPE_2__ {int ar_blockcount; int ar_startblock; } ;
union xfs_btree_rec {TYPE_1__ alloc; } ;
struct xfs_btree_cur {int dummy; } ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (struct xfs_btree_cur*,union xfs_btree_rec**,int*) ;

int
FUNC_2(
 struct xfs_btree_cur *VAR_0,
 xfs_agblock_t *VAR_1,
 xfs_extlen_t *VAR_2,
 int *VAR_3)
{
 union xfs_btree_rec *VAR_4;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_0, &VAR_4, VAR_3);
 if (!VAR_5 && *VAR_3 == 1) {
  *VAR_1 = FUNC_0(VAR_4->alloc.ar_startblock);
  *VAR_2 = FUNC_0(VAR_4->alloc.ar_blockcount);
 }
 return VAR_5;
}

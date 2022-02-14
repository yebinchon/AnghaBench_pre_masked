
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfs_fsblock_t ;
typedef int xfs_extnum_t ;
struct xfs_btree_cur {int dummy; } ;
struct xfs_bmap_free {int dummy; } ;
struct xfs_bmalloca {int stack_switch; } ;
struct xfs_bmalloc_work {int flags; int* nallocs; int* logflags; int result; int work; struct xfs_bmap_free* flist; int * firstblock; struct xfs_btree_cur** cur; int * lastx; struct xfs_bmalloca* bma; int * done; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct xfs_bmalloca*,int *,struct xfs_btree_cur**,int *,struct xfs_bmap_free*,int,int*,int*) ;
 int VAR_0 ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;
 int VAR_1 ;
 int VAR_2 ;

int
FUNC_5(
 struct xfs_bmalloca *VAR_3,
 xfs_extnum_t *VAR_4,
 struct xfs_btree_cur **VAR_5,
 xfs_fsblock_t *VAR_6,
 struct xfs_bmap_free *VAR_7,
 int VAR_8,
 int *VAR_9,
 int *VAR_10)
{
 FUNC_0(VAR_0);
 struct xfs_bmalloc_work VAR_11;

 if (!VAR_3->stack_switch)
  return FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7,
         VAR_8, VAR_9, VAR_10);

 VAR_11.done = &VAR_0;
 VAR_11.bma = VAR_3;
 VAR_11.lastx = VAR_4;
 VAR_11.cur = VAR_5;
 VAR_11.firstblock = VAR_6;
 VAR_11.flist = VAR_7;
 VAR_11.flags = VAR_8;
 VAR_11.nallocs = VAR_9;
 VAR_11.logflags = VAR_10;
 FUNC_1(&VAR_11.work, VAR_2);
 FUNC_3(VAR_1, &VAR_11.work);
 FUNC_4(&VAR_0);
 return VAR_11.result;
}

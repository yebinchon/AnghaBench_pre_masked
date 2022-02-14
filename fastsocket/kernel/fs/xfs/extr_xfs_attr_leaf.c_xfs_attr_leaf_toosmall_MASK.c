
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_9__ ;
typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_12__ ;


struct TYPE_22__ {TYPE_9__* data; } ;
typedef TYPE_5__ xfs_dabuf_t ;
typedef scalar_t__ xfs_dablk_t ;
struct TYPE_17__ {int active; TYPE_7__* blk; } ;
struct TYPE_23__ {int blocksize; TYPE_12__ path; TYPE_12__ altpath; TYPE_4__* args; } ;
typedef TYPE_6__ xfs_da_state_t ;
struct TYPE_24__ {scalar_t__ blkno; TYPE_1__* bp; } ;
typedef TYPE_7__ xfs_da_state_blk_t ;
struct TYPE_25__ {scalar_t__ forw; scalar_t__ back; int magic; } ;
typedef TYPE_8__ xfs_da_blkinfo_t ;
struct TYPE_19__ {int magic; } ;
struct TYPE_20__ {int usedbytes; int count; TYPE_2__ info; } ;
struct TYPE_26__ {TYPE_3__ hdr; } ;
typedef TYPE_9__ xfs_attr_leafblock_t ;
typedef int xfs_attr_leaf_hdr_t ;
typedef int xfs_attr_leaf_entry_t ;
struct TYPE_21__ {int trans; int dp; } ;
struct TYPE_18__ {TYPE_8__* data; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_12__*,TYPE_12__*,int) ;
 int FUNC_4 (int ,TYPE_5__*) ;
 int FUNC_5 (TYPE_6__*,TYPE_12__*,int,int ,int*) ;
 int FUNC_6 (int ,int ,scalar_t__,int,TYPE_5__**,int ) ;

int
FUNC_7(xfs_da_state_t *VAR_2, int *VAR_3)
{
 xfs_attr_leafblock_t *VAR_4;
 xfs_da_state_blk_t *VAR_5;
 xfs_da_blkinfo_t *VAR_6;
 int VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
 xfs_dablk_t VAR_13;
 xfs_dabuf_t *VAR_14;






 VAR_5 = &VAR_2->path.blk[ VAR_2->path.active-1 ];
 VAR_6 = VAR_5->bp->data;
 FUNC_0(FUNC_1(VAR_6->magic) == VAR_1);
 VAR_4 = (xfs_attr_leafblock_t *)VAR_6;
 VAR_7 = FUNC_1(VAR_4->hdr.count);
 VAR_8 = sizeof(xfs_attr_leaf_hdr_t) +
  VAR_7 * sizeof(xfs_attr_leaf_entry_t) +
  FUNC_1(VAR_4->hdr.usedbytes);
 if (VAR_8 > (VAR_2->blocksize >> 1)) {
  *VAR_3 = 0;
  return(0);
 }







 if (VAR_7 == 0) {




  VAR_9 = (VAR_6->forw != 0);
  FUNC_3(&VAR_2->altpath, &VAR_2->path, sizeof(VAR_2->path));
  VAR_10 = FUNC_5(VAR_2, &VAR_2->altpath, VAR_9,
       0, &VAR_11);
  if (VAR_10)
   return(VAR_10);
  if (VAR_11) {
   *VAR_3 = 0;
  } else {
   *VAR_3 = 2;
  }
  return(0);
 }
 VAR_9 = (FUNC_2(VAR_6->forw) < FUNC_2(VAR_6->back));
 for (VAR_12 = 0; VAR_12 < 2; VAR_9 = !VAR_9, VAR_12++) {
  if (VAR_9)
   VAR_13 = FUNC_2(VAR_6->forw);
  else
   VAR_13 = FUNC_2(VAR_6->back);
  if (VAR_13 == 0)
   continue;
  VAR_10 = FUNC_6(VAR_2->args->trans, VAR_2->args->dp,
     VAR_13, -1, &VAR_14, VAR_0);
  if (VAR_10)
   return(VAR_10);
  FUNC_0(VAR_14 != ((void*)0));

  VAR_4 = (xfs_attr_leafblock_t *)VAR_6;
  VAR_7 = FUNC_1(VAR_4->hdr.count);
  VAR_8 = VAR_2->blocksize - (VAR_2->blocksize>>2);
  VAR_8 -= FUNC_1(VAR_4->hdr.usedbytes);
  VAR_4 = VAR_14->data;
  FUNC_0(FUNC_1(VAR_4->hdr.info.magic) == VAR_1);
  VAR_7 += FUNC_1(VAR_4->hdr.count);
  VAR_8 -= FUNC_1(VAR_4->hdr.usedbytes);
  VAR_8 -= VAR_7 * sizeof(xfs_attr_leaf_entry_t);
  VAR_8 -= sizeof(xfs_attr_leaf_hdr_t);
  FUNC_4(VAR_2->args->trans, VAR_14);
  if (VAR_8 >= 0)
   break;
 }
 if (VAR_12 >= 2) {
  *VAR_3 = 0;
  return(0);
 }





 FUNC_3(&VAR_2->altpath, &VAR_2->path, sizeof(VAR_2->path));
 if (VAR_13 < VAR_5->blkno) {
  VAR_10 = FUNC_5(VAR_2, &VAR_2->altpath, VAR_9,
       0, &VAR_11);
 } else {
  VAR_10 = FUNC_5(VAR_2, &VAR_2->path, VAR_9,
       0, &VAR_11);
 }
 if (VAR_10)
  return(VAR_10);
 if (VAR_11) {
  *VAR_3 = 0;
 } else {
  *VAR_3 = 1;
 }
 return(0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int xfs_trans_t ;
typedef int xfs_mount_t ;
struct TYPE_18__ {int * i_mount; } ;
typedef TYPE_3__ xfs_inode_t ;
struct TYPE_19__ {scalar_t__ bestcount; } ;
typedef TYPE_4__ xfs_dir2_leaf_tail_t ;
struct TYPE_16__ {scalar_t__ back; scalar_t__ forw; int magic; } ;
struct TYPE_17__ {scalar_t__ stale; scalar_t__ count; TYPE_1__ info; } ;
struct TYPE_20__ {TYPE_2__ hdr; } ;
typedef TYPE_5__ xfs_dir2_leaf_t ;
typedef scalar_t__ xfs_dir2_db_t ;
struct TYPE_21__ {TYPE_5__* data; } ;
typedef TYPE_6__ xfs_dabuf_t ;
struct TYPE_22__ {int * trans; TYPE_3__* dp; } ;
typedef TYPE_7__ xfs_da_args_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,TYPE_3__*,int ,int,TYPE_6__**,int ) ;
 int FUNC_5 (int *,scalar_t__) ;
 int FUNC_6 (int *,TYPE_6__*) ;
 int FUNC_7 (int *,TYPE_6__*) ;
 TYPE_4__* FUNC_8 (int *,TYPE_5__*) ;

int
FUNC_9(
 xfs_da_args_t *VAR_2,
 xfs_dir2_db_t VAR_3,
 xfs_dabuf_t **VAR_4,
 int VAR_5)
{
 xfs_dabuf_t *VAR_6;
 xfs_inode_t *VAR_7;
 int VAR_8;
 xfs_dir2_leaf_t *VAR_9;
 xfs_dir2_leaf_tail_t *VAR_10;
 xfs_mount_t *VAR_11;
 xfs_trans_t *VAR_12;

 VAR_7 = VAR_2->dp;
 FUNC_0(VAR_7 != ((void*)0));
 VAR_12 = VAR_2->trans;
 VAR_11 = VAR_7->i_mount;
 FUNC_0(VAR_3 >= FUNC_2(VAR_11) &&
        VAR_3 < FUNC_1(VAR_11));



 VAR_8 = FUNC_4(VAR_12, VAR_7, FUNC_5(VAR_11, VAR_3), -1, &VAR_6,
  VAR_0);
 if (VAR_8) {
  return VAR_8;
 }
 FUNC_0(VAR_6 != ((void*)0));
 VAR_9 = VAR_6->data;



 VAR_9->hdr.info.magic = FUNC_3(VAR_5);
 VAR_9->hdr.info.forw = 0;
 VAR_9->hdr.info.back = 0;
 VAR_9->hdr.count = 0;
 VAR_9->hdr.stale = 0;
 FUNC_6(VAR_12, VAR_6);





 if (VAR_5 == VAR_1) {
  VAR_10 = FUNC_8(VAR_11, VAR_9);
  VAR_10->bestcount = 0;
  FUNC_7(VAR_12, VAR_6);
 }
 *VAR_4 = VAR_6;
 return 0;
}

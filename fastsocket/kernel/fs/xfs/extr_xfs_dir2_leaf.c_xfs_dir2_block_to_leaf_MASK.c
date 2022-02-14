
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_45__ TYPE_9__ ;
typedef struct TYPE_44__ TYPE_7__ ;
typedef struct TYPE_43__ TYPE_6__ ;
typedef struct TYPE_42__ TYPE_5__ ;
typedef struct TYPE_41__ TYPE_4__ ;
typedef struct TYPE_40__ TYPE_3__ ;
typedef struct TYPE_39__ TYPE_2__ ;
typedef struct TYPE_38__ TYPE_1__ ;
typedef struct TYPE_37__ TYPE_10__ ;


typedef int xfs_trans_t ;
struct TYPE_40__ {int m_dirblksize; } ;
typedef TYPE_3__ xfs_mount_t ;
struct TYPE_41__ {TYPE_3__* i_mount; } ;
typedef TYPE_4__ xfs_inode_t ;
struct TYPE_42__ {void* bestcount; } ;
typedef TYPE_5__ xfs_dir2_leaf_tail_t ;
struct TYPE_39__ {TYPE_1__* bestfree; void* magic; void* count; void* stale; } ;
struct TYPE_43__ {TYPE_2__ hdr; int ents; } ;
typedef TYPE_6__ xfs_dir2_leaf_t ;
typedef int xfs_dir2_leaf_entry_t ;
typedef scalar_t__ xfs_dir2_db_t ;
typedef int xfs_dir2_data_t ;
typedef int xfs_dir2_data_aoff_t ;
struct TYPE_44__ {int count; int stale; } ;
typedef TYPE_7__ xfs_dir2_block_tail_t ;
typedef TYPE_6__ xfs_dir2_block_t ;
struct TYPE_45__ {TYPE_6__* data; } ;
typedef TYPE_9__ xfs_dabuf_t ;
typedef int xfs_dablk_t ;
struct TYPE_37__ {int * trans; TYPE_4__* dp; } ;
typedef TYPE_10__ xfs_da_args_t ;
typedef int __be16 ;
struct TYPE_38__ {int length; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (void*) ;
 int FUNC_3 (int ) ;
 void* FUNC_4 (int) ;
 void* FUNC_5 (int) ;
 int FUNC_6 (int ,int *,int) ;
 int FUNC_7 (TYPE_10__*) ;
 int FUNC_8 (TYPE_9__*) ;
 int FUNC_9 (TYPE_10__*,int *) ;
 int * FUNC_10 (TYPE_7__*) ;
 TYPE_7__* FUNC_11 (TYPE_3__*,TYPE_6__*) ;
 scalar_t__ FUNC_12 (TYPE_3__*,int ) ;
 int FUNC_13 (TYPE_4__*,TYPE_9__*) ;
 int FUNC_14 (TYPE_3__*,int *,int*) ;
 int FUNC_15 (int *,TYPE_9__*) ;
 int FUNC_16 (int *,TYPE_9__*,int ,int ,int*,int*) ;
 int * FUNC_17 (TYPE_5__*) ;
 int FUNC_18 (TYPE_4__*,TYPE_9__*) ;
 int FUNC_19 (TYPE_10__*,scalar_t__,TYPE_9__**,int ) ;
 int FUNC_20 (int *,TYPE_9__*,int ,int ) ;
 int FUNC_21 (int *,TYPE_9__*,int ,scalar_t__) ;
 TYPE_5__* FUNC_22 (TYPE_3__*,TYPE_6__*) ;

int
FUNC_23(
 xfs_da_args_t *VAR_2,
 xfs_dabuf_t *VAR_3)
{
 __be16 *VAR_4;
 xfs_dablk_t VAR_5;
 xfs_dir2_block_t *VAR_6;
 xfs_dir2_leaf_entry_t *VAR_7;
 xfs_dir2_block_tail_t *VAR_8;
 xfs_inode_t *VAR_9;
 int VAR_10;
 xfs_dabuf_t *VAR_11;
 xfs_dir2_db_t VAR_12;
 xfs_dir2_leaf_t *VAR_13;
 xfs_dir2_leaf_tail_t *VAR_14;
 xfs_mount_t *VAR_15;
 int VAR_16;
 int VAR_17;
 xfs_trans_t *VAR_18;

 FUNC_7(VAR_2);

 VAR_9 = VAR_2->dp;
 VAR_15 = VAR_9->i_mount;
 VAR_18 = VAR_2->trans;





 if ((VAR_10 = FUNC_9(VAR_2, &VAR_5))) {
  return VAR_10;
 }
 VAR_12 = FUNC_12(VAR_15, VAR_5);
 FUNC_0(VAR_12 == FUNC_1(VAR_15));



 if ((VAR_10 = FUNC_19(VAR_2, VAR_12, &VAR_11, VAR_1))) {
  return VAR_10;
 }
 FUNC_0(VAR_11 != ((void*)0));
 VAR_13 = VAR_11->data;
 VAR_6 = VAR_3->data;
 FUNC_13(VAR_9, VAR_3);
 VAR_8 = FUNC_11(VAR_15, VAR_6);
 VAR_7 = FUNC_10(VAR_8);



 VAR_13->hdr.count = FUNC_4(FUNC_3(VAR_8->count));
 VAR_13->hdr.stale = FUNC_4(FUNC_3(VAR_8->stale));




 FUNC_6(VAR_13->ents, VAR_7, FUNC_3(VAR_8->count) * sizeof(xfs_dir2_leaf_entry_t));
 FUNC_21(VAR_18, VAR_11, 0, FUNC_2(VAR_13->hdr.count) - 1);
 VAR_17 = 0;
 VAR_16 = 1;




 FUNC_16(VAR_18, VAR_3,
  (xfs_dir2_data_aoff_t)((char *)VAR_7 - (char *)VAR_6),
  (xfs_dir2_data_aoff_t)((char *)VAR_6 + VAR_15->m_dirblksize -
           (char *)VAR_7),
  &VAR_16, &VAR_17);



 VAR_6->hdr.magic = FUNC_5(VAR_0);
 if (VAR_17)
  FUNC_14(VAR_15, (xfs_dir2_data_t *)VAR_6, &VAR_16);



 VAR_14 = FUNC_22(VAR_15, VAR_13);
 VAR_14->bestcount = FUNC_5(1);
 VAR_4 = FUNC_17(VAR_14);
 VAR_4[0] = VAR_6->hdr.bestfree[0].length;



 if (VAR_16)
  FUNC_15(VAR_18, VAR_3);
 FUNC_18(VAR_9, VAR_11);
 FUNC_13(VAR_9, VAR_3);
 FUNC_20(VAR_18, VAR_11, 0, 0);
 FUNC_8(VAR_11);
 return 0;
}

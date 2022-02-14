
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_6__ ;
typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;


typedef int xfs_trans_t ;
typedef int xfs_mount_t ;
struct TYPE_25__ {int * i_mount; } ;
typedef TYPE_1__ xfs_inode_t ;
typedef int xfs_dir2_sf_hdr_t ;
struct TYPE_26__ {int address; } ;
typedef TYPE_2__ xfs_dir2_leaf_entry_t ;
typedef int xfs_dir2_data_t ;
struct TYPE_27__ {int namelen; } ;
typedef TYPE_3__ xfs_dir2_data_entry_t ;
typedef int xfs_dir2_data_aoff_t ;
struct TYPE_28__ {int stale; } ;
typedef TYPE_4__ xfs_dir2_block_tail_t ;
typedef int xfs_dir2_block_t ;
struct TYPE_29__ {int * data; } ;
typedef TYPE_5__ xfs_dabuf_t ;
struct TYPE_30__ {int * trans; TYPE_1__* dp; } ;
typedef TYPE_6__ xfs_da_args_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_6__*) ;
 int FUNC_5 (TYPE_5__*) ;
 TYPE_2__* FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (int *,TYPE_5__*,int,int) ;
 int FUNC_8 (int *,TYPE_5__*) ;
 int FUNC_9 (TYPE_6__*,TYPE_5__**,int*) ;
 int FUNC_10 (TYPE_1__*,int *,int *) ;
 TYPE_4__* FUNC_11 (int *,int *) ;
 int FUNC_12 (TYPE_6__*,TYPE_5__*,int,int *) ;
 int FUNC_13 (TYPE_1__*,TYPE_5__*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int *,int *,int*) ;
 int FUNC_16 (int *,TYPE_5__*) ;
 int FUNC_17 (int *,TYPE_5__*,int ,int ,int*,int*) ;
 int FUNC_18 (int *,int ) ;

int
FUNC_19(
 xfs_da_args_t *VAR_1)
{
 xfs_dir2_block_t *VAR_2;
 xfs_dir2_leaf_entry_t *VAR_3;
 xfs_dabuf_t *VAR_4;
 xfs_dir2_block_tail_t *VAR_5;
 xfs_dir2_data_entry_t *VAR_6;
 xfs_inode_t *VAR_7;
 int VAR_8;
 int VAR_9;
 xfs_mount_t *VAR_10;
 int VAR_11;
 int VAR_12;
 xfs_dir2_sf_hdr_t VAR_13;
 int VAR_14;
 xfs_trans_t *VAR_15;

 FUNC_4(VAR_1);





 if ((VAR_9 = FUNC_9(VAR_1, &VAR_4, &VAR_8))) {
  return VAR_9;
 }
 VAR_7 = VAR_1->dp;
 VAR_15 = VAR_1->trans;
 VAR_10 = VAR_7->i_mount;
 VAR_2 = VAR_4->data;
 VAR_5 = FUNC_11(VAR_10, VAR_2);
 VAR_3 = FUNC_6(VAR_5);



 VAR_6 = (xfs_dir2_data_entry_t *)
       ((char *)VAR_2 + FUNC_18(VAR_10, FUNC_2(VAR_3[VAR_8].address)));



 VAR_11 = VAR_12 = 0;
 FUNC_17(VAR_15, VAR_4,
  (xfs_dir2_data_aoff_t)((char *)VAR_6 - (char *)VAR_2),
  FUNC_14(VAR_6->namelen), &VAR_11, &VAR_12);



 FUNC_1(&VAR_5->stale, 1);
 FUNC_8(VAR_15, VAR_4);



 VAR_3[VAR_8].address = FUNC_3(VAR_0);
 FUNC_7(VAR_15, VAR_4, VAR_8, VAR_8);



 if (VAR_12)
  FUNC_15(VAR_10, (xfs_dir2_data_t *)VAR_2, &VAR_11);
 if (VAR_11)
  FUNC_16(VAR_15, VAR_4);
 FUNC_13(VAR_7, VAR_4);



 if ((VAR_14 = FUNC_10(VAR_7, VAR_2, &VAR_13)) >
     FUNC_0(VAR_7)) {
  FUNC_5(VAR_4);
  return 0;
 }



 return FUNC_12(VAR_1, VAR_4, VAR_14, &VAR_13);
}

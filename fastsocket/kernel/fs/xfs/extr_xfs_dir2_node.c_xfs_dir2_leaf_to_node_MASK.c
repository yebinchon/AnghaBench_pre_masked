
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_37__ TYPE_9__ ;
typedef struct TYPE_36__ TYPE_7__ ;
typedef struct TYPE_35__ TYPE_6__ ;
typedef struct TYPE_34__ TYPE_5__ ;
typedef struct TYPE_33__ TYPE_4__ ;
typedef struct TYPE_32__ TYPE_3__ ;
typedef struct TYPE_31__ TYPE_2__ ;
typedef struct TYPE_30__ TYPE_1__ ;
typedef struct TYPE_29__ TYPE_10__ ;


typedef int xfs_trans_t ;
struct TYPE_33__ {int m_dirblksize; } ;
typedef TYPE_4__ xfs_mount_t ;
struct TYPE_30__ {scalar_t__ di_size; } ;
struct TYPE_34__ {TYPE_1__ i_d; TYPE_4__* i_mount; } ;
typedef TYPE_5__ xfs_inode_t ;
struct TYPE_35__ {int bestcount; } ;
typedef TYPE_6__ xfs_dir2_leaf_tail_t ;
struct TYPE_31__ {void* magic; } ;
struct TYPE_32__ {int nvalid; TYPE_2__ info; void* nused; scalar_t__ firstdb; void* magic; } ;
struct TYPE_36__ {TYPE_3__ hdr; void** bests; } ;
typedef TYPE_7__ xfs_dir2_leaf_t ;
typedef TYPE_7__ xfs_dir2_free_t ;
typedef scalar_t__ xfs_dir2_db_t ;
typedef int xfs_dir2_data_off_t ;
struct TYPE_37__ {TYPE_7__* data; } ;
typedef TYPE_9__ xfs_dabuf_t ;
struct TYPE_29__ {int * trans; TYPE_5__* dp; } ;
typedef TYPE_10__ xfs_da_args_t ;
typedef int uint ;
typedef void* __be16 ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_4__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (void*) ;
 int FUNC_3 (int ) ;
 void* FUNC_4 (int ) ;
 void* FUNC_5 (int) ;
 int FUNC_6 (TYPE_10__*) ;
 int FUNC_7 (TYPE_9__*) ;
 int FUNC_8 (int *,TYPE_5__*,int ,int,TYPE_9__**,int ) ;
 int FUNC_9 (TYPE_4__*,scalar_t__) ;
 int FUNC_10 (int *,TYPE_9__*,int ,int) ;
 int FUNC_11 (int *,TYPE_9__*) ;
 int FUNC_12 (TYPE_10__*,int ,scalar_t__*) ;
 void** FUNC_13 (TYPE_6__*) ;
 int FUNC_14 (int *,TYPE_9__*) ;
 TYPE_6__* FUNC_15 (TYPE_4__*,TYPE_7__*) ;
 int FUNC_16 (TYPE_5__*,TYPE_9__*) ;

int
FUNC_17(
 xfs_da_args_t *VAR_5,
 xfs_dabuf_t *VAR_6)
{
 xfs_inode_t *VAR_7;
 int VAR_8;
 xfs_dabuf_t *VAR_9;
 xfs_dir2_db_t VAR_10;
 xfs_dir2_free_t *VAR_11;
 __be16 *VAR_12;
 int VAR_13;
 xfs_dir2_leaf_t *VAR_14;
 xfs_dir2_leaf_tail_t *VAR_15;
 xfs_mount_t *VAR_16;
 int VAR_17;
 xfs_dir2_data_off_t VAR_18;
 __be16 *VAR_19;
 xfs_trans_t *VAR_20;

 FUNC_6(VAR_5);

 VAR_7 = VAR_5->dp;
 VAR_16 = VAR_7->i_mount;
 VAR_20 = VAR_5->trans;



 if ((VAR_8 = FUNC_12(VAR_5, VAR_3, &VAR_10))) {
  return VAR_8;
 }
 FUNC_0(VAR_10 == FUNC_1(VAR_16));



 if ((VAR_8 = FUNC_8(VAR_20, VAR_7, FUNC_9(VAR_16, VAR_10), -1, &VAR_9,
   VAR_1))) {
  return VAR_8;
 }
 FUNC_0(VAR_9 != ((void*)0));
 VAR_11 = VAR_9->data;
 VAR_14 = VAR_6->data;
 VAR_15 = FUNC_15(VAR_16, VAR_14);



 VAR_11->hdr.magic = FUNC_5(VAR_2);
 VAR_11->hdr.firstdb = 0;
 FUNC_0(FUNC_3(VAR_15->bestcount) <= (uint)VAR_7->i_d.di_size / VAR_16->m_dirblksize);
 VAR_11->hdr.nvalid = VAR_15->bestcount;




 for (VAR_13 = VAR_17 = 0, VAR_12 = FUNC_13(VAR_15), VAR_19 = VAR_11->bests;
      VAR_13 < FUNC_3(VAR_15->bestcount); VAR_13++, VAR_12++, VAR_19++) {
  if ((VAR_18 = FUNC_2(*VAR_12)) != VAR_0)
   VAR_17++;
  *VAR_19 = FUNC_4(VAR_18);
 }
 VAR_11->hdr.nused = FUNC_5(VAR_17);
 VAR_14->hdr.info.magic = FUNC_4(VAR_4);



 FUNC_14(VAR_20, VAR_6);
 FUNC_11(VAR_20, VAR_9);
 FUNC_10(VAR_20, VAR_9, 0, FUNC_3(VAR_11->hdr.nvalid) - 1);
 FUNC_7(VAR_9);
 FUNC_16(VAR_7, VAR_6);
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_52__ TYPE_7__ ;
typedef struct TYPE_51__ TYPE_6__ ;
typedef struct TYPE_50__ TYPE_5__ ;
typedef struct TYPE_49__ TYPE_4__ ;
typedef struct TYPE_48__ TYPE_3__ ;
typedef struct TYPE_47__ TYPE_2__ ;
typedef struct TYPE_46__ TYPE_1__ ;
typedef struct TYPE_45__ TYPE_13__ ;
typedef struct TYPE_44__ TYPE_12__ ;
typedef struct TYPE_43__ TYPE_11__ ;
typedef struct TYPE_42__ TYPE_10__ ;


typedef int xfs_trans_t ;
struct TYPE_49__ {int m_dirblksize; int m_dir_magicpct; } ;
typedef TYPE_4__ xfs_mount_t ;
struct TYPE_50__ {TYPE_4__* i_mount; } ;
typedef TYPE_5__ xfs_inode_t ;
struct TYPE_46__ {void* magic; } ;
struct TYPE_48__ {void* stale; void* count; int nused; void* nvalid; TYPE_2__* bestfree; void* firstdb; void* magic; TYPE_1__ info; } ;
struct TYPE_51__ {TYPE_3__ hdr; void** bests; TYPE_7__* ents; } ;
typedef TYPE_6__ xfs_dir2_leaf_t ;
struct TYPE_52__ {void* address; } ;
typedef TYPE_7__ xfs_dir2_leaf_entry_t ;
typedef TYPE_6__ xfs_dir2_free_t ;
typedef scalar_t__ xfs_dir2_db_t ;
typedef TYPE_6__ xfs_dir2_data_t ;
struct TYPE_42__ {int namelen; } ;
typedef TYPE_10__ xfs_dir2_data_entry_t ;
struct TYPE_43__ {TYPE_6__* data; } ;
typedef TYPE_11__ xfs_dabuf_t ;
struct TYPE_44__ {scalar_t__ blkno; int index; TYPE_11__* bp; } ;
typedef TYPE_12__ xfs_da_state_blk_t ;
struct TYPE_45__ {scalar_t__ total; int * trans; TYPE_5__* dp; } ;
typedef TYPE_13__ xfs_da_args_t ;
typedef int uint ;
struct TYPE_47__ {void* length; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (TYPE_4__*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (TYPE_4__*) ;
 int VAR_5 ;
 int FUNC_3 (void**,int) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (void*) ;
 void* FUNC_7 (int) ;
 void* FUNC_8 (int) ;
 int FUNC_9 (TYPE_13__*,int) ;
 int FUNC_10 (TYPE_11__*) ;
 int FUNC_11 (int *,TYPE_5__*,int ,int,TYPE_11__**,int ) ;
 int FUNC_12 (TYPE_5__*,TYPE_11__*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (TYPE_4__*,TYPE_6__*,int*) ;
 int FUNC_15 (int *,TYPE_11__*) ;
 int FUNC_16 (int *,TYPE_11__*,int,int ,int*,int*) ;
 scalar_t__ FUNC_17 (TYPE_4__*,int) ;
 int FUNC_18 (TYPE_4__*,int) ;
 int FUNC_19 (TYPE_4__*,scalar_t__) ;
 scalar_t__ FUNC_20 (TYPE_4__*,scalar_t__) ;
 int FUNC_21 (TYPE_4__*,scalar_t__) ;
 int FUNC_22 (int *,TYPE_11__*,int,int) ;
 int FUNC_23 (int *,TYPE_11__*) ;
 int FUNC_24 (int *,TYPE_11__*,int,int) ;
 int FUNC_25 (int *,TYPE_11__*) ;
 int FUNC_26 (TYPE_5__*,TYPE_11__*) ;
 int FUNC_27 (TYPE_13__*,scalar_t__,TYPE_11__*) ;

__attribute__((used)) static int
FUNC_28(
 xfs_da_args_t *VAR_6,
 xfs_dabuf_t *VAR_7,
 int VAR_8,
 xfs_da_state_blk_t *VAR_9,
 int *VAR_10)
{
 xfs_dir2_data_t *VAR_11;
 xfs_dir2_db_t VAR_12;
 xfs_dabuf_t *VAR_13;
 xfs_dir2_data_entry_t *VAR_14;
 xfs_inode_t *VAR_15;
 xfs_dir2_leaf_t *VAR_16;
 xfs_dir2_leaf_entry_t *VAR_17;
 int VAR_18;
 int VAR_19;
 xfs_mount_t *VAR_20;
 int VAR_21;
 int VAR_22;
 xfs_trans_t *VAR_23;

 FUNC_9(VAR_6, VAR_8);

 VAR_15 = VAR_6->dp;
 VAR_23 = VAR_6->trans;
 VAR_20 = VAR_15->i_mount;
 VAR_16 = VAR_7->data;
 FUNC_0(FUNC_4(VAR_16->hdr.info.magic) == VAR_4);



 VAR_17 = &VAR_16->ents[VAR_8];



 VAR_12 = FUNC_17(VAR_20, FUNC_6(VAR_17->address));
 FUNC_0(VAR_9->blkno == VAR_12);
 VAR_19 = FUNC_18(VAR_20, FUNC_6(VAR_17->address));
 FUNC_0(VAR_9->index == VAR_19);




 FUNC_3(&VAR_16->hdr.stale, 1);
 FUNC_25(VAR_23, VAR_7);
 VAR_17->address = FUNC_8(VAR_5);
 FUNC_24(VAR_23, VAR_7, VAR_8, VAR_8);




 VAR_13 = VAR_9->bp;
 VAR_11 = VAR_13->data;
 VAR_14 = (xfs_dir2_data_entry_t *)((char *)VAR_11 + VAR_19);
 VAR_18 = FUNC_4(VAR_11->hdr.bestfree[0].length);
 VAR_21 = VAR_22 = 0;
 FUNC_16(VAR_23, VAR_13, VAR_19,
  FUNC_13(VAR_14->namelen), &VAR_21, &VAR_22);




 if (VAR_22)
  FUNC_14(VAR_20, VAR_11, &VAR_21);
 if (VAR_21)
  FUNC_15(VAR_23, VAR_13);
 FUNC_12(VAR_15, VAR_13);




 if (VAR_18 < FUNC_4(VAR_11->hdr.bestfree[0].length)) {
  int VAR_24;
  xfs_dabuf_t *VAR_25;
  xfs_dir2_db_t VAR_26;
  int VAR_27;
  xfs_dir2_free_t *VAR_28;
  int VAR_29;





  VAR_26 = FUNC_20(VAR_20, VAR_12);
  if ((VAR_24 = FUNC_11(VAR_23, VAR_15, FUNC_19(VAR_20, VAR_26),
    -1, &VAR_25, VAR_2))) {
   return VAR_24;
  }
  VAR_28 = VAR_25->data;
  FUNC_0(FUNC_6(VAR_28->hdr.magic) == VAR_3);
  FUNC_0(FUNC_6(VAR_28->hdr.firstdb) ==
         FUNC_2(VAR_20) *
         (VAR_26 - FUNC_1(VAR_20)));



  VAR_27 = FUNC_21(VAR_20, VAR_12);
  VAR_18 = FUNC_4(VAR_11->hdr.bestfree[0].length);




  if (VAR_18 == VAR_20->m_dirblksize - (uint)sizeof(VAR_11->hdr)) {



   VAR_24 = FUNC_27(VAR_6, VAR_12, VAR_13);
   if (VAR_24 == 0) {
    VAR_9->bp = ((void*)0);
    VAR_11 = ((void*)0);
   }





   else if (VAR_24 == VAR_0 && VAR_6->total == 0)
    FUNC_10(VAR_13);
   else
    return VAR_24;
  }




  if (VAR_11 == ((void*)0)) {



   FUNC_5(&VAR_28->hdr.nused, -1);
   FUNC_23(VAR_23, VAR_25);






   if (VAR_27 == FUNC_6(VAR_28->hdr.nvalid) - 1) {
    int VAR_30;

    for (VAR_30 = VAR_27 - 1;
         VAR_30 >= 0 && FUNC_4(VAR_28->bests[VAR_30]) == VAR_1;
         VAR_30--)
     continue;
    VAR_28->hdr.nvalid = FUNC_8(VAR_30 + 1);
    VAR_29 = 0;
   }



   else {
    VAR_28->bests[VAR_27] = FUNC_7(VAR_1);
    VAR_29 = 1;
   }




   if (!VAR_28->hdr.nused) {
    VAR_24 = FUNC_27(VAR_6, VAR_26, VAR_25);
    if (VAR_24 == 0) {
     VAR_25 = ((void*)0);
     VAR_29 = 0;
    } else if (VAR_24 != VAR_0 || VAR_6->total != 0)
     return VAR_24;





   }
  }




  else {
   VAR_28->bests[VAR_27] = FUNC_7(VAR_18);
   VAR_29 = 1;
  }



  if (VAR_29)
   FUNC_22(VAR_23, VAR_25, VAR_27, VAR_27);



  if (VAR_25)
   FUNC_10(VAR_25);
 }
 FUNC_26(VAR_15, VAR_7);




 *VAR_10 =
  ((uint)sizeof(VAR_16->hdr) +
   (uint)sizeof(VAR_16->ents[0]) *
   (FUNC_4(VAR_16->hdr.count) - FUNC_4(VAR_16->hdr.stale))) <
  VAR_20->m_dir_magicpct;
 return 0;
}

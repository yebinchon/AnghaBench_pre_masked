
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_50__ TYPE_9__ ;
typedef struct TYPE_49__ TYPE_7__ ;
typedef struct TYPE_48__ TYPE_6__ ;
typedef struct TYPE_47__ TYPE_5__ ;
typedef struct TYPE_46__ TYPE_4__ ;
typedef struct TYPE_45__ TYPE_3__ ;
typedef struct TYPE_44__ TYPE_2__ ;
typedef struct TYPE_43__ TYPE_1__ ;
typedef struct TYPE_42__ TYPE_11__ ;
typedef struct TYPE_41__ TYPE_10__ ;


typedef int xfs_trans_t ;
struct TYPE_45__ {scalar_t__ m_dirblksize; size_t m_dirdatablk; } ;
typedef TYPE_3__ xfs_mount_t ;
struct TYPE_46__ {TYPE_3__* i_mount; } ;
typedef TYPE_4__ xfs_inode_t ;
struct TYPE_47__ {int bestcount; } ;
typedef TYPE_5__ xfs_dir2_leaf_tail_t ;
struct TYPE_44__ {TYPE_1__* bestfree; int stale; } ;
struct TYPE_48__ {TYPE_2__ hdr; TYPE_7__* ents; } ;
typedef TYPE_6__ xfs_dir2_leaf_t ;
struct TYPE_49__ {int address; } ;
typedef TYPE_7__ xfs_dir2_leaf_entry_t ;
typedef size_t xfs_dir2_db_t ;
typedef TYPE_6__ xfs_dir2_data_t ;
typedef scalar_t__ xfs_dir2_data_off_t ;
struct TYPE_50__ {int namelen; } ;
typedef TYPE_9__ xfs_dir2_data_entry_t ;
typedef int xfs_dir2_data_aoff_t ;
struct TYPE_41__ {TYPE_6__* data; } ;
typedef TYPE_10__ xfs_dabuf_t ;
struct TYPE_42__ {scalar_t__ total; int * trans; TYPE_4__* dp; } ;
typedef TYPE_11__ xfs_da_args_t ;
typedef scalar_t__ uint ;
typedef int __be16 ;
struct TYPE_43__ {int length; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *,size_t) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,int *,size_t) ;
 int FUNC_8 (TYPE_11__*) ;
 int FUNC_9 (TYPE_10__*) ;
 int FUNC_10 (TYPE_4__*,TYPE_10__*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (TYPE_3__*,TYPE_6__*,int*) ;
 int FUNC_13 (int *,TYPE_10__*) ;
 int FUNC_14 (int *,TYPE_10__*,int ,int ,int*,int*) ;
 size_t FUNC_15 (TYPE_3__*,int) ;
 int FUNC_16 (TYPE_3__*,int) ;
 int * FUNC_17 (TYPE_5__*) ;
 int FUNC_18 (TYPE_4__*,TYPE_10__*) ;
 int FUNC_19 (int *,TYPE_10__*,size_t,int) ;
 int FUNC_20 (int *,TYPE_10__*,int,int) ;
 int FUNC_21 (int *,TYPE_10__*) ;
 int FUNC_22 (int *,TYPE_10__*) ;
 int FUNC_23 (TYPE_11__*,TYPE_10__**,int*,TYPE_10__**) ;
 TYPE_5__* FUNC_24 (TYPE_3__*,TYPE_6__*) ;
 int FUNC_25 (TYPE_11__*,TYPE_10__*,TYPE_10__*) ;
 int FUNC_26 (TYPE_11__*,size_t,TYPE_10__*) ;

int
FUNC_27(
 xfs_da_args_t *VAR_3)
{
 __be16 *VAR_4;
 xfs_dir2_data_t *VAR_5;
 xfs_dir2_db_t VAR_6;
 xfs_dabuf_t *VAR_7;
 xfs_dir2_data_entry_t *VAR_8;
 xfs_inode_t *VAR_9;
 int VAR_10;
 xfs_dir2_db_t VAR_11;
 int VAR_12;
 xfs_dabuf_t *VAR_13;
 xfs_dir2_leaf_t *VAR_14;
 xfs_dir2_leaf_entry_t *VAR_15;
 xfs_dir2_leaf_tail_t *VAR_16;
 xfs_mount_t *VAR_17;
 int VAR_18;
 int VAR_19;
 xfs_dir2_data_off_t VAR_20;
 xfs_trans_t *VAR_21;

 FUNC_8(VAR_3);




 if ((VAR_10 = FUNC_23(VAR_3, &VAR_13, &VAR_12, &VAR_7))) {
  return VAR_10;
 }
 VAR_9 = VAR_3->dp;
 VAR_21 = VAR_3->trans;
 VAR_17 = VAR_9->i_mount;
 VAR_14 = VAR_13->data;
 VAR_5 = VAR_7->data;
 FUNC_10(VAR_9, VAR_7);



 VAR_15 = &VAR_14->ents[VAR_12];
 VAR_6 = FUNC_15(VAR_17, FUNC_4(VAR_15->address));
 VAR_8 = (xfs_dir2_data_entry_t *)
       ((char *)VAR_5 + FUNC_16(VAR_17, FUNC_4(VAR_15->address)));
 VAR_19 = VAR_18 = 0;
 VAR_20 = FUNC_2(VAR_5->hdr.bestfree[0].length);
 VAR_16 = FUNC_24(VAR_17, VAR_14);
 VAR_4 = FUNC_17(VAR_16);
 FUNC_0(FUNC_2(VAR_4[VAR_6]) == VAR_20);



 FUNC_14(VAR_21, VAR_7,
  (xfs_dir2_data_aoff_t)((char *)VAR_8 - (char *)VAR_5),
  FUNC_11(VAR_8->namelen), &VAR_18, &VAR_19);



 FUNC_1(&VAR_14->hdr.stale, 1);
 FUNC_21(VAR_21, VAR_13);
 VAR_15->address = FUNC_6(VAR_2);
 FUNC_20(VAR_21, VAR_13, VAR_12, VAR_12);




 if (VAR_19)
  FUNC_12(VAR_17, VAR_5, &VAR_18);
 if (VAR_18)
  FUNC_13(VAR_21, VAR_7);




 if (FUNC_2(VAR_5->hdr.bestfree[0].length) != VAR_20) {
  VAR_4[VAR_6] = VAR_5->hdr.bestfree[0].length;
  FUNC_19(VAR_21, VAR_13, VAR_6, VAR_6);
 }
 FUNC_10(VAR_9, VAR_7);



 if (FUNC_2(VAR_5->hdr.bestfree[0].length) ==
     VAR_17->m_dirblksize - (uint)sizeof(VAR_5->hdr)) {
  FUNC_0(VAR_6 != VAR_17->m_dirdatablk);
  if ((VAR_10 = FUNC_26(VAR_3, VAR_6, VAR_7))) {






   if (VAR_10 == VAR_0 && VAR_3->total == 0) {
    FUNC_9(VAR_7);
    VAR_10 = 0;
   }
   FUNC_18(VAR_9, VAR_13);
   FUNC_9(VAR_13);
   return VAR_10;
  }
  VAR_7 = ((void*)0);




  if (VAR_6 == FUNC_4(VAR_16->bestcount) - 1) {



   for (VAR_11 = VAR_6 - 1; VAR_11 > 0; VAR_11--) {
    if (FUNC_2(VAR_4[VAR_11]) != VAR_1)
     break;
   }




   FUNC_7(&VAR_4[VAR_6 - VAR_11], VAR_4,
    (FUNC_4(VAR_16->bestcount) - (VAR_6 - VAR_11)) * sizeof(*VAR_4));
   FUNC_3(&VAR_16->bestcount, -(VAR_6 - VAR_11));
   FUNC_22(VAR_21, VAR_13);
   FUNC_19(VAR_21, VAR_13, 0, FUNC_4(VAR_16->bestcount) - 1);
  } else
   VAR_4[VAR_6] = FUNC_5(VAR_1);
 }



 else if (VAR_6 != VAR_17->m_dirdatablk && VAR_7 != ((void*)0)) {
  FUNC_9(VAR_7);
  VAR_7 = ((void*)0);
 }
 FUNC_18(VAR_9, VAR_13);



 return FUNC_25(VAR_3, VAR_13, VAR_7);
}

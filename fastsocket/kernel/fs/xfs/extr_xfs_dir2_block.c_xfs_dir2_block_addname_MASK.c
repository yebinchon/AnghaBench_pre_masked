
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_53__ TYPE_9__ ;
typedef struct TYPE_52__ TYPE_8__ ;
typedef struct TYPE_51__ TYPE_7__ ;
typedef struct TYPE_50__ TYPE_6__ ;
typedef struct TYPE_49__ TYPE_5__ ;
typedef struct TYPE_48__ TYPE_4__ ;
typedef struct TYPE_47__ TYPE_3__ ;
typedef struct TYPE_46__ TYPE_2__ ;
typedef struct TYPE_45__ TYPE_1__ ;
typedef struct TYPE_44__ TYPE_11__ ;
typedef struct TYPE_43__ TYPE_10__ ;


typedef int xfs_trans_t ;
struct TYPE_46__ {int m_dirdatablk; } ;
typedef TYPE_2__ xfs_mount_t ;
struct TYPE_47__ {TYPE_2__* i_mount; } ;
typedef TYPE_3__ xfs_inode_t ;
struct TYPE_48__ {void* address; void* hashval; } ;
typedef TYPE_4__ xfs_dir2_leaf_entry_t ;
struct TYPE_49__ {int length; int freetag; } ;
typedef TYPE_5__ xfs_dir2_data_unused_t ;
typedef int xfs_dir2_data_t ;
struct TYPE_50__ {int offset; int length; } ;
typedef TYPE_6__ xfs_dir2_data_free_t ;
struct TYPE_51__ {int name; int namelen; int inumber; } ;
typedef TYPE_7__ xfs_dir2_data_entry_t ;
typedef int xfs_dir2_data_aoff_t ;
struct TYPE_52__ {void* stale; void* count; } ;
typedef TYPE_8__ xfs_dir2_block_tail_t ;
struct TYPE_45__ {TYPE_6__* bestfree; void* magic; } ;
struct TYPE_53__ {TYPE_1__ hdr; } ;
typedef TYPE_9__ xfs_dir2_block_t ;
typedef int xfs_dahash_t ;
struct TYPE_43__ {TYPE_9__* data; } ;
typedef TYPE_10__ xfs_dabuf_t ;
struct TYPE_44__ {int op_flags; scalar_t__ total; int hashval; int namelen; int name; int inumber; int * trans; TYPE_3__* dp; } ;
typedef TYPE_11__ xfs_da_args_t ;
typedef int uint ;
typedef int __be16 ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (char*,int ,TYPE_2__*,TYPE_9__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (void**,int) ;
 int FUNC_7 (void*) ;
 int FUNC_8 (int) ;
 void* FUNC_9 (int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int ,int ) ;
 int FUNC_12 (TYPE_4__*,TYPE_4__*,int) ;
 int FUNC_13 (TYPE_11__*) ;
 scalar_t__ FUNC_14 (int) ;
 int FUNC_15 (int *,TYPE_10__*) ;
 int FUNC_16 (TYPE_10__*) ;
 int FUNC_17 (int *,TYPE_3__*,int ,int,TYPE_10__**,int ) ;
 TYPE_4__* FUNC_18 (TYPE_8__*) ;
 int FUNC_19 (int *,TYPE_10__*,int,int) ;
 int FUNC_20 (int *,TYPE_10__*) ;
 TYPE_8__* FUNC_21 (TYPE_2__*,TYPE_9__*) ;
 int FUNC_22 (TYPE_11__*,TYPE_10__*) ;
 int FUNC_23 (TYPE_2__*,int) ;
 int FUNC_24 (TYPE_3__*,TYPE_10__*) ;
 int * FUNC_25 (TYPE_7__*) ;
 int FUNC_26 (int ) ;
 int FUNC_27 (TYPE_2__*,int *,int*) ;
 int FUNC_28 (int *,TYPE_10__*,TYPE_7__*) ;
 int FUNC_29 (int *,TYPE_10__*) ;
 int FUNC_30 (int *,TYPE_10__*,int ,int ,int*,int*) ;
 int FUNC_31 (int *,TYPE_10__*,TYPE_5__*,int ,int ,int*,int*) ;
 int FUNC_32 (TYPE_11__*) ;

int
FUNC_33(
 xfs_da_args_t *VAR_8)
{
 xfs_dir2_data_free_t *VAR_9;
 xfs_dir2_block_t *VAR_10;
 xfs_dir2_leaf_entry_t *VAR_11;
 xfs_dabuf_t *VAR_12;
 xfs_dir2_block_tail_t *VAR_13;
 int VAR_14;
 xfs_dir2_data_entry_t *VAR_15;
 xfs_inode_t *VAR_16;
 xfs_dir2_data_unused_t *VAR_17;
 int VAR_18;
 xfs_dir2_data_unused_t *VAR_19=((void*)0);
 xfs_dahash_t VAR_20;
 int VAR_21;
 int VAR_22;
 int VAR_23=0;
 int VAR_24=0;
 int VAR_25;
 int VAR_26;
 int VAR_27;
 int VAR_28=0;
 xfs_mount_t *VAR_29;
 int VAR_30;
 int VAR_31;
 __be16 *VAR_32;
 xfs_trans_t *VAR_33;

 FUNC_13(VAR_8);

 VAR_16 = VAR_8->dp;
 VAR_33 = VAR_8->trans;
 VAR_29 = VAR_16->i_mount;



 if ((VAR_18 =
     FUNC_17(VAR_33, VAR_16, VAR_29->m_dirdatablk, -1, &VAR_12, VAR_2))) {
  return VAR_18;
 }
 FUNC_0(VAR_12 != ((void*)0));
 VAR_10 = VAR_12->data;



 if (FUNC_14(FUNC_7(VAR_10->hdr.magic) != VAR_4)) {
  FUNC_3("xfs_dir2_block_addname",
         VAR_7, VAR_29, VAR_10);
  FUNC_15(VAR_33, VAR_12);
  return FUNC_4(VAR_0);
 }
 VAR_25 = FUNC_26(VAR_8->namelen);



 VAR_9 = VAR_10->hdr.bestfree;
 VAR_13 = FUNC_21(VAR_29, VAR_10);
 VAR_11 = FUNC_18(VAR_13);



 if (!VAR_13->stale) {



  VAR_32 = (__be16 *)VAR_11 - 1;



  VAR_19 = (xfs_dir2_data_unused_t *)((char *)VAR_10 + FUNC_5(*VAR_32));





  if (FUNC_5(VAR_19->freetag) != VAR_5)
   VAR_17 = VAR_19 = ((void*)0);



  else {
   VAR_17 = (xfs_dir2_data_unused_t *)
         ((char *)VAR_10 + FUNC_5(VAR_9[0].offset));
   if (VAR_17 == VAR_19) {




    if (FUNC_5(VAR_17->length) < VAR_25 + (uint)sizeof(*VAR_11)) {




     if (FUNC_5(VAR_9[1].length) >= VAR_25)
      VAR_17 = (xfs_dir2_data_unused_t *)
            ((char *)VAR_10 +
             FUNC_5(VAR_9[1].offset));
     else
      VAR_17 = ((void*)0);
    }
   } else {




    if (FUNC_5(VAR_17->length) < VAR_25) {
     VAR_17 = ((void*)0);
    }
   }
  }
  VAR_14 = 0;
 }




 else if (FUNC_5(VAR_9[0].length) >= VAR_25) {
  VAR_17 = (xfs_dir2_data_unused_t *)
        ((char *)VAR_10 + FUNC_5(VAR_9[0].offset));
  VAR_14 = 0;
 }



 else {



  VAR_32 = (__be16 *)VAR_11 - 1;



  VAR_17 = (xfs_dir2_data_unused_t *)((char *)VAR_10 + FUNC_5(*VAR_32));




  if (FUNC_5(VAR_17->freetag) == VAR_5) {
   if (FUNC_5(VAR_17->length) + (FUNC_7(VAR_13->stale) - 1) *
       (uint)sizeof(*VAR_11) < VAR_25)
    VAR_17 = ((void*)0);
  } else if ((FUNC_7(VAR_13->stale) - 1) * (uint)sizeof(*VAR_11) < VAR_25)
   VAR_17 = ((void*)0);
  else
   VAR_17 = (xfs_dir2_data_unused_t *)VAR_11;
  VAR_14 = 1;
 }



 if (VAR_8->op_flags & VAR_3)
  FUNC_15(VAR_33, VAR_12);



 if (!VAR_17) {




  if ((VAR_8->op_flags & VAR_3) || VAR_8->total == 0)
   return FUNC_4(VAR_1);




  VAR_18 = FUNC_22(VAR_8, VAR_12);
  FUNC_16(VAR_12);
  if (VAR_18)
   return VAR_18;
  return FUNC_32(VAR_8);
 }



 if (VAR_8->op_flags & VAR_3)
  return 0;
 VAR_30 = VAR_31 = 0;





 if (VAR_14) {
  int VAR_34;
  int VAR_35;

  for (VAR_34 = VAR_35 = FUNC_7(VAR_13->count) - 1,
   VAR_22 = VAR_23 = -1;
       VAR_34 >= 0;
       VAR_34--) {
   if (FUNC_7(VAR_11[VAR_34].address) == VAR_6) {
    if (VAR_22 == -1)
     VAR_22 = VAR_35;
    else {
     if (VAR_23 == -1)
      VAR_23 = VAR_35;
     continue;
    }
   }
   if (VAR_34 < VAR_35)
    VAR_11[VAR_35] = VAR_11[VAR_34];
   VAR_35--;
  }
  VAR_24 = VAR_35 + 1 - (FUNC_7(VAR_13->stale) - 1);
  VAR_23 -= FUNC_7(VAR_13->stale) - 1;
  FUNC_6(&VAR_13->count, -(FUNC_7(VAR_13->stale) - 1));
  FUNC_30(VAR_33, VAR_12,
   (xfs_dir2_data_aoff_t)((char *)VAR_11 - (char *)VAR_10),
   (xfs_dir2_data_aoff_t)((FUNC_7(VAR_13->stale) - 1) * sizeof(*VAR_11)),
   &VAR_30, &VAR_31);
  VAR_11 += FUNC_7(VAR_13->stale) - 1;
  VAR_13->stale = FUNC_9(1);




  if (VAR_31) {
   FUNC_27(VAR_29, (xfs_dir2_data_t *)VAR_10, &VAR_30);
   VAR_31 = 0;
  }
 }




 else if (VAR_13->stale) {
  VAR_24 = FUNC_7(VAR_13->count);
  VAR_23 = -1;
 }



 for (VAR_26 = 0, VAR_21 = FUNC_7(VAR_13->count) - 1; VAR_26 <= VAR_21; ) {
  VAR_28 = (VAR_26 + VAR_21) >> 1;
  if ((VAR_20 = FUNC_7(VAR_11[VAR_28].hashval)) == VAR_8->hashval)
   break;
  if (VAR_20 < VAR_8->hashval)
   VAR_26 = VAR_28 + 1;
  else
   VAR_21 = VAR_28 - 1;
 }
 while (VAR_28 >= 0 && FUNC_7(VAR_11[VAR_28].hashval) >= VAR_8->hashval) {
  VAR_28--;
 }



 if (!VAR_13->stale) {



  FUNC_31(VAR_33, VAR_12, VAR_19,
   (xfs_dir2_data_aoff_t)
   ((char *)VAR_19 - (char *)VAR_10 + FUNC_5(VAR_19->length) -
    sizeof(*VAR_11)),
   (xfs_dir2_data_aoff_t)sizeof(*VAR_11),
   &VAR_30, &VAR_31);



  FUNC_6(&VAR_13->count, 1);




  if (VAR_31) {
   FUNC_27(VAR_29, (xfs_dir2_data_t *)VAR_10,
    &VAR_30);
   VAR_31 = 0;
  }





  VAR_11--;
  VAR_28++;
  if (VAR_28)
   FUNC_12(VAR_11, &VAR_11[1], VAR_28 * sizeof(*VAR_11));
  VAR_24 = 0;
  VAR_23 = VAR_28;
 }



 else {
  for (VAR_27 = VAR_28;
       VAR_27 >= 0 &&
   FUNC_7(VAR_11[VAR_27].address) != VAR_6;
       VAR_27--)
   continue;
  for (VAR_22 = VAR_28 + 1;
       VAR_22 < FUNC_7(VAR_13->count) &&
   FUNC_7(VAR_11[VAR_22].address) != VAR_6 &&
   (VAR_27 < 0 || VAR_28 - VAR_27 > VAR_22 - VAR_28);
       VAR_22++)
   continue;



  if (VAR_27 >= 0 &&
      (VAR_22 == FUNC_7(VAR_13->count) ||
       VAR_28 - VAR_27 <= VAR_22 - VAR_28)) {
   if (VAR_28 - VAR_27)
    FUNC_12(&VAR_11[VAR_27], &VAR_11[VAR_27 + 1],
     (VAR_28 - VAR_27) * sizeof(*VAR_11));
   VAR_24 = FUNC_2(VAR_27, VAR_24);
   VAR_23 = FUNC_1(VAR_28, VAR_23);
  }



  else {
   FUNC_0(VAR_22 < FUNC_7(VAR_13->count));
   VAR_28++;
   if (VAR_22 - VAR_28)
    FUNC_12(&VAR_11[VAR_28 + 1], &VAR_11[VAR_28],
     (VAR_22 - VAR_28) * sizeof(*VAR_11));
   VAR_24 = FUNC_2(VAR_28, VAR_24);
   VAR_23 = FUNC_1(VAR_22, VAR_23);
  }
  FUNC_6(&VAR_13->stale, -1);
 }



 VAR_15 = (xfs_dir2_data_entry_t *)VAR_17;



 VAR_11[VAR_28].hashval = FUNC_9(VAR_8->hashval);
 VAR_11[VAR_28].address = FUNC_9(FUNC_23(VAR_29,
    (char *)VAR_15 - (char *)VAR_10));
 FUNC_19(VAR_33, VAR_12, VAR_24, VAR_23);



 FUNC_31(VAR_33, VAR_12, VAR_17,
  (xfs_dir2_data_aoff_t)((char *)VAR_17 - (char *)VAR_10),
  (xfs_dir2_data_aoff_t)VAR_25, &VAR_30, &VAR_31);



 VAR_15->inumber = FUNC_10(VAR_8->inumber);
 VAR_15->namelen = VAR_8->namelen;
 FUNC_11(VAR_15->name, VAR_8->name, VAR_8->namelen);
 VAR_32 = FUNC_25(VAR_15);
 *VAR_32 = FUNC_8((char *)VAR_15 - (char *)VAR_10);



 if (VAR_31)
  FUNC_27(VAR_29, (xfs_dir2_data_t *)VAR_10, &VAR_30);
 if (VAR_30)
  FUNC_29(VAR_33, VAR_12);
 FUNC_20(VAR_33, VAR_12);
 FUNC_28(VAR_33, VAR_12, VAR_15);
 FUNC_24(VAR_16, VAR_12);
 FUNC_16(VAR_12);
 return 0;
}

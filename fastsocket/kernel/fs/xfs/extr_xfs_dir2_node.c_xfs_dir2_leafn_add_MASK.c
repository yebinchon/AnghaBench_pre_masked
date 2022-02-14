
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int xfs_trans_t ;
typedef int xfs_mount_t ;
struct TYPE_18__ {int * i_mount; } ;
typedef TYPE_2__ xfs_inode_t ;
struct TYPE_17__ {scalar_t__ stale; scalar_t__ count; } ;
struct TYPE_19__ {TYPE_1__ hdr; TYPE_4__* ents; } ;
typedef TYPE_3__ xfs_dir2_leaf_t ;
struct TYPE_20__ {void* address; void* hashval; } ;
typedef TYPE_4__ xfs_dir2_leaf_entry_t ;
struct TYPE_21__ {TYPE_3__* data; } ;
typedef TYPE_5__ xfs_dabuf_t ;
struct TYPE_22__ {scalar_t__ hashval; int op_flags; int index; int blkno; int * trans; TYPE_2__* dp; } ;
typedef TYPE_6__ xfs_da_args_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__*,int) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (void*) ;
 void* FUNC_7 (scalar_t__) ;
 int FUNC_8 (TYPE_4__*,TYPE_4__*,int) ;
 int FUNC_9 (TYPE_6__*,int) ;
 scalar_t__ FUNC_10 (int *,int ,int ) ;
 int FUNC_11 (TYPE_5__*,int*,int*,int*,int*,int*) ;
 int FUNC_12 (int *,TYPE_5__*,int,int) ;
 int FUNC_13 (int *,TYPE_5__*) ;
 int FUNC_14 (TYPE_2__*,TYPE_5__*) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static int
FUNC_16(
 xfs_dabuf_t *VAR_4,
 xfs_da_args_t *VAR_5,
 int VAR_6)
{
 int VAR_7;
 xfs_inode_t *VAR_8;
 int VAR_9;
 xfs_dir2_leaf_t *VAR_10;
 xfs_dir2_leaf_entry_t *VAR_11;
 int VAR_12;
 int VAR_13;
 int VAR_14;
 xfs_mount_t *VAR_15;
 xfs_trans_t *VAR_16;

 FUNC_9(VAR_5, VAR_6);

 VAR_8 = VAR_5->dp;
 VAR_15 = VAR_8->i_mount;
 VAR_16 = VAR_5->trans;
 VAR_10 = VAR_4->data;





 if (VAR_6 < 0)
  return FUNC_3(VAR_0);
 if (FUNC_5(VAR_10->hdr.count) == FUNC_15(VAR_15)) {
  if (!VAR_10->hdr.stale)
   return FUNC_3(VAR_1);
  VAR_7 = FUNC_5(VAR_10->hdr.stale) > 1;
 } else
  VAR_7 = 0;
 FUNC_0(VAR_6 == 0 || FUNC_6(VAR_10->ents[VAR_6 - 1].hashval) <= VAR_5->hashval);
 FUNC_0(VAR_6 == FUNC_5(VAR_10->hdr.count) ||
        FUNC_6(VAR_10->ents[VAR_6].hashval) >= VAR_5->hashval);

 if (VAR_5->op_flags & VAR_2)
  return 0;





 if (VAR_7) {
  FUNC_11(VAR_4, &VAR_6, &VAR_14, &VAR_9,
   &VAR_13, &VAR_12);
 }



 else if (VAR_10->hdr.stale) {
  VAR_13 = FUNC_5(VAR_10->hdr.count);
  VAR_12 = -1;
 }



 if (!VAR_10->hdr.stale) {
  VAR_11 = &VAR_10->ents[VAR_6];
  if (VAR_6 < FUNC_5(VAR_10->hdr.count))
   FUNC_8(VAR_11 + 1, VAR_11,
    (FUNC_5(VAR_10->hdr.count) - VAR_6) * sizeof(*VAR_11));
  VAR_13 = VAR_6;
  VAR_12 = FUNC_5(VAR_10->hdr.count);
  FUNC_4(&VAR_10->hdr.count, 1);
 }



 else {




  if (VAR_7 == 0) {



   for (VAR_14 = VAR_6 - 1;
        VAR_14 >= 0 &&
    FUNC_6(VAR_10->ents[VAR_14].address) !=
    VAR_3;
        VAR_14--)
    continue;





   for (VAR_9 = VAR_6;
        VAR_9 < FUNC_5(VAR_10->hdr.count) &&
    FUNC_6(VAR_10->ents[VAR_9].address) !=
    VAR_3 &&
    (VAR_14 < 0 ||
     VAR_6 - VAR_14 - 1 >= VAR_9 - VAR_6);
        VAR_9++)
    continue;
  }




  if (VAR_14 >= 0 &&
      (VAR_9 == FUNC_5(VAR_10->hdr.count) ||
       VAR_6 - VAR_14 - 1 < VAR_9 - VAR_6)) {
   FUNC_0(FUNC_6(VAR_10->ents[VAR_14].address) ==
          VAR_3);
   FUNC_0(VAR_6 - VAR_14 - 1 >= 0);
   if (VAR_6 - VAR_14 - 1 > 0)
    FUNC_8(&VAR_10->ents[VAR_14],
     &VAR_10->ents[VAR_14 + 1],
     (VAR_6 - VAR_14 - 1) * sizeof(*VAR_11));
   VAR_11 = &VAR_10->ents[VAR_6 - 1];
   VAR_13 = FUNC_2(VAR_14, VAR_13);
   VAR_12 = FUNC_1(VAR_6 - 1, VAR_12);
  }




  else {
   FUNC_0(FUNC_6(VAR_10->ents[VAR_9].address) ==
          VAR_3);
   FUNC_0(VAR_9 - VAR_6 >= 0);
   if (VAR_9 - VAR_6 > 0)
    FUNC_8(&VAR_10->ents[VAR_6 + 1],
     &VAR_10->ents[VAR_6],
     (VAR_9 - VAR_6) * sizeof(*VAR_11));
   VAR_11 = &VAR_10->ents[VAR_6];
   VAR_13 = FUNC_2(VAR_6, VAR_13);
   VAR_12 = FUNC_1(VAR_9, VAR_12);
  }
  FUNC_4(&VAR_10->hdr.stale, -1);
 }



 VAR_11->hashval = FUNC_7(VAR_5->hashval);
 VAR_11->address = FUNC_7(FUNC_10(VAR_15,
    VAR_5->blkno, VAR_5->index));
 FUNC_13(VAR_16, VAR_4);
 FUNC_12(VAR_16, VAR_4, VAR_13, VAR_12);
 FUNC_14(VAR_8, VAR_4);
 return 0;
}

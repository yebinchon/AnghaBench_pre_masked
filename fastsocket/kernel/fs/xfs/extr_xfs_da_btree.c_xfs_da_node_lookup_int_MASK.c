
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_9__ ;
typedef struct TYPE_27__ TYPE_8__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_15__ ;


typedef scalar_t__ xfs_dahash_t ;
typedef scalar_t__ xfs_dablk_t ;
struct TYPE_20__ {int active; TYPE_4__* blk; } ;
struct TYPE_23__ {TYPE_15__ path; TYPE_1__* mp; TYPE_8__* args; } ;
typedef TYPE_3__ xfs_da_state_t ;
struct TYPE_24__ {scalar_t__ magic; scalar_t__ hashval; int index; scalar_t__ blkno; TYPE_9__* bp; } ;
typedef TYPE_4__ xfs_da_state_blk_t ;
struct TYPE_25__ {int before; int hashval; } ;
typedef TYPE_5__ xfs_da_node_entry_t ;
struct TYPE_22__ {int count; } ;
struct TYPE_26__ {TYPE_5__* btree; TYPE_2__ hdr; int magic; } ;
typedef TYPE_6__ xfs_da_intnode_t ;
typedef TYPE_6__ xfs_da_blkinfo_t ;
struct TYPE_27__ {scalar_t__ whichfork; scalar_t__ hashval; int index; scalar_t__ blkno; int dp; int trans; } ;
typedef TYPE_8__ xfs_da_args_t ;
struct TYPE_28__ {TYPE_6__* data; } ;
struct TYPE_21__ {scalar_t__ m_dirleafblk; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int) ;
 void* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (TYPE_9__*,int *) ;
 int FUNC_5 (TYPE_9__*,TYPE_8__*) ;
 int FUNC_6 (TYPE_3__*,TYPE_15__*,int,int,int*) ;
 int FUNC_7 (int ,int ,scalar_t__,int,TYPE_9__**,scalar_t__) ;
 scalar_t__ FUNC_8 (TYPE_9__*,int *) ;
 int FUNC_9 (TYPE_9__*,TYPE_8__*,int*,TYPE_3__*) ;

int
FUNC_10(xfs_da_state_t *VAR_8, int *VAR_9)
{
 xfs_da_state_blk_t *VAR_10;
 xfs_da_blkinfo_t *VAR_11;
 xfs_da_intnode_t *VAR_12;
 xfs_da_node_entry_t *VAR_13;
 xfs_dablk_t VAR_14;
 int VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;
 xfs_dahash_t VAR_20, VAR_21;
 xfs_da_args_t *VAR_22;

 VAR_22 = VAR_8->args;





 VAR_14 = (VAR_22->whichfork == VAR_4)? VAR_8->mp->m_dirleafblk : 0;
 for (VAR_10 = &VAR_8->path.blk[0], VAR_8->path.active = 1;
    VAR_8->path.active <= VAR_6;
    VAR_10++, VAR_8->path.active++) {



  VAR_10->blkno = VAR_14;
  VAR_18 = FUNC_7(VAR_22->trans, VAR_22->dp, VAR_14,
     -1, &VAR_10->bp, VAR_22->whichfork);
  if (VAR_18) {
   VAR_10->blkno = 0;
   VAR_8->path.active--;
   return(VAR_18);
  }
  VAR_11 = VAR_10->bp->data;
  VAR_10->magic = FUNC_2(VAR_11->magic);
  FUNC_0(VAR_10->magic == VAR_5 ||
         VAR_10->magic == VAR_7 ||
         VAR_10->magic == VAR_3);




  if (VAR_10->magic == VAR_5) {
   VAR_12 = VAR_10->bp->data;
   VAR_17 = FUNC_2(VAR_12->hdr.count);
   VAR_10->hashval = FUNC_3(VAR_12->btree[VAR_17-1].hashval);




   VAR_15 = VAR_16 = VAR_17 / 2;
   VAR_20 = VAR_22->hashval;
   for (VAR_13 = &VAR_12->btree[VAR_15]; VAR_16 > 4;
       VAR_13 = &VAR_12->btree[VAR_15]) {
    VAR_16 /= 2;
    VAR_21 = FUNC_3(VAR_13->hashval);
    if (VAR_21 < VAR_20)
     VAR_15 += VAR_16;
    else if (VAR_21 > VAR_20)
     VAR_15 -= VAR_16;
    else
     break;
   }
   FUNC_0((VAR_15 >= 0) && (VAR_15 < VAR_17));
   FUNC_0((VAR_16 <= 4) || (FUNC_3(VAR_13->hashval) == VAR_20));





   while ((VAR_15 > 0) && (FUNC_3(VAR_13->hashval) >= VAR_20)) {
    VAR_13--;
    VAR_15--;
   }
   while ((VAR_15 < VAR_17) && (FUNC_3(VAR_13->hashval) < VAR_20)) {
    VAR_13++;
    VAR_15++;
   }




   if (VAR_15 == VAR_17) {
    VAR_10->index = VAR_17-1;
    VAR_14 = FUNC_3(VAR_12->btree[VAR_17-1].before);
   } else {
    VAR_10->index = VAR_15;
    VAR_14 = FUNC_3(VAR_13->before);
   }
  } else if (VAR_10->magic == VAR_3) {
   VAR_10->hashval = FUNC_4(VAR_10->bp, ((void*)0));
   break;
  } else if (VAR_10->magic == VAR_7) {
   VAR_10->hashval = FUNC_8(VAR_10->bp, ((void*)0));
   break;
  }
 }







 for (;;) {
  if (VAR_10->magic == VAR_7) {
   VAR_19 = FUNC_9(VAR_10->bp, VAR_22,
       &VAR_10->index, VAR_8);
  } else if (VAR_10->magic == VAR_3) {
   VAR_19 = FUNC_5(VAR_10->bp, VAR_22);
   VAR_10->index = VAR_22->index;
   VAR_22->blkno = VAR_10->blkno;
  } else {
   FUNC_0(0);
   return FUNC_1(VAR_0);
  }
  if (((VAR_19 == VAR_2) || (VAR_19 == VAR_1)) &&
      (VAR_10->hashval == VAR_22->hashval)) {
   VAR_18 = FUNC_6(VAR_8, &VAR_8->path, 1, 1,
        &VAR_19);
   if (VAR_18)
    return(VAR_18);
   if (VAR_19 == 0) {
    continue;
   } else if (VAR_10->magic == VAR_3) {

    VAR_19 = FUNC_1(VAR_1);
   }
  }
  break;
 }
 *VAR_9 = VAR_19;
 return(0);
}

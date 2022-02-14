
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_9__ ;
typedef struct TYPE_31__ TYPE_8__ ;
typedef struct TYPE_30__ TYPE_6__ ;
typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;
typedef struct TYPE_24__ TYPE_14__ ;
typedef struct TYPE_23__ TYPE_13__ ;
typedef struct TYPE_22__ TYPE_11__ ;
typedef struct TYPE_21__ TYPE_10__ ;


typedef scalar_t__ xfs_ino_t ;
struct TYPE_26__ {int magic; } ;
struct TYPE_29__ {TYPE_2__ hdr; TYPE_6__* ents; } ;
typedef TYPE_5__ xfs_dir2_leaf_t ;
struct TYPE_30__ {int address; } ;
typedef TYPE_6__ xfs_dir2_leaf_entry_t ;
typedef TYPE_5__ xfs_dir2_data_t ;
struct TYPE_31__ {int inumber; } ;
typedef TYPE_8__ xfs_dir2_data_entry_t ;
struct TYPE_28__ {int active; TYPE_10__* blk; } ;
struct TYPE_27__ {TYPE_14__* bp; } ;
struct TYPE_32__ {int extravalid; TYPE_4__ path; TYPE_3__ extrablk; TYPE_13__* mp; int node_ents; int blocksize; TYPE_11__* args; } ;
typedef TYPE_9__ xfs_da_state_t ;
struct TYPE_21__ {scalar_t__ magic; size_t index; TYPE_14__* bp; } ;
typedef TYPE_10__ xfs_da_state_blk_t ;
struct TYPE_22__ {scalar_t__ inumber; int trans; TYPE_1__* dp; } ;
typedef TYPE_11__ xfs_da_args_t ;
struct TYPE_25__ {TYPE_13__* i_mount; } ;
struct TYPE_24__ {TYPE_5__* data; } ;
struct TYPE_23__ {int m_dir_node_ents; int m_dirblksize; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_11__*) ;
 int FUNC_5 (int ,TYPE_14__*) ;
 int FUNC_6 (TYPE_9__*,int*) ;
 TYPE_9__* FUNC_7 () ;
 int FUNC_8 (TYPE_9__*) ;
 int FUNC_9 (int ,TYPE_14__*,TYPE_8__*) ;
 int FUNC_10 (TYPE_13__*,scalar_t__) ;

int
FUNC_11(
 xfs_da_args_t *VAR_3)
{
 xfs_da_state_blk_t *VAR_4;
 xfs_dir2_data_t *VAR_5;
 xfs_dir2_data_entry_t *VAR_6;
 int VAR_7;
 int VAR_8;
 xfs_ino_t VAR_9;
 xfs_dir2_leaf_t *VAR_10;
 xfs_dir2_leaf_entry_t *VAR_11;
 int VAR_12;
 xfs_da_state_t *VAR_13;

 FUNC_4(VAR_3);




 VAR_13 = FUNC_7();
 VAR_13->args = VAR_3;
 VAR_13->mp = VAR_3->dp->i_mount;
 VAR_13->blocksize = VAR_13->mp->m_dirblksize;
 VAR_13->node_ents = VAR_13->mp->m_dir_node_ents;
 VAR_9 = VAR_3->inumber;



 VAR_7 = FUNC_6(VAR_13, &VAR_12);
 if (VAR_7) {
  VAR_12 = VAR_7;
 }




 if (VAR_12 == VAR_0) {



  VAR_4 = &VAR_13->path.blk[VAR_13->path.active - 1];
  FUNC_0(VAR_4->magic == VAR_2);
  VAR_10 = VAR_4->bp->data;
  VAR_11 = &VAR_10->ents[VAR_4->index];
  FUNC_0(VAR_13->extravalid);



  VAR_5 = VAR_13->extrablk.bp->data;
  FUNC_0(FUNC_1(VAR_5->hdr.magic) == VAR_1);
  VAR_6 = (xfs_dir2_data_entry_t *)
        ((char *)VAR_5 +
         FUNC_10(VAR_13->mp, FUNC_1(VAR_11->address)));
  FUNC_0(VAR_9 != FUNC_2(VAR_6->inumber));



  VAR_6->inumber = FUNC_3(VAR_9);
  FUNC_9(VAR_3->trans, VAR_13->extrablk.bp, VAR_6);
  VAR_12 = 0;
 }



 else if (VAR_13->extravalid) {
  FUNC_5(VAR_3->trans, VAR_13->extrablk.bp);
  VAR_13->extrablk.bp = ((void*)0);
 }



 for (VAR_8 = 0; VAR_8 < VAR_13->path.active; VAR_8++) {
  FUNC_5(VAR_3->trans, VAR_13->path.blk[VAR_8].bp);
  VAR_13->path.blk[VAR_8].bp = ((void*)0);
 }
 FUNC_8(VAR_13);
 return VAR_12;
}

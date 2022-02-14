
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_14__ ;


struct TYPE_22__ {int namelen; int name; } ;
typedef TYPE_6__ xfs_dir2_data_entry_t ;
struct TYPE_21__ {int index; TYPE_14__* bp; } ;
struct TYPE_20__ {int active; TYPE_3__* blk; } ;
struct TYPE_23__ {TYPE_5__ extrablk; scalar_t__ extravalid; TYPE_4__ path; TYPE_2__* mp; int node_ents; int blocksize; TYPE_8__* args; } ;
typedef TYPE_7__ xfs_da_state_t ;
struct TYPE_24__ {scalar_t__ cmpresult; int trans; TYPE_1__* dp; } ;
typedef TYPE_8__ xfs_da_args_t ;
struct TYPE_19__ {TYPE_14__* bp; } ;
struct TYPE_18__ {int m_dir_node_ents; int m_dirblksize; } ;
struct TYPE_17__ {TYPE_2__* i_mount; } ;
struct TYPE_16__ {scalar_t__ data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_8__*) ;
 int FUNC_1 (int ,TYPE_14__*) ;
 int FUNC_2 (TYPE_7__*,int*) ;
 TYPE_7__* FUNC_3 () ;
 int FUNC_4 (TYPE_7__*) ;
 int FUNC_5 (TYPE_8__*,int ,int ) ;

int
FUNC_6(
 xfs_da_args_t *VAR_2)
{
 int VAR_3;
 int VAR_4;
 int VAR_5;
 xfs_da_state_t *VAR_6;

 FUNC_0(VAR_2);




 VAR_6 = FUNC_3();
 VAR_6->args = VAR_2;
 VAR_6->mp = VAR_2->dp->i_mount;
 VAR_6->blocksize = VAR_6->mp->m_dirblksize;
 VAR_6->node_ents = VAR_6->mp->m_dir_node_ents;



 VAR_3 = FUNC_2(VAR_6, &VAR_5);
 if (VAR_3)
  VAR_5 = VAR_3;
 else if (VAR_5 == VAR_0 && VAR_2->cmpresult == VAR_1) {

  xfs_dir2_data_entry_t *VAR_7;

  VAR_7 = (xfs_dir2_data_entry_t *)((char *)VAR_6->extrablk.bp->
      data + VAR_6->extrablk.index);
  VAR_5 = FUNC_5(VAR_2, VAR_7->name, VAR_7->namelen);
 }



 for (VAR_4 = 0; VAR_4 < VAR_6->path.active; VAR_4++) {
  FUNC_1(VAR_2->trans, VAR_6->path.blk[VAR_4].bp);
  VAR_6->path.blk[VAR_4].bp = ((void*)0);
 }



 if (VAR_6->extravalid && VAR_6->extrablk.bp) {
  FUNC_1(VAR_2->trans, VAR_6->extrablk.bp);
  VAR_6->extrablk.bp = ((void*)0);
 }
 FUNC_4(VAR_6);
 return VAR_5;
}

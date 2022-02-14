
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_14__ ;


struct TYPE_16__ {int active; TYPE_4__* blk; } ;
struct TYPE_19__ {int extravalid; TYPE_14__ path; int extrablk; TYPE_2__* mp; int node_ents; int blocksize; TYPE_5__* args; } ;
typedef TYPE_3__ xfs_da_state_t ;
struct TYPE_20__ {scalar_t__ magic; int index; int bp; } ;
typedef TYPE_4__ xfs_da_state_blk_t ;
struct TYPE_21__ {TYPE_1__* dp; } ;
typedef TYPE_5__ xfs_da_args_t ;
struct TYPE_18__ {int m_dir_node_ents; int m_dirblksize; } ;
struct TYPE_17__ {TYPE_2__* i_mount; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_3__*,TYPE_14__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,int*) ;
 TYPE_3__* FUNC_5 () ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_5__*,int ,int ,int *,int*) ;
 int FUNC_8 (TYPE_3__*) ;

int
FUNC_9(
 xfs_da_args_t *VAR_2)
{
 xfs_da_state_blk_t *VAR_3;
 int VAR_4;
 int VAR_5;
 xfs_da_state_t *VAR_6;

 FUNC_1(VAR_2);




 VAR_6 = FUNC_5();
 VAR_6->args = VAR_2;
 VAR_6->mp = VAR_2->dp->i_mount;
 VAR_6->blocksize = VAR_6->mp->m_dirblksize;
 VAR_6->node_ents = VAR_6->mp->m_dir_node_ents;



 VAR_4 = FUNC_4(VAR_6, &VAR_5);
 if (VAR_4)
  VAR_5 = VAR_4;



 if (VAR_5 != VAR_0) {
  FUNC_6(VAR_6);
  return VAR_5;
 }
 VAR_3 = &VAR_6->path.blk[VAR_6->path.active - 1];
 FUNC_0(VAR_3->magic == VAR_1);
 FUNC_0(VAR_6->extravalid);




 VAR_4 = FUNC_7(VAR_2, VAR_3->bp, VAR_3->index,
  &VAR_6->extrablk, &VAR_5);
 if (VAR_4)
  return VAR_4;



 FUNC_2(VAR_6, &VAR_6->path);



 if (VAR_5 && VAR_6->path.active > 1)
  VAR_4 = FUNC_3(VAR_6);



 if (!VAR_4)
  VAR_4 = FUNC_8(VAR_6);
 FUNC_6(VAR_6);
 return VAR_4;
}

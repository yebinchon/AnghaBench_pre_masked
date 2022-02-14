
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
struct TYPE_19__ {TYPE_14__ path; int extrablk; scalar_t__ extravalid; TYPE_2__* mp; int node_ents; int blocksize; TYPE_5__* args; } ;
typedef TYPE_3__ xfs_da_state_t ;
struct TYPE_20__ {scalar_t__ magic; int index; int bp; } ;
typedef TYPE_4__ xfs_da_state_blk_t ;
struct TYPE_21__ {int op_flags; scalar_t__ total; TYPE_1__* dp; } ;
typedef TYPE_5__ xfs_da_args_t ;
struct TYPE_18__ {int m_dir_node_ents; int m_dirblksize; } ;
struct TYPE_17__ {TYPE_2__* i_mount; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_3__*,TYPE_14__*) ;
 int FUNC_3 (TYPE_3__*,int*) ;
 int FUNC_4 (TYPE_3__*) ;
 TYPE_3__* FUNC_5 () ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (int ,TYPE_5__*,int ) ;
 int FUNC_8 (TYPE_5__*,int *) ;

int
FUNC_9(
 xfs_da_args_t *VAR_4)
{
 xfs_da_state_blk_t *VAR_5;
 int VAR_6;
 int VAR_7;
 xfs_da_state_t *VAR_8;

 FUNC_1(VAR_4);




 VAR_8 = FUNC_5();
 VAR_8->args = VAR_4;
 VAR_8->mp = VAR_4->dp->i_mount;
 VAR_8->blocksize = VAR_8->mp->m_dirblksize;
 VAR_8->node_ents = VAR_8->mp->m_dir_node_ents;




 VAR_6 = FUNC_3(VAR_8, &VAR_7);
 if (VAR_6)
  VAR_7 = VAR_6;
 if (VAR_7 != VAR_0) {
  goto done;
 }




 VAR_7 = FUNC_8(VAR_4,
  VAR_8->extravalid ? &VAR_8->extrablk : ((void*)0));
 if (VAR_7) {
  goto done;
 }
 VAR_5 = &VAR_8->path.blk[VAR_8->path.active - 1];
 FUNC_0(VAR_5->magic == VAR_3);



 VAR_7 = FUNC_7(VAR_5->bp, VAR_4, VAR_5->index);
 if (VAR_7 == 0) {



  if (!(VAR_4->op_flags & VAR_2))
   FUNC_2(VAR_8, &VAR_8->path);
 } else {



  if (VAR_4->total == 0) {
   FUNC_0(VAR_7 == VAR_1);
   goto done;
  }



  VAR_7 = FUNC_4(VAR_8);
 }
done:
 FUNC_6(VAR_8);
 return VAR_7;
}

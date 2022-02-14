
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int xfs_trans_t ;
struct TYPE_8__ {int m_dirblkfsbs; } ;
typedef TYPE_1__ xfs_mount_t ;
struct TYPE_9__ {TYPE_1__* i_mount; } ;
typedef TYPE_2__ xfs_inode_t ;
typedef int xfs_dabuf_t ;
typedef int xfs_dablk_t ;
struct TYPE_10__ {int whichfork; int flist; int firstblock; int * trans; TYPE_2__* dp; } ;
typedef TYPE_3__ xfs_da_args_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,TYPE_2__*,int ,int,int,int ,int ,int ,int*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (TYPE_3__*,int *,int **) ;

int
FUNC_5(xfs_da_args_t *VAR_3, xfs_dablk_t VAR_4,
      xfs_dabuf_t *VAR_5)
{
 xfs_inode_t *VAR_6;
 int VAR_7, VAR_8, VAR_9, VAR_10;
 xfs_trans_t *VAR_11;
 xfs_mount_t *VAR_12;

 FUNC_0(VAR_3);

 VAR_6 = VAR_3->dp;
 VAR_9 = VAR_3->whichfork;
 VAR_11 = VAR_3->trans;
 VAR_12 = VAR_6->i_mount;
 if (VAR_9 == VAR_2)
  VAR_10 = VAR_12->m_dirblkfsbs;
 else
  VAR_10 = 1;
 for (;;) {




  if ((VAR_8 = FUNC_2(VAR_11, VAR_6, VAR_4, VAR_10,
    FUNC_1(VAR_9)|VAR_1,
    0, VAR_3->firstblock, VAR_3->flist,
    &VAR_7)) == VAR_0) {
   if (VAR_9 != VAR_2)
    break;
   if ((VAR_8 = FUNC_4(VAR_3, &VAR_4,
     &VAR_5)))
    break;
  } else {
   break;
  }
 }
 FUNC_3(VAR_11, VAR_5);
 return VAR_8;
}

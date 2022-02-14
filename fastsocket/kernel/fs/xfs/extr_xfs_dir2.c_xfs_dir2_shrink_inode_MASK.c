
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int xfs_trans_t ;
struct TYPE_15__ {scalar_t__ m_dirdatablk; int m_dirblkfsbs; } ;
typedef TYPE_2__ xfs_mount_t ;
struct TYPE_14__ {scalar_t__ di_size; } ;
struct TYPE_16__ {TYPE_1__ i_d; TYPE_2__* i_mount; } ;
typedef TYPE_3__ xfs_inode_t ;
typedef scalar_t__ xfs_fileoff_t ;
typedef scalar_t__ xfs_dir2_db_t ;
typedef int xfs_dabuf_t ;
typedef scalar_t__ xfs_dablk_t ;
struct TYPE_17__ {int flist; int firstblock; int * trans; TYPE_3__* dp; } ;
typedef TYPE_4__ xfs_da_args_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*,scalar_t__) ;
 int VAR_2 ;
 int FUNC_3 (TYPE_4__*,scalar_t__) ;
 int FUNC_4 (int *,TYPE_3__*,scalar_t__*,int ) ;
 int FUNC_5 (int *,TYPE_3__*,scalar_t__,int ,int ,int ,int ,int ,int*) ;
 int FUNC_6 (int *,int *) ;
 scalar_t__ FUNC_7 (TYPE_2__*,scalar_t__,int ) ;
 scalar_t__ FUNC_8 (TYPE_2__*,scalar_t__) ;
 int FUNC_9 (int *,TYPE_3__*,int ) ;

int
FUNC_10(
 xfs_da_args_t *VAR_3,
 xfs_dir2_db_t VAR_4,
 xfs_dabuf_t *VAR_5)
{
 xfs_fileoff_t VAR_6;
 xfs_dablk_t VAR_7;
 int VAR_8;
 xfs_inode_t *VAR_9;
 int VAR_10;
 xfs_mount_t *VAR_11;
 xfs_trans_t *VAR_12;

 FUNC_3(VAR_3, VAR_4);

 VAR_9 = VAR_3->dp;
 VAR_11 = VAR_9->i_mount;
 VAR_12 = VAR_3->trans;
 VAR_7 = FUNC_8(VAR_11, VAR_4);



 if ((VAR_10 = FUNC_5(VAR_12, VAR_9, VAR_7, VAR_11->m_dirblkfsbs,
   VAR_0, 0, VAR_3->firstblock, VAR_3->flist,
   &VAR_8))) {
  return VAR_10;
 }
 FUNC_0(VAR_8);



 FUNC_6(VAR_12, VAR_5);



 if (VAR_4 >= FUNC_1(VAR_11))
  return 0;



 if (VAR_9->i_d.di_size > FUNC_7(VAR_11, VAR_4 + 1, 0))
  return 0;
 VAR_6 = VAR_7;
 if ((VAR_10 = FUNC_4(VAR_12, VAR_9, &VAR_6, VAR_1))) {



  return VAR_10;
 }
 if (VAR_4 == VAR_11->m_dirdatablk)
  FUNC_0(VAR_6 == 0);
 else
  FUNC_0(VAR_6 > 0);



 VAR_9->i_d.di_size = FUNC_2(VAR_11, VAR_6);
 FUNC_9(VAR_12, VAR_9, VAR_2);
 return 0;
}

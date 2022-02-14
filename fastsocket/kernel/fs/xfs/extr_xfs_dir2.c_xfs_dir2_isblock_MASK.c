
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int xfs_trans_t ;
struct TYPE_8__ {scalar_t__ m_dirblksize; } ;
typedef TYPE_2__ xfs_mount_t ;
struct TYPE_7__ {scalar_t__ di_size; } ;
struct TYPE_9__ {TYPE_1__ i_d; TYPE_2__* i_mount; } ;
typedef TYPE_3__ xfs_inode_t ;
typedef int xfs_fileoff_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (int *,TYPE_3__*,int *,int ) ;

int
FUNC_3(
 xfs_trans_t *VAR_1,
 xfs_inode_t *VAR_2,
 int *VAR_3)
{
 xfs_fileoff_t VAR_4;
 xfs_mount_t *VAR_5;
 int VAR_6;

 VAR_5 = VAR_2->i_mount;
 if ((VAR_6 = FUNC_2(VAR_1, VAR_2, &VAR_4, VAR_0)))
  return VAR_6;
 VAR_6 = FUNC_1(VAR_5, VAR_4) == VAR_5->m_dirblksize;
 FUNC_0(VAR_6 == 0 || VAR_2->i_d.di_size == VAR_5->m_dirblksize);
 *VAR_3 = VAR_6;
 return 0;
}

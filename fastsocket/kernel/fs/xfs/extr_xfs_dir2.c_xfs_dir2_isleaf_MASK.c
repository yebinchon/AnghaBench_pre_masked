
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int xfs_trans_t ;
struct TYPE_6__ {int sb_dirblklog; } ;
struct TYPE_7__ {scalar_t__ m_dirleafblk; TYPE_1__ m_sb; } ;
typedef TYPE_2__ xfs_mount_t ;
struct TYPE_8__ {TYPE_2__* i_mount; } ;
typedef TYPE_3__ xfs_inode_t ;
typedef scalar_t__ xfs_fileoff_t ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_3__*,scalar_t__*,int ) ;

int
FUNC_1(
 xfs_trans_t *VAR_1,
 xfs_inode_t *VAR_2,
 int *VAR_3)
{
 xfs_fileoff_t VAR_4;
 xfs_mount_t *VAR_5;
 int VAR_6;

 VAR_5 = VAR_2->i_mount;
 if ((VAR_6 = FUNC_0(VAR_1, VAR_2, &VAR_4, VAR_0)))
  return VAR_6;
 *VAR_3 = VAR_4 == VAR_5->m_dirleafblk + (1 << VAR_5->m_sb.sb_dirblklog);
 return 0;
}

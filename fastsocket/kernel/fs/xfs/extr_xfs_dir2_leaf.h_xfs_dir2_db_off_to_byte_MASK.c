
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int xfs_dir2_off_t ;
typedef scalar_t__ xfs_dir2_db_t ;
typedef int xfs_dir2_data_aoff_t ;
struct TYPE_2__ {int sb_blocklog; int sb_dirblklog; } ;
struct xfs_mount {TYPE_1__ m_sb; } ;



__attribute__((used)) static inline xfs_dir2_off_t
FUNC_0(struct xfs_mount *VAR_0, xfs_dir2_db_t VAR_1,
   xfs_dir2_data_aoff_t VAR_2)
{
 return ((xfs_dir2_off_t)(VAR_1) << ((VAR_0)->m_sb.sb_blocklog + (VAR_0)->m_sb.sb_dirblklog)) + (VAR_2);

}

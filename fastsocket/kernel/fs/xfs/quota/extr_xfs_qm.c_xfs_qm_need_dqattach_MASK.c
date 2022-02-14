
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ sb_uquotino; scalar_t__ sb_gquotino; } ;
struct xfs_mount {TYPE_1__ m_sb; } ;
struct xfs_inode {scalar_t__ i_ino; struct xfs_mount* i_mount; } ;


 int FUNC_0 (struct xfs_mount*) ;
 int FUNC_1 (struct xfs_mount*) ;
 int FUNC_2 (struct xfs_mount*,struct xfs_inode*) ;

__attribute__((used)) static bool
FUNC_3(
 struct xfs_inode *VAR_0)
{
 struct xfs_mount *VAR_1 = VAR_0->i_mount;

 if (!FUNC_1(VAR_1))
  return 0;
 if (!FUNC_0(VAR_1))
  return 0;
 if (!FUNC_2(VAR_1, VAR_0))
  return 0;
 if (VAR_0->i_ino == VAR_1->m_sb.sb_uquotino ||
     VAR_0->i_ino == VAR_1->m_sb.sb_gquotino)
  return 0;
 return 1;
}

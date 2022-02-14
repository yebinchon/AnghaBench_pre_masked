
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ xfs_extlen_t ;
struct TYPE_4__ {int di_flags; scalar_t__ di_extsize; } ;
struct xfs_inode {TYPE_3__* i_mount; TYPE_1__ i_d; } ;
struct TYPE_5__ {scalar_t__ sb_rextsize; } ;
struct TYPE_6__ {TYPE_2__ m_sb; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct xfs_inode*) ;

xfs_extlen_t
FUNC_1(
 struct xfs_inode *VAR_1)
{
 if ((VAR_1->i_d.di_flags & VAR_0) && VAR_1->i_d.di_extsize)
  return VAR_1->i_d.di_extsize;
 if (FUNC_0(VAR_1))
  return VAR_1->i_mount->m_sb.sb_rextsize;
 return 0;
}

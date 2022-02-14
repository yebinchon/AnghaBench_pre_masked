
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {int * t_dqinfo; TYPE_3__* t_mountp; } ;
typedef TYPE_2__ xfs_trans_t ;
struct TYPE_13__ {scalar_t__ sb_uquotino; scalar_t__ sb_gquotino; } ;
struct TYPE_15__ {TYPE_1__ m_sb; } ;
typedef TYPE_3__ xfs_mount_t ;
struct TYPE_16__ {scalar_t__ i_ino; scalar_t__ i_gdquot; scalar_t__ i_udquot; } ;
typedef TYPE_4__ xfs_inode_t ;
typedef int uint ;


 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,scalar_t__,int ,long) ;

void
FUNC_6(
 xfs_trans_t *VAR_0,
 xfs_inode_t *VAR_1,
 uint VAR_2,
 long VAR_3)
{
 xfs_mount_t *VAR_4 = VAR_0->t_mountp;

 if (!FUNC_2(VAR_4) ||
     !FUNC_1(VAR_4) ||
     VAR_1->i_ino == VAR_4->m_sb.sb_uquotino ||
     VAR_1->i_ino == VAR_4->m_sb.sb_gquotino)
  return;

 if (VAR_0->t_dqinfo == ((void*)0))
  FUNC_4(VAR_0);

 if (FUNC_3(VAR_4) && VAR_1->i_udquot)
  (void) FUNC_5(VAR_0, VAR_1->i_udquot, VAR_2, VAR_3);
 if (FUNC_0(VAR_4) && VAR_1->i_gdquot)
  (void) FUNC_5(VAR_0, VAR_1->i_gdquot, VAR_2, VAR_3);
}

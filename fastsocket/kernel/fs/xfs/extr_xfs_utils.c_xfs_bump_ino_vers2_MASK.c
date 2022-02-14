
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {TYPE_3__* t_mountp; } ;
typedef TYPE_2__ xfs_trans_t ;
struct TYPE_11__ {int m_sb_lock; int m_sb; } ;
typedef TYPE_3__ xfs_mount_t ;
struct TYPE_9__ {int di_version; int * di_pad; scalar_t__ di_onlink; } ;
struct TYPE_12__ {TYPE_1__ i_d; } ;
typedef TYPE_4__ xfs_inode_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_4__*,int ) ;
 int FUNC_5 (TYPE_2__*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void
FUNC_8(
 xfs_trans_t *VAR_2,
 xfs_inode_t *VAR_3)
{
 xfs_mount_t *VAR_4;

 FUNC_0(FUNC_4(VAR_3, VAR_0));
 FUNC_0(VAR_3->i_d.di_version == 1);

 VAR_3->i_d.di_version = 2;
 VAR_3->i_d.di_onlink = 0;
 FUNC_1(&(VAR_3->i_d.di_pad[0]), 0, sizeof(VAR_3->i_d.di_pad));
 VAR_4 = VAR_2->t_mountp;
 if (!FUNC_7(&VAR_4->m_sb)) {
  FUNC_2(&VAR_4->m_sb_lock);
  if (!FUNC_7(&VAR_4->m_sb)) {
   FUNC_6(&VAR_4->m_sb);
   FUNC_3(&VAR_4->m_sb_lock);
   FUNC_5(VAR_2, VAR_1);
  } else {
   FUNC_3(&VAR_4->m_sb_lock);
  }
 }

}

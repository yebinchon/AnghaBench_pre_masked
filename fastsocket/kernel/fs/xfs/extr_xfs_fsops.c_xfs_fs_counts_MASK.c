
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int sb_icount; int sb_ifree; int sb_frextents; scalar_t__ sb_fdblocks; } ;
struct TYPE_9__ {int m_sb_lock; TYPE_1__ m_sb; } ;
typedef TYPE_2__ xfs_mount_t ;
struct TYPE_10__ {int allocino; int freeino; int freertx; scalar_t__ freedata; } ;
typedef TYPE_3__ xfs_fsop_counts_t ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*,int ) ;

int
FUNC_4(
 xfs_mount_t *VAR_1,
 xfs_fsop_counts_t *VAR_2)
{
 FUNC_3(VAR_1, VAR_0);
 FUNC_1(&VAR_1->m_sb_lock);
 VAR_2->freedata = VAR_1->m_sb.sb_fdblocks - FUNC_0(VAR_1);
 VAR_2->freertx = VAR_1->m_sb.sb_frextents;
 VAR_2->freeino = VAR_1->m_sb.sb_ifree;
 VAR_2->allocino = VAR_1->m_sb.sb_icount;
 FUNC_2(&VAR_1->m_sb_lock);
 return 0;
}

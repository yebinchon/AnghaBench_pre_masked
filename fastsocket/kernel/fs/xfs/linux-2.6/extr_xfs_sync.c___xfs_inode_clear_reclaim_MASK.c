
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int pag_agno; int pag_ici_reclaimable; } ;
typedef TYPE_1__ xfs_perag_t ;
struct TYPE_8__ {TYPE_3__* i_mount; int i_ino; } ;
typedef TYPE_2__ xfs_inode_t ;
struct TYPE_9__ {int m_perag_lock; int m_perag_tree; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_3__*,int ,int,int ) ;

void
FUNC_5(
 xfs_perag_t *VAR_2,
 xfs_inode_t *VAR_3)
{
 VAR_2->pag_ici_reclaimable--;
 if (!VAR_2->pag_ici_reclaimable) {

  FUNC_2(&VAR_3->i_mount->m_perag_lock);
  FUNC_1(&VAR_3->i_mount->m_perag_tree,
    FUNC_0(VAR_3->i_mount, VAR_3->i_ino),
    VAR_0);
  FUNC_3(&VAR_3->i_mount->m_perag_lock);
  FUNC_4(VAR_3->i_mount, VAR_2->pag_agno,
       -1, VAR_1);
 }
}

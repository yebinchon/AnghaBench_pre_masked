
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct xfs_perag {int pag_ici_reclaimable; int pag_agno; int pag_ici_root; } ;
struct xfs_inode {TYPE_1__* i_mount; int i_ino; } ;
struct TYPE_4__ {int m_perag_lock; int m_perag_tree; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int VAR_1 ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*,int ,int,int ) ;

void
FUNC_6(
 struct xfs_perag *VAR_2,
 struct xfs_inode *VAR_3)
{
 FUNC_2(&VAR_2->pag_ici_root,
      FUNC_0(VAR_3->i_mount, VAR_3->i_ino),
      VAR_0);

 if (!VAR_2->pag_ici_reclaimable) {

  FUNC_3(&VAR_3->i_mount->m_perag_lock);
  FUNC_2(&VAR_3->i_mount->m_perag_tree,
    FUNC_1(VAR_3->i_mount, VAR_3->i_ino),
    VAR_0);
  FUNC_4(&VAR_3->i_mount->m_perag_lock);
  FUNC_5(VAR_3->i_mount, VAR_2->pag_agno,
       -1, VAR_1);
 }
 VAR_2->pag_ici_reclaimable++;
}

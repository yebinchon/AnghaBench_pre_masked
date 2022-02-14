
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct xfs_mount* i_mount; int i_ino; } ;
typedef TYPE_1__ xfs_inode_t ;
struct xfs_perag {int pag_ici_lock; int pag_agno; int pag_ici_root; } ;
struct xfs_mount {int m_perag_lock; int m_perag_tree; } ;


 int VAR_0 ;
 int FUNC_0 (struct xfs_mount*,int ) ;
 int FUNC_1 (struct xfs_mount*,int ) ;
 int VAR_1 ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (struct xfs_mount*,int ,int,int ) ;
 struct xfs_perag* FUNC_8 (struct xfs_mount*,int ) ;
 int FUNC_9 (struct xfs_perag*) ;

void
FUNC_10(
 xfs_inode_t *VAR_2)
{
 struct xfs_mount *VAR_3 = VAR_2->i_mount;
 struct xfs_perag *VAR_4;

 VAR_4 = FUNC_8(VAR_3, FUNC_1(VAR_3, VAR_2->i_ino));
 FUNC_4(&VAR_4->pag_ici_lock);
 FUNC_6(VAR_2);

 FUNC_2(&VAR_4->pag_ici_root,
        FUNC_0(VAR_2->i_mount, VAR_2->i_ino),
        VAR_0);
 if (!FUNC_3(&VAR_4->pag_ici_root, VAR_0)) {

  FUNC_4(&VAR_2->i_mount->m_perag_lock);
  FUNC_2(&VAR_2->i_mount->m_perag_tree,
         FUNC_1(VAR_2->i_mount, VAR_2->i_ino),
         VAR_0);
  FUNC_5(&VAR_2->i_mount->m_perag_lock);
  FUNC_7(VAR_2->i_mount, VAR_4->pag_agno,
            -1, VAR_1);
 }

 FUNC_5(&VAR_4->pag_ici_lock);
 FUNC_9(VAR_4);
}

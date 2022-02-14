
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int i_flags_lock; int i_ino; struct xfs_mount* i_mount; } ;
typedef TYPE_1__ xfs_inode_t ;
struct xfs_perag {int pag_ici_lock; } ;
struct xfs_mount {int dummy; } ;


 int FUNC_0 (struct xfs_mount*,int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (struct xfs_perag*,TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct xfs_perag* FUNC_5 (struct xfs_mount*,int ) ;
 int FUNC_6 (struct xfs_perag*) ;

void
FUNC_7(
 xfs_inode_t *VAR_1)
{
 struct xfs_mount *VAR_2 = VAR_1->i_mount;
 struct xfs_perag *VAR_3;

 VAR_3 = FUNC_5(VAR_2, FUNC_0(VAR_2, VAR_1->i_ino));

 FUNC_3(&VAR_3->pag_ici_lock);
 FUNC_3(&VAR_1->i_flags_lock);
 FUNC_2(VAR_3, VAR_1);
 FUNC_1(VAR_1, VAR_0);
 FUNC_4(&VAR_1->i_flags_lock);
 FUNC_4(&VAR_3->pag_ici_lock);
 FUNC_6(VAR_3);
}

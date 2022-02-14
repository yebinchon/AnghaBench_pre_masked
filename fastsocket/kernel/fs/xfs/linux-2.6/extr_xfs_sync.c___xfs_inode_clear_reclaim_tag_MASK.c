
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int pag_ici_root; } ;
typedef TYPE_1__ xfs_perag_t ;
typedef int xfs_mount_t ;
struct TYPE_8__ {int i_ino; } ;
typedef TYPE_2__ xfs_inode_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_2 (int *,int ,int ) ;

void
FUNC_3(
 xfs_mount_t *VAR_1,
 xfs_perag_t *VAR_2,
 xfs_inode_t *VAR_3)
{
 FUNC_2(&VAR_2->pag_ici_root,
   FUNC_0(VAR_1, VAR_3->i_ino), VAR_0);
 FUNC_1(VAR_2, VAR_3);
}

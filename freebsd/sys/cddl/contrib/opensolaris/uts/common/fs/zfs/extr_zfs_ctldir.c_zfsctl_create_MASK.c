
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* z_ctldir; int z_vfs; } ;
typedef TYPE_1__ zfsvfs_t ;
struct TYPE_7__ {int cmtime; int * snapdir; } ;
typedef TYPE_2__ zfsctl_root_t ;
typedef int vnode_t ;
typedef int uint64_t ;
typedef int sfs_node_t ;
typedef int crtime ;
struct TYPE_8__ {int z_sa_hdl; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ,int ,int **) ;
 TYPE_4__* FUNC_4 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int *,int *) ;
 scalar_t__ FUNC_6 (int ,int ,int **,int) ;
 int * FUNC_7 (int,char*,int ,int ) ;
 int FUNC_8 (int *) ;

void
FUNC_9(zfsvfs_t *VAR_3)
{
 zfsctl_root_t *VAR_4;
 sfs_node_t *VAR_5;
 vnode_t *VAR_6;
 uint64_t VAR_7[2];

 FUNC_0(VAR_3->z_ctldir == ((void*)0));

 VAR_5 = FUNC_7(sizeof(*VAR_5), "snapshot", VAR_1,
     VAR_2);
 VAR_4 = (zfsctl_root_t *)FUNC_7(sizeof(*VAR_4), ".zfs", 0,
     VAR_1);
 VAR_4->snapdir = VAR_5;

 FUNC_2(FUNC_3(VAR_3->z_vfs, VAR_0, &VAR_6) == 0);
 FUNC_2(0 == FUNC_6(FUNC_4(VAR_6)->z_sa_hdl, FUNC_1(VAR_3),
     &VAR_7, sizeof(VAR_7)));
 FUNC_5(&VAR_4->cmtime, VAR_7);
 FUNC_8(VAR_6);

 VAR_3->z_ctldir = VAR_4;
}

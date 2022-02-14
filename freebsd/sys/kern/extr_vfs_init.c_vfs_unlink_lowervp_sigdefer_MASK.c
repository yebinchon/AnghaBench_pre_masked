
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vnode {int dummy; } ;
struct mount {TYPE_2__* mnt_vfc; } ;
struct TYPE_4__ {TYPE_1__* vfc_vfsops_sd; } ;
struct TYPE_3__ {int (* vfs_unlink_lowervp ) (struct mount*,struct vnode*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mount*,struct vnode*) ;

__attribute__((used)) static void
FUNC_3(struct mount *VAR_1, struct vnode *VAR_2)
{
 int VAR_3;

 if (*VAR_1->mnt_vfc->vfc_vfsops_sd->vfs_unlink_lowervp == ((void*)0))
  return;
 VAR_3 = FUNC_1(VAR_0);
 (*(VAR_1)->mnt_vfc->vfc_vfsops_sd->vfs_unlink_lowervp)(VAR_1, VAR_2);
 FUNC_0(VAR_3);
}

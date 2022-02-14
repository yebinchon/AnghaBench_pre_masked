
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vnode {int dummy; } ;
struct mount {TYPE_2__* mnt_vfc; } ;
typedef int ino_t ;
struct TYPE_4__ {TYPE_1__* vfc_vfsops_sd; } ;
struct TYPE_3__ {int (* vfs_vget ) (struct mount*,int ,int,struct vnode**) ;} ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mount*,int ,int,struct vnode**) ;

__attribute__((used)) static int
FUNC_3(struct mount *VAR_1, ino_t VAR_2, int VAR_3, struct vnode **VAR_4)
{
 int VAR_5, VAR_6;

 VAR_5 = FUNC_1(VAR_0);
 VAR_6 = (*VAR_1->mnt_vfc->vfc_vfsops_sd->vfs_vget)(VAR_1, VAR_2, VAR_3, VAR_4);
 FUNC_0(VAR_5);
 return (VAR_6);
}

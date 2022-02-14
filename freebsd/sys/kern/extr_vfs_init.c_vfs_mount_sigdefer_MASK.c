
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mount {TYPE_2__* mnt_vfc; } ;
struct TYPE_4__ {int vfc_name; TYPE_1__* vfc_vfsops_sd; } ;
struct TYPE_3__ {int (* vfs_mount ) (struct mount*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct mount*) ;

__attribute__((used)) static int
FUNC_4(struct mount *VAR_4)
{
 int VAR_5, VAR_6;

 FUNC_0(VAR_3, VAR_1, "VFS_MOUNT", VAR_4->mnt_vfc->vfc_name);
 VAR_5 = FUNC_2(VAR_0);
 VAR_6 = (*VAR_4->mnt_vfc->vfc_vfsops_sd->vfs_mount)(VAR_4);
 FUNC_1(VAR_5);
 FUNC_0(VAR_3, VAR_2, "VFS_MOUNT", VAR_4->mnt_vfc->vfc_name);
 return (VAR_6);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vnode {int dummy; } ;
struct mount {TYPE_2__* mnt_vfc; } ;
struct TYPE_4__ {TYPE_1__* vfc_vfsops_sd; } ;
struct TYPE_3__ {int (* vfs_extattrctl ) (struct mount*,int,struct vnode*,int,char const*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mount*,int,struct vnode*,int,char const*) ;

__attribute__((used)) static int
FUNC_3(struct mount *VAR_1, int VAR_2, struct vnode *VAR_3,
    int VAR_4, const char *VAR_5)
{
 int VAR_6, VAR_7;

 VAR_6 = FUNC_1(VAR_0);
 VAR_7 = (*VAR_1->mnt_vfc->vfc_vfsops_sd->vfs_extattrctl)(VAR_1, VAR_2,
     VAR_3, VAR_4, VAR_5);
 FUNC_0(VAR_6);
 return (VAR_7);
}

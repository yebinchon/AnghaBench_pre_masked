
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vop_readlink_args {int a_uio; TYPE_1__* a_vp; } ;
struct devfs_dirent {int de_symlink; } ;
struct TYPE_2__ {struct devfs_dirent* v_data; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_2(struct vop_readlink_args *VAR_0)
{
 struct devfs_dirent *VAR_1;

 VAR_1 = VAR_0->a_vp->v_data;
 return (FUNC_1(VAR_1->de_symlink, FUNC_0(VAR_1->de_symlink), VAR_0->a_uio));
}

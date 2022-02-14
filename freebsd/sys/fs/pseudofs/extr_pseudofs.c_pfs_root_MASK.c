
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct pfs_info {int pi_root; } ;
struct mount {scalar_t__ mnt_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct mount*,struct vnode**,int ,int ) ;

int
FUNC_1(struct mount *VAR_1, int VAR_2, struct vnode **VAR_3)
{
 struct pfs_info *VAR_4;

 VAR_4 = (struct pfs_info *)VAR_1->mnt_data;
 return (FUNC_0(VAR_1, VAR_3, VAR_4->pi_root, VAR_0));
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vop_readlink_args {int a_cred; int a_uio; struct vnode* a_vp; } ;
struct vnode {TYPE_1__* v_mount; } ;
struct inode {int i_size; scalar_t__ i_shortlink; } ;
struct TYPE_2__ {int mnt_maxsymlinklen; } ;


 int FUNC_0 (struct vnode*,int ,int ,int ) ;
 struct inode* FUNC_1 (struct vnode*) ;
 int FUNC_2 (char*,int,int ) ;

__attribute__((used)) static int
FUNC_3(struct vop_readlink_args *VAR_0)
{
 struct vnode *VAR_1 = VAR_0->a_vp;
 struct inode *VAR_2 = FUNC_1(VAR_1);
 int VAR_3;

 VAR_3 = VAR_2->i_size;
 if (VAR_3 < VAR_1->v_mount->mnt_maxsymlinklen) {
  FUNC_2((char *)VAR_2->i_shortlink, VAR_3, VAR_0->a_uio);
  return (0);
 }
 return (FUNC_0(VAR_1, VAR_0->a_uio, 0, VAR_0->a_cred));
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_readlink_args {struct uio* a_uio; struct vnode* a_vp; } ;
struct vnode {scalar_t__ v_type; int v_mount; } ;
struct uio {scalar_t__ uio_offset; int uio_resid; } ;
struct tmpfs_node {int tn_size; int tn_link; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;
 struct tmpfs_node* FUNC_3 (struct vnode*) ;
 int FUNC_4 (int ,struct tmpfs_node*,int ) ;
 int FUNC_5 (int ,int ,struct uio*) ;

__attribute__((used)) static int
FUNC_6(struct vop_readlink_args *VAR_2)
{
 struct vnode *VAR_3 = VAR_2->a_vp;
 struct uio *VAR_4 = VAR_2->a_uio;

 int VAR_5;
 struct tmpfs_node *VAR_6;

 FUNC_1(VAR_4->uio_offset == 0);
 FUNC_1(VAR_3->v_type == VAR_1);

 VAR_6 = FUNC_3(VAR_3);

 VAR_5 = FUNC_5(VAR_6->tn_link, FUNC_0(VAR_6->tn_size, VAR_4->uio_resid),
     VAR_4);
 FUNC_4(FUNC_2(VAR_3->v_mount), VAR_6, VAR_0);

 return (VAR_5);
}

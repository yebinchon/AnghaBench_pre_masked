
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vop_read_args {struct uio* a_uio; struct vnode* a_vp; } ;
struct vnode {scalar_t__ v_type; int v_mount; } ;
struct uio {scalar_t__ uio_offset; } ;
struct TYPE_2__ {int tn_aobj; } ;
struct tmpfs_node {int tn_size; TYPE_1__ tn_reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 struct tmpfs_node* FUNC_1 (struct vnode*) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ,struct tmpfs_node*,int ) ;
 int FUNC_3 (int ,int ,struct uio*) ;

__attribute__((used)) static int
FUNC_4(struct vop_read_args *VAR_4)
{
 struct vnode *VAR_5;
 struct uio *VAR_6;
 struct tmpfs_node *VAR_7;

 VAR_5 = VAR_4->a_vp;
 if (VAR_5->v_type != VAR_3)
  return (VAR_1);
 VAR_6 = VAR_4->a_uio;
 if (VAR_6->uio_offset < 0)
  return (VAR_0);
 VAR_7 = FUNC_1(VAR_5);
 FUNC_2(FUNC_0(VAR_5->v_mount), VAR_7, VAR_2);
 return (FUNC_3(VAR_7->tn_reg.tn_aobj, VAR_7->tn_size, VAR_6));
}

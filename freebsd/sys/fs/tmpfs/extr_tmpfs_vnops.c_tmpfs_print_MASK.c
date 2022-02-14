
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
struct vop_print_args {struct vnode* a_vp; } ;
struct vnode {scalar_t__ v_type; } ;
struct tmpfs_node {int tn_mode; int tn_uid; int tn_gid; int tn_status; scalar_t__ tn_size; scalar_t__ tn_links; int tn_flags; } ;
typedef int intmax_t ;


 scalar_t__ VAR_0 ;
 struct tmpfs_node* FUNC_0 (struct vnode*) ;
 int FUNC_1 (struct vnode*) ;
 int FUNC_2 (char*,...) ;

int
FUNC_3(struct vop_print_args *VAR_1)
{
 struct vnode *VAR_2 = VAR_1->a_vp;

 struct tmpfs_node *VAR_3;

 VAR_3 = FUNC_0(VAR_2);

 FUNC_2("tag VT_TMPFS, tmpfs_node %p, flags 0x%lx, links %jd\n",
     VAR_3, VAR_3->tn_flags, (uintmax_t)VAR_3->tn_links);
 FUNC_2("\tmode 0%o, owner %d, group %d, size %jd, status 0x%x\n",
     VAR_3->tn_mode, VAR_3->tn_uid, VAR_3->tn_gid,
     (intmax_t)VAR_3->tn_size, VAR_3->tn_status);

 if (VAR_2->v_type == VAR_0)
  FUNC_1(VAR_2);

 FUNC_2("\n");

 return 0;
}

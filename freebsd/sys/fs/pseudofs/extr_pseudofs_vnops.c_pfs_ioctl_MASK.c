
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_ioctl_args {int a_data; int a_command; struct vnode* a_vp; } ;
struct vnode {int v_iflag; scalar_t__ v_type; struct pfs_vdata* v_data; } ;
struct proc {int dummy; } ;
struct pfs_vdata {int pvd_pid; struct pfs_node* pvd_pn; } ;
struct pfs_node {int * pn_ioctl; int pn_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct pfs_node*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct proc*) ;
 int VAR_6 ;
 int FUNC_4 (struct vnode*,int ) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (struct pfs_node*) ;
 int FUNC_6 (int ,struct pfs_node*,int ,struct proc**) ;
 int FUNC_7 (int ,struct proc*,struct pfs_node*,int ,int ) ;
 int FUNC_8 (struct vnode*,int) ;

__attribute__((used)) static int
FUNC_9(struct vop_ioctl_args *VAR_9)
{
 struct vnode *VAR_10;
 struct pfs_vdata *VAR_11;
 struct pfs_node *VAR_12;
 struct proc *VAR_13;
 int VAR_14;

 VAR_10 = VAR_9->a_vp;
 FUNC_8(VAR_10, VAR_5 | VAR_4);
 if (VAR_10->v_iflag & VAR_6) {
  FUNC_4(VAR_10, 0);
  return (VAR_0);
 }
 VAR_11 = VAR_10->v_data;
 VAR_12 = VAR_11->pvd_pn;

 FUNC_2(("%s: %lx", VAR_12->pn_name, VAR_9->a_command));
 FUNC_5(VAR_12);

 if (VAR_10->v_type != VAR_7) {
  FUNC_4(VAR_10, 0);
  FUNC_1 (VAR_1);
 }
 FUNC_0(VAR_12);

 if (VAR_12->pn_ioctl == ((void*)0)) {
  FUNC_4(VAR_10, 0);
  FUNC_1 (VAR_3);
 }





 if (!FUNC_6(VAR_8, VAR_12, VAR_11->pvd_pid, &VAR_13)) {
  FUNC_4(VAR_10, 0);
  FUNC_1 (VAR_2);
 }

 VAR_14 = FUNC_7(VAR_8, VAR_13, VAR_12, VAR_9->a_command, VAR_9->a_data);

 if (VAR_13 != ((void*)0))
  FUNC_3(VAR_13);

 FUNC_4(VAR_10, 0);
 FUNC_1 (VAR_14);
}

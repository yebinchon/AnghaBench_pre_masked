
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_vptocnp_args {char* a_buf; int* a_buflen; struct vnode** a_vpp; struct vnode* a_vp; } ;
struct vnode {scalar_t__ v_type; struct mount* v_mount; struct pfs_vdata* v_data; } ;
struct pfs_vdata {int pvd_pid; struct pfs_node* pvd_pn; } ;
struct pfs_node {scalar_t__ pn_type; char* pn_name; struct pfs_node* pn_parent; } ;
struct mount {int dummy; } ;
typedef int pidbuf ;
typedef int pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct vnode*) ;
 int FUNC_2 (struct vnode*,int ) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (struct pfs_node*) ;
 int FUNC_5 (struct pfs_node*) ;
 int FUNC_6 (struct mount*,struct vnode**,struct pfs_node*,int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_7 (char*,int,char*,int) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (struct mount*,int ) ;
 int FUNC_10 (struct mount*) ;
 int FUNC_11 (struct vnode*) ;
 int FUNC_12 (struct vnode*,int) ;

__attribute__((used)) static int
FUNC_13(struct vop_vptocnp_args *VAR_6)
{
 struct vnode *VAR_7 = VAR_6->a_vp;
 struct vnode **VAR_8 = VAR_6->a_vpp;
 struct pfs_vdata *VAR_9 = VAR_7->v_data;
 struct pfs_node *VAR_10 = VAR_9->pvd_pn;
 struct pfs_node *VAR_11;
 struct mount *VAR_12;
 char *VAR_13 = VAR_6->a_buf;
 int *VAR_14 = VAR_6->a_buflen;
 char VAR_15[VAR_2];
 pid_t VAR_16 = VAR_9->pvd_pid;
 int VAR_17, VAR_18, VAR_19, VAR_20;

 VAR_18 = *VAR_14;
 VAR_19 = 0;

 FUNC_4(VAR_10);

 if (VAR_7->v_type == VAR_3 && VAR_10->pn_type == VAR_5) {
  *VAR_8 = VAR_7;
  FUNC_11(*VAR_8);
  FUNC_5(VAR_10);
  FUNC_0 (0);
 } else if (VAR_7->v_type == VAR_3 && VAR_10->pn_type == VAR_4) {
  VAR_17 = FUNC_7(VAR_15, sizeof(VAR_15), "%d", VAR_16);
  VAR_18 -= VAR_17;
  if (VAR_18 < 0) {
   VAR_19 = VAR_0;
   goto failed;
  }
  FUNC_3(VAR_15, VAR_13 + VAR_18, VAR_17);
 } else {
  VAR_17 = FUNC_8(VAR_10->pn_name);
  VAR_18 -= VAR_17;
  if (VAR_18 < 0) {
   VAR_19 = VAR_0;
   goto failed;
  }
  FUNC_3(VAR_10->pn_name, VAR_13 + VAR_18, VAR_17);
 }

 VAR_11 = VAR_10->pn_parent;
 FUNC_5(VAR_10);

 VAR_12 = VAR_7->v_mount;
 VAR_19 = FUNC_9(VAR_12, 0);
 if (VAR_19)
  return (VAR_19);




 VAR_20 = FUNC_1(VAR_7);
 FUNC_2(VAR_7, 0);

 VAR_19 = FUNC_6(VAR_12, VAR_8, VAR_11, VAR_16);
 if (VAR_19) {
  FUNC_12(VAR_7, VAR_20 | VAR_1);
  FUNC_10(VAR_12);
  FUNC_0(VAR_19);
 }

 *VAR_14 = VAR_18;
 FUNC_2(*VAR_8, 0);
 FUNC_12(VAR_7, VAR_20 | VAR_1);
 FUNC_10(VAR_12);

 FUNC_0 (0);
failed:
 FUNC_5(VAR_10);
 FUNC_0(VAR_19);
}

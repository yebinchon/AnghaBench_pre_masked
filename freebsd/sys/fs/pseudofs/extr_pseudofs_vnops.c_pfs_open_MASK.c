
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_open_args {int a_mode; struct vnode* a_vp; } ;
struct vnode {struct pfs_vdata* v_data; } ;
struct pfs_vdata {struct pfs_node* pvd_pn; } ;
struct pfs_node {int pn_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int VAR_7 ;
 int FUNC_2 (struct pfs_node*) ;

__attribute__((used)) static int
FUNC_3(struct vop_open_args *VAR_8)
{
 struct vnode *VAR_9 = VAR_8->a_vp;
 struct pfs_vdata *VAR_10 = VAR_9->v_data;
 struct pfs_node *VAR_11 = VAR_10->pvd_pn;
 int VAR_12 = VAR_8->a_mode;

 FUNC_1(("%s (mode 0x%x)", VAR_11->pn_name, VAR_12));
 FUNC_2(VAR_11);


 if (((VAR_12 & VAR_2) && !(VAR_12 & VAR_6)) ||
     ((VAR_12 & VAR_3) && !(VAR_12 & VAR_7)))
  FUNC_0 (VAR_1);


 if ((VAR_12 & VAR_5) || (VAR_12 & VAR_4))
  FUNC_0 (VAR_0);

 FUNC_0 (0);
}

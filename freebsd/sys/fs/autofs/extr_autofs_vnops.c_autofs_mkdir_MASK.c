
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vop_mkdir_args {int a_vpp; TYPE_1__* a_cnp; struct vnode* a_dvp; } ;
struct vnode {int v_mount; struct autofs_node* v_data; } ;
struct autofs_node {int dummy; } ;
struct autofs_mount {int dummy; } ;
struct TYPE_2__ {int cn_namelen; int cn_nameptr; } ;


 int FUNC_0 (struct autofs_mount*) ;
 int FUNC_1 (struct autofs_mount*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct autofs_mount* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct autofs_node*,struct autofs_mount*,int ,int ,struct autofs_node**) ;
 int FUNC_5 (struct autofs_node*,int ,int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_6(struct vop_mkdir_args *VAR_3)
{
 struct vnode *VAR_4;
 struct autofs_node *VAR_5;
 struct autofs_mount *VAR_6;
 struct autofs_node *VAR_7;
 int VAR_8;

 VAR_4 = VAR_3->a_dvp;
 VAR_5 = VAR_4->v_data;
 VAR_6 = FUNC_2(VAR_4->v_mount);





 if (FUNC_3(VAR_2) == 0)
  return (VAR_0);

 FUNC_0(VAR_6);
 VAR_8 = FUNC_4(VAR_5, VAR_6, VAR_3->a_cnp->cn_nameptr,
     VAR_3->a_cnp->cn_namelen, &VAR_7);
 if (VAR_8 != 0) {
  FUNC_1(VAR_6);
  return (VAR_8);
 }
 FUNC_1(VAR_6);

 VAR_8 = FUNC_5(VAR_7, VAR_4->v_mount, VAR_1, VAR_3->a_vpp);

 return (VAR_8);
}

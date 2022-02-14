
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uintmax_t ;
struct vop_print_args {struct vnode* a_vp; } ;
struct vnode {scalar_t__ v_type; } ;
struct TYPE_2__ {scalar_t__ na_fsid; scalar_t__ na_fileid; } ;
struct nfsnode {TYPE_1__ n_vattr; } ;


 scalar_t__ VAR_0 ;
 struct nfsnode* FUNC_0 (struct vnode*) ;
 int FUNC_1 (struct vnode*) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static int
FUNC_3(struct vop_print_args *VAR_1)
{
 struct vnode *VAR_2 = VAR_1->a_vp;
 struct nfsnode *VAR_3 = FUNC_0(VAR_2);

 FUNC_2("\tfileid %jd fsid 0x%jx", (uintmax_t)VAR_3->n_vattr.na_fileid,
     (uintmax_t)VAR_3->n_vattr.na_fsid);
 if (VAR_2->v_type == VAR_0)
  FUNC_1(VAR_2);
 FUNC_2("\n");
 return (0);
}

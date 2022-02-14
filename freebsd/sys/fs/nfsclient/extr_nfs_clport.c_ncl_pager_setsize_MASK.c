
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_4__* vm_object_t ;
typedef scalar_t__ u_quad_t ;
struct vnode {TYPE_4__* v_object; } ;
struct vattr {scalar_t__ va_size; } ;
struct TYPE_5__ {struct vattr na_vattr; } ;
struct nfsnode {int n_flag; TYPE_1__ n_vattr; } ;
struct TYPE_6__ {scalar_t__ vnp_size; } ;
struct TYPE_7__ {TYPE_2__ vnp; } ;
struct TYPE_8__ {TYPE_3__ un_pager; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct nfsnode*) ;
 int FUNC_1 (struct nfsnode*) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct vnode*) ;
 struct nfsnode* FUNC_3 (struct vnode*) ;
 int FUNC_4 (struct vnode*,scalar_t__) ;

bool
FUNC_5(struct vnode *VAR_2, u_quad_t *VAR_3)
{
 struct nfsnode *VAR_4;
 vm_object_t VAR_5;
 struct vattr *VAR_6;
 u_quad_t VAR_7;
 bool VAR_8;

 VAR_4 = FUNC_3(VAR_2);
 FUNC_0(VAR_4);

 VAR_6 = &VAR_4->n_vattr.na_vattr;
 VAR_7 = VAR_6->va_size;
 VAR_5 = VAR_2->v_object;
 VAR_8 = 0;

 if (VAR_5 != ((void*)0) && VAR_7 != VAR_5->un_pager.vnp.vnp_size) {
  if (FUNC_2(VAR_2) == VAR_0)
   VAR_8 = 1;
  else
   VAR_4->n_flag |= VAR_1;
 }
 if (VAR_3 == ((void*)0)) {
  FUNC_1(VAR_4);
  if (VAR_8)
   FUNC_4(VAR_2, VAR_7);
  VAR_8 = 0;
 } else {
  *VAR_3 = VAR_7;
 }
 return (VAR_8);
}

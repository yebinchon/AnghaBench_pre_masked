
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vop_advlock_args {TYPE_1__* a_fl; struct vnode* a_vp; } ;
struct vnode {int v_lockf; } ;
struct vattr {scalar_t__ va_size; } ;
struct TYPE_4__ {int td_ucred; } ;
struct TYPE_3__ {scalar_t__ l_whence; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct vnode*,struct vattr*,int ) ;
 int FUNC_1 (struct vnode*,int ) ;
 TYPE_2__* VAR_3 ;
 int FUNC_2 (struct vop_advlock_args*,int *,scalar_t__) ;
 int FUNC_3 (struct vnode*,int) ;

int
FUNC_4(struct vop_advlock_args *VAR_4)
{
 struct vnode *VAR_5;
 struct vattr VAR_6;
 int VAR_7;

 VAR_5 = VAR_4->a_vp;
 if (VAR_4->a_fl->l_whence == VAR_2) {






  FUNC_3(VAR_5, VAR_1 | VAR_0);
  VAR_7 = FUNC_0(VAR_5, &VAR_6, VAR_3->td_ucred);
  FUNC_1(VAR_5, 0);
  if (VAR_7)
   return (VAR_7);
 } else
  VAR_6.va_size = 0;

 return (FUNC_2(VAR_4, &(VAR_5->v_lockf), VAR_6.va_size));
}

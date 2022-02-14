
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnode {scalar_t__ v_type; int v_vflag; } ;
struct ucred {int dummy; } ;
struct thread {int dummy; } ;
struct nfsexstuff {int dummy; } ;
struct TYPE_2__ {int cn_flags; } ;
struct nameidata {TYPE_1__ ni_cnd; struct vnode* ni_dvp; struct vnode* ni_vp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct vnode*,struct vnode*,TYPE_1__*) ;
 int VAR_5 ;
 int FUNC_2 (struct nameidata*) ;
 int FUNC_3 (struct vnode*) ;
 int FUNC_4 (struct vnode*) ;

int
FUNC_5(struct nameidata *VAR_6, int VAR_7, struct ucred *VAR_8,
    struct thread *VAR_9, struct nfsexstuff *VAR_10)
{
 struct vnode *VAR_11;
 int VAR_12 = 0;

 VAR_11 = VAR_6->ni_vp;
 if (VAR_11->v_type != VAR_4) {
  VAR_12 = VAR_2;
  goto out;
 }



 if (VAR_6->ni_dvp == VAR_11) {
  VAR_12 = VAR_1;
  goto out;
 }



 if (VAR_11->v_vflag & VAR_5)
  VAR_12 = VAR_0;
out:
 if (!VAR_12)
  VAR_12 = FUNC_1(VAR_6->ni_dvp, VAR_11, &VAR_6->ni_cnd);
 if (VAR_6->ni_dvp == VAR_11)
  FUNC_4(VAR_6->ni_dvp);
 else
  FUNC_3(VAR_6->ni_dvp);
 FUNC_3(VAR_11);
 if ((VAR_6->ni_cnd.cn_flags & VAR_3) != 0)
  FUNC_2(VAR_6);
 FUNC_0(VAR_12);
 return (VAR_12);
}

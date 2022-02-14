
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnode {scalar_t__ v_type; } ;
struct ucred {int dummy; } ;
struct thread {int dummy; } ;
struct nfsexstuff {int dummy; } ;
struct TYPE_2__ {int cn_flags; } ;
struct nameidata {TYPE_1__ ni_cnd; struct vnode* ni_dvp; struct vnode* ni_vp; } ;
typedef int fhandle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct vnode*,struct vnode*,TYPE_1__*) ;
 int FUNC_2 (struct vnode*,int,struct thread*) ;
 int FUNC_3 (struct vnode**,int,char*,int *,struct thread*) ;
 int FUNC_4 (struct vnode*,struct thread*,struct vnode**,int*,char*,int *) ;
 int FUNC_5 (struct nameidata*) ;
 int FUNC_6 (struct vnode*) ;
 int FUNC_7 (struct vnode*) ;

int
FUNC_8(struct nameidata *VAR_5, int VAR_6, struct ucred *VAR_7,
    struct thread *VAR_8, struct nfsexstuff *VAR_9)
{
 struct vnode *VAR_10, *VAR_11[VAR_0];
 int VAR_12 = 0, VAR_13;
 char VAR_14[VAR_2 + 1];
 fhandle_t VAR_15;

 VAR_10 = VAR_5->ni_vp;
 VAR_11[0] = ((void*)0);
 if (VAR_10->v_type == VAR_4)
  VAR_12 = VAR_1;
 else if (VAR_6)
  VAR_12 = FUNC_2(VAR_10, 1, VAR_8);
 if (VAR_12 == 0)
  FUNC_4(VAR_10, VAR_8, VAR_11, &VAR_13, VAR_14, &VAR_15);
 if (!VAR_12)
  VAR_12 = FUNC_1(VAR_5->ni_dvp, VAR_10, &VAR_5->ni_cnd);
 if (VAR_12 == 0 && VAR_11[0] != ((void*)0))
  FUNC_3(VAR_11, VAR_13, VAR_14, &VAR_15, VAR_8);
 if (VAR_5->ni_dvp == VAR_10)
  FUNC_7(VAR_5->ni_dvp);
 else
  FUNC_6(VAR_5->ni_dvp);
 FUNC_6(VAR_10);
 if ((VAR_5->ni_cnd.cn_flags & VAR_3) != 0)
  FUNC_5(VAR_5);
 FUNC_0(VAR_12);
 return (VAR_12);
}

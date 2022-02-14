
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {scalar_t__ v_mount; int v_iflag; } ;
struct ucred {int dummy; } ;
struct thread {int dummy; } ;
struct nfsexstuff {int dummy; } ;
struct nameidata {struct vnode* ni_vp; struct vnode* ni_dvp; int ni_cnd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct vnode*,int) ;
 int FUNC_2 (struct vnode*,int ) ;
 int VAR_5 ;
 int FUNC_3 (struct vnode*,struct vnode*,int *) ;
 int FUNC_4 (struct nameidata*) ;
 int FUNC_5 (struct vnode*) ;
 int FUNC_6 (struct vnode*) ;

int
FUNC_7(struct nameidata *VAR_6, struct vnode *VAR_7, struct ucred *VAR_8,
    struct thread *VAR_9, struct nfsexstuff *VAR_10)
{
 struct vnode *VAR_11;
 int VAR_12 = 0;

 VAR_11 = VAR_6->ni_vp;
 if (VAR_11 != ((void*)0)) {
  VAR_12 = VAR_0;
 } else {
  VAR_11 = VAR_6->ni_dvp;
  if (VAR_7->v_mount != VAR_11->v_mount)
   VAR_12 = VAR_2;
 }
 if (!VAR_12) {
  FUNC_1(VAR_7, VAR_3 | VAR_4);
  if ((VAR_7->v_iflag & VAR_5) == 0)
   VAR_12 = FUNC_3(VAR_6->ni_dvp, VAR_7, &VAR_6->ni_cnd);
  else
   VAR_12 = VAR_1;
  if (VAR_6->ni_dvp == VAR_7)
   FUNC_6(VAR_6->ni_dvp);
  else
   FUNC_5(VAR_6->ni_dvp);
  FUNC_2(VAR_7, 0);
 } else {
  if (VAR_6->ni_dvp == VAR_6->ni_vp)
   FUNC_6(VAR_6->ni_dvp);
  else
   FUNC_5(VAR_6->ni_dvp);
  if (VAR_6->ni_vp)
   FUNC_6(VAR_6->ni_vp);
 }
 FUNC_4(VAR_6);
 FUNC_0(VAR_12);
 return (VAR_12);
}

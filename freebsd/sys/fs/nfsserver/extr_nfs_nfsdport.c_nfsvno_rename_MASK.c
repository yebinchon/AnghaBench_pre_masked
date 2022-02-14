
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int32_t ;
struct vnode {scalar_t__ v_type; scalar_t__ v_mount; scalar_t__ v_mountedhere; } ;
struct ucred {int dummy; } ;
struct thread {int dummy; } ;
struct TYPE_3__ {int cn_namelen; char* cn_nameptr; } ;
struct nameidata {struct vnode* ni_startdir; struct vnode* ni_dvp; TYPE_1__ ni_cnd; struct vnode* ni_vp; } ;
typedef int fhandle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct vnode*,int ) ;
 int FUNC_3 (struct vnode*,int ) ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_4 (struct vnode*,struct vnode*,TYPE_1__*,struct vnode*,struct vnode*,TYPE_1__*) ;
 int FUNC_5 (struct vnode*,struct thread*) ;
 int FUNC_6 (struct vnode*,int,struct thread*) ;
 int FUNC_7 (struct vnode**,int,char*,int *,struct thread*) ;
 int FUNC_8 (struct vnode*,struct thread*,struct vnode**,int*,char*,int *) ;
 int FUNC_9 (struct nameidata*) ;
 int FUNC_10 (struct vnode*) ;
 int FUNC_11 (struct vnode*) ;

int
FUNC_12(struct nameidata *VAR_13, struct nameidata *VAR_14,
    u_int32_t VAR_15, u_int32_t VAR_16, struct ucred *VAR_17, struct thread *VAR_18)
{
 struct vnode *VAR_19, *VAR_20, *VAR_21, *VAR_22[VAR_10];
 int VAR_23 = 0, VAR_24;
 char VAR_25[VAR_11 + 1];
 fhandle_t VAR_26;

 VAR_22[0] = ((void*)0);
 VAR_19 = VAR_13->ni_vp;
 if (VAR_15) {
  FUNC_11(VAR_13->ni_dvp);
  FUNC_11(VAR_19);
  VAR_23 = VAR_15;
  goto out1;
 }
 VAR_21 = VAR_14->ni_dvp;
 VAR_20 = VAR_14->ni_vp;
 if (VAR_20 != ((void*)0)) {
  if (VAR_19->v_type == VAR_12 && VAR_20->v_type != VAR_12) {
   VAR_23 = (VAR_16 & VAR_8) ? VAR_2 : VAR_0;
   goto out;
  } else if (VAR_19->v_type != VAR_12 && VAR_20->v_type == VAR_12) {
   VAR_23 = (VAR_16 & VAR_8) ? VAR_3 : VAR_0;
   goto out;
  }
  if (VAR_20->v_type == VAR_12 && VAR_20->v_mountedhere) {
   VAR_23 = (VAR_16 & VAR_8) ? VAR_4 : VAR_6;
   goto out;
  }






  if ((VAR_14->ni_cnd.cn_namelen == 1 &&
       VAR_14->ni_cnd.cn_nameptr[0] == '.') ||
      (VAR_14->ni_cnd.cn_namelen == 2 &&
       VAR_14->ni_cnd.cn_nameptr[0] == '.' &&
       VAR_14->ni_cnd.cn_nameptr[1] == '.')) {
   VAR_23 = VAR_1;
   goto out;
  }
 }
 if (VAR_19->v_type == VAR_12 && VAR_19->v_mountedhere) {
  VAR_23 = (VAR_16 & VAR_8) ? VAR_4 : VAR_6;
  goto out;
 }
 if (VAR_19->v_mount != VAR_21->v_mount) {
  VAR_23 = (VAR_16 & VAR_8) ? VAR_4 : VAR_6;
  goto out;
 }
 if (VAR_19 == VAR_21) {
  VAR_23 = (VAR_16 & VAR_8) ? VAR_4 : VAR_1;
  goto out;
 }
 if (VAR_19 == VAR_20) {




  VAR_23 = -1;
  goto out;
 }
 if (VAR_16 & VAR_9) {
  if (FUNC_2(VAR_19, VAR_7) == 0) {
   VAR_23 = FUNC_6(VAR_19, 0, VAR_18);
   FUNC_3(VAR_19, 0);
  } else
   VAR_23 = VAR_5;
  if (VAR_20 && !VAR_23)
   VAR_23 = FUNC_6(VAR_20, 1, VAR_18);
 } else {







  FUNC_5(VAR_19, VAR_18);
 }
 if (VAR_23 == 0 && VAR_20 != ((void*)0)) {
  FUNC_8(VAR_20, VAR_18, VAR_22, &VAR_24, VAR_25, &VAR_26);
  FUNC_0(4, "nfsvno_rename: pnfsremovesetup"
      " dsdvp=%p\n", VAR_22[0]);
 }
out:
 if (!VAR_23) {
  VAR_23 = FUNC_4(VAR_13->ni_dvp, VAR_13->ni_vp,
      &VAR_13->ni_cnd, VAR_14->ni_dvp, VAR_14->ni_vp,
      &VAR_14->ni_cnd);
 } else {
  if (VAR_21 == VAR_20)
   FUNC_11(VAR_21);
  else
   FUNC_10(VAR_21);
  if (VAR_20)
   FUNC_10(VAR_20);
  FUNC_11(VAR_13->ni_dvp);
  FUNC_11(VAR_19);
  if (VAR_23 == -1)
   VAR_23 = 0;
 }






 if (VAR_23 == 0 && VAR_22[0] != ((void*)0)) {
  FUNC_7(VAR_22, VAR_24, VAR_25, &VAR_26, VAR_18);
  FUNC_0(4, "nfsvno_rename: pnfsremove\n");
 }

 FUNC_11(VAR_14->ni_startdir);
 FUNC_9(VAR_14);
out1:
 FUNC_11(VAR_13->ni_startdir);
 FUNC_9(VAR_13);
 FUNC_1(VAR_23);
 return (VAR_23);
}

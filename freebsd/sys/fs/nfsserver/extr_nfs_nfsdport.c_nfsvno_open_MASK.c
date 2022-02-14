
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_quad_t ;
struct vnode {scalar_t__ v_type; } ;
struct ucred {int dummy; } ;
struct thread {int dummy; } ;
struct TYPE_3__ {void* tv_nsec; void* tv_sec; } ;
struct nfsvattr {int na_vattr; int na_size; TYPE_1__ na_atime; } ;
struct nfsstate {int dummy; } ;
struct nfsrv_descript {void* nd_repstat; } ;
struct nfsexstuff {int dummy; } ;
struct TYPE_4__ {int cn_flags; } ;
struct nameidata {struct vnode* ni_vp; struct vnode* ni_dvp; struct vnode* ni_startdir; TYPE_2__ ni_cnd; } ;
typedef int nfsv4stateid_t ;
typedef int nfsquad_t ;
typedef int nfsattrbit_t ;
typedef void* int32_t ;
typedef int NFSACL_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int FUNC_0 (int ,struct nfsrv_descript*) ;
 int FUNC_1 (int *,int ) ;
 int VAR_5 ;
 int FUNC_2 (struct nfsvattr*) ;
 int FUNC_3 (struct nfsexstuff*) ;
 scalar_t__ FUNC_4 (struct nfsvattr*) ;
 int FUNC_5 (struct nfsexstuff*) ;
 int VAR_6 ;
 void* FUNC_6 (struct vnode*,struct vnode**,TYPE_2__*,int *) ;
 void* FUNC_7 (struct vnode*,int *,struct ucred*) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 struct thread* VAR_9 ;
 int FUNC_8 (struct nfsrv_descript*,struct vnode*,struct nfsvattr*,int *,struct thread*,int *,struct nfsexstuff*) ;
 void* FUNC_9 (int ,int *,struct nfsstate*,struct vnode*,struct nfsrv_descript*,struct thread*,void*) ;
 int FUNC_10 (struct vnode*,int *,struct ucred*,struct thread*) ;
 void* FUNC_11 (struct vnode*,int ,struct ucred*,struct nfsexstuff*,struct thread*,int ,int ,int *) ;
 int FUNC_12 (struct nameidata*) ;
 int FUNC_13 (struct vnode*) ;
 int FUNC_14 (struct vnode*) ;

void
FUNC_15(struct nfsrv_descript *VAR_10, struct nameidata *VAR_11,
    nfsquad_t VAR_12, nfsv4stateid_t *VAR_13, struct nfsstate *VAR_14,
    int *VAR_15, struct nfsvattr *VAR_16, int32_t *VAR_17, int VAR_18,
    NFSACL_T *VAR_19, nfsattrbit_t *VAR_20, struct ucred *VAR_21,
    struct nfsexstuff *VAR_22, struct vnode **VAR_23)
{
 struct vnode *VAR_24 = ((void*)0);
 u_quad_t VAR_25;
 struct nfsexstuff VAR_26;
 struct thread *VAR_27 = VAR_9;

 if (VAR_11->ni_vp == ((void*)0))
  VAR_10->nd_repstat = FUNC_9(VAR_12,
      VAR_13, VAR_14, ((void*)0), VAR_10, VAR_27, VAR_10->nd_repstat);
 if (!VAR_10->nd_repstat) {
  if (VAR_11->ni_vp == ((void*)0)) {
   FUNC_14(VAR_11->ni_startdir);
   VAR_10->nd_repstat = FUNC_6(VAR_11->ni_dvp,
       &VAR_11->ni_vp, &VAR_11->ni_cnd, &VAR_16->na_vattr);

   if (VAR_10->nd_repstat == 0) {





    FUNC_10(VAR_11->ni_vp, &VAR_16->na_vattr,
        VAR_21, VAR_27);
   }
   FUNC_13(VAR_11->ni_dvp);
   FUNC_12(VAR_11);
   if (!VAR_10->nd_repstat) {
    if (*VAR_15) {
     *VAR_15 = 0;
     FUNC_2(VAR_16);
     VAR_16->na_atime.tv_sec = VAR_17[0];
     VAR_16->na_atime.tv_nsec = VAR_17[1];
     VAR_10->nd_repstat = FUNC_7(VAR_11->ni_vp,
         &VAR_16->na_vattr, VAR_21);
     if (VAR_10->nd_repstat != 0) {
      FUNC_13(VAR_11->ni_vp);
      VAR_11->ni_vp = ((void*)0);
      VAR_10->nd_repstat = VAR_4;
     } else
      FUNC_1(VAR_20,
          VAR_3);
    } else {
     FUNC_8(VAR_10, VAR_11->ni_vp, VAR_16,
         VAR_19, VAR_27, VAR_20, VAR_22);
    }
   }
   VAR_24 = VAR_11->ni_vp;
  } else {
   if (VAR_11->ni_startdir)
    FUNC_14(VAR_11->ni_startdir);
   FUNC_12(VAR_11);
   VAR_24 = VAR_11->ni_vp;
   if (VAR_18 == VAR_5) {
    if (VAR_11->ni_dvp == VAR_24)
     FUNC_14(VAR_11->ni_dvp);
    else
     FUNC_13(VAR_11->ni_dvp);
   }
   if (FUNC_4(VAR_16) && VAR_24->v_type == VAR_7) {
    if (VAR_11->ni_cnd.cn_flags & VAR_6)
     FUNC_5(&VAR_26);
    else
     FUNC_3(&VAR_26);
    VAR_10->nd_repstat = FUNC_11(VAR_24,
        VAR_8, VAR_21, &VAR_26, VAR_27,
        VAR_1,
        VAR_2, ((void*)0));
    VAR_10->nd_repstat = FUNC_9(VAR_12,
        VAR_13, VAR_14, VAR_24, VAR_10, VAR_27, VAR_10->nd_repstat);
    if (!VAR_10->nd_repstat) {
     VAR_25 = VAR_16->na_size;
     FUNC_2(VAR_16);
     VAR_16->na_size = VAR_25;
     VAR_10->nd_repstat = FUNC_7(VAR_24,
         &VAR_16->na_vattr, VAR_21);
    }
   } else if (VAR_24->v_type == VAR_7) {
    VAR_10->nd_repstat = FUNC_9(VAR_12,
        VAR_13, VAR_14, VAR_24, VAR_10, VAR_27, VAR_10->nd_repstat);
   }
  }
 } else {
  if (VAR_11->ni_cnd.cn_flags & VAR_0)
   FUNC_12(VAR_11);
  if (VAR_11->ni_startdir && VAR_18 == VAR_5) {
   FUNC_14(VAR_11->ni_startdir);
   if (VAR_11->ni_dvp == VAR_11->ni_vp)
    FUNC_14(VAR_11->ni_dvp);
   else
    FUNC_13(VAR_11->ni_dvp);
   if (VAR_11->ni_vp)
    FUNC_13(VAR_11->ni_vp);
  }
 }
 *VAR_23 = VAR_24;

 FUNC_0(0, VAR_10);
}

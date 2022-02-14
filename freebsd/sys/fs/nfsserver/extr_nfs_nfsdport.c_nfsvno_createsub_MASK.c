
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_quad_t ;
struct vnode {int dummy; } ;
struct thread {int dummy; } ;
struct TYPE_2__ {void* tv_nsec; void* tv_sec; } ;
struct nfsvattr {scalar_t__ na_type; int na_rdev; scalar_t__ na_size; int na_vattr; TYPE_1__ na_atime; } ;
struct nfsrv_descript {int nd_repstat; int nd_cred; } ;
struct nfsexstuff {int dummy; } ;
struct nameidata {struct vnode* ni_dvp; struct vnode* ni_vp; struct vnode* ni_startdir; int ni_cnd; } ;
typedef void* int32_t ;
typedef int NFSDEV_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct nfsvattr*) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (struct vnode*,struct vnode**,int *,int *) ;
 int FUNC_3 (struct vnode*,struct vnode**,int *,int *) ;
 int FUNC_4 (struct vnode*,int *,int ) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 struct thread* VAR_12 ;
 int FUNC_5 (struct vnode*,int *,int ,struct thread*) ;
 int FUNC_6 (struct vnode*,int ,int ,struct nfsexstuff*,struct thread*,int ,int ,int *) ;
 int FUNC_7 (struct nameidata*) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (struct vnode*) ;
 int FUNC_10 (struct vnode*) ;

int
FUNC_11(struct nfsrv_descript *VAR_13, struct nameidata *VAR_14,
    struct vnode **VAR_15, struct nfsvattr *VAR_16, int *VAR_17,
    int32_t *VAR_18, NFSDEV_T VAR_19, struct nfsexstuff *VAR_20)
{
 u_quad_t VAR_21;
 int VAR_22;
 struct thread *VAR_23 = VAR_12;

 VAR_22 = VAR_13->nd_repstat;
 if (!VAR_22 && VAR_14->ni_vp == ((void*)0)) {
  if (VAR_16->na_type == VAR_9 || VAR_16->na_type == VAR_10) {
   FUNC_10(VAR_14->ni_startdir);
   VAR_22 = FUNC_2(VAR_14->ni_dvp,
       &VAR_14->ni_vp, &VAR_14->ni_cnd, &VAR_16->na_vattr);

   if (VAR_22 == 0 && VAR_16->na_type == VAR_9) {





    FUNC_5(VAR_14->ni_vp, &VAR_16->na_vattr,
        VAR_13->nd_cred, VAR_23);
   }
   FUNC_9(VAR_14->ni_dvp);
   FUNC_7(VAR_14);
   if (!VAR_22) {
    if (*VAR_17) {
     *VAR_17 = 0;
     FUNC_1(VAR_16);
     VAR_16->na_atime.tv_sec = VAR_18[0];
     VAR_16->na_atime.tv_nsec = VAR_18[1];
     VAR_22 = FUNC_4(VAR_14->ni_vp,
         &VAR_16->na_vattr, VAR_13->nd_cred);
     if (VAR_22 != 0) {
      FUNC_9(VAR_14->ni_vp);
      VAR_14->ni_vp = ((void*)0);
      VAR_22 = VAR_3;
     }
    }
   }




  } else if (VAR_16->na_type == VAR_6 || VAR_16->na_type == VAR_5 ||
   VAR_16->na_type == VAR_7) {
   if (VAR_16->na_type == VAR_6 && VAR_19 == 0xffffffff)
    VAR_16->na_type = VAR_7;
                        if (VAR_16->na_type != VAR_7 &&
       (VAR_22 = FUNC_8(VAR_13->nd_cred, VAR_4))) {
    FUNC_10(VAR_14->ni_startdir);
    FUNC_7(VAR_14);
    FUNC_9(VAR_14->ni_dvp);
    goto out;
   }
   VAR_16->na_rdev = VAR_19;
   VAR_22 = FUNC_3(VAR_14->ni_dvp, &VAR_14->ni_vp,
       &VAR_14->ni_cnd, &VAR_16->na_vattr);
   FUNC_9(VAR_14->ni_dvp);
   FUNC_7(VAR_14);
   FUNC_10(VAR_14->ni_startdir);
   if (VAR_22)
    goto out;
  } else {
   FUNC_10(VAR_14->ni_startdir);
   FUNC_7(VAR_14);
   FUNC_9(VAR_14->ni_dvp);
   VAR_22 = VAR_0;
   goto out;
  }
  *VAR_15 = VAR_14->ni_vp;
 } else {






  FUNC_10(VAR_14->ni_startdir);
  FUNC_7(VAR_14);
  *VAR_15 = VAR_14->ni_vp;
  if (VAR_14->ni_dvp == *VAR_15)
   FUNC_10(VAR_14->ni_dvp);
  else
   FUNC_9(VAR_14->ni_dvp);
  if (!VAR_22 && VAR_16->na_size != VAR_8) {
   VAR_22 = FUNC_6(*VAR_15, VAR_11,
       VAR_13->nd_cred, VAR_20, VAR_23, VAR_1,
       VAR_2, ((void*)0));
   if (!VAR_22) {
    VAR_21 = VAR_16->na_size;
    FUNC_1(VAR_16);
    VAR_16->na_size = VAR_21;
    VAR_22 = FUNC_4(*VAR_15,
        &VAR_16->na_vattr, VAR_13->nd_cred);
   }
  }
  if (VAR_22)
   FUNC_9(*VAR_15);
 }

out:
 FUNC_0(VAR_22);
 return (VAR_22);
}

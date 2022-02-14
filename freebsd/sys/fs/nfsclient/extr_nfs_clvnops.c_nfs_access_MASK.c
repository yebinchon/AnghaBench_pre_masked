
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u_int32_t ;
struct vop_access_args {int a_accmode; TYPE_4__* a_cred; int a_td; struct vnode* a_vp; } ;
struct vnode {int v_type; TYPE_1__* v_mount; } ;
struct uio {int uio_iovcnt; int uio_resid; int uio_td; int uio_rw; int uio_segflg; scalar_t__ uio_offset; struct iovec* uio_iov; } ;
struct nfsnode {scalar_t__ n_size; TYPE_2__* n_accesscache; } ;
struct iovec {char* iov_base; int iov_len; } ;
struct TYPE_11__ {scalar_t__ cr_uid; } ;
struct TYPE_10__ {int accesscache_misses; int accesscache_hits; } ;
struct TYPE_9__ {scalar_t__ uid; scalar_t__ stamp; int mode; } ;
struct TYPE_8__ {int mnt_flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vnode*,scalar_t__,int) ;
 int FUNC_1 (struct vnode*,scalar_t__,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct nfsnode*) ;
 int FUNC_4 (struct nfsnode*) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_5 (struct vnode*) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;

 int VAR_18 ;

 int VAR_19 ;

 struct nfsnode* FUNC_6 (struct vnode*) ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_7 (char*,int ) ;
 char* FUNC_8 (int,int ,int ) ;
 int FUNC_9 (struct vnode*,struct uio*,TYPE_4__*,int ) ;
 int FUNC_10 (struct vnode*,struct uio*,TYPE_4__*) ;
 int FUNC_11 (struct vnode*,struct uio*,TYPE_4__*) ;
 int FUNC_12 (struct vnode*,int,int ,TYPE_4__*,int*) ;
 scalar_t__ VAR_25 ;
 int FUNC_13 (struct vop_access_args*) ;
 TYPE_3__ VAR_26 ;
 scalar_t__ VAR_27 ;

__attribute__((used)) static int
FUNC_14(struct vop_access_args *VAR_28)
{
 struct vnode *VAR_29 = VAR_28->a_vp;
 int VAR_30 = 0, VAR_31, VAR_32;
 u_int32_t VAR_33, VAR_34, VAR_35;
 int VAR_36 = FUNC_5(VAR_29);
 struct nfsnode *VAR_37 = FUNC_6(VAR_29);






 if ((VAR_28->a_accmode & (VAR_20 | VAR_15 | VAR_23 |
     VAR_17 | VAR_22 | VAR_16 | VAR_21 |
     VAR_24)) != 0 && (VAR_29->v_mount->mnt_flag & VAR_2) != 0) {
  switch (VAR_29->v_type) {
  case 128:
  case 130:
  case 129:
   return (VAR_1);
  default:
   break;
  }
 }
 if (VAR_36) {
  if (VAR_28->a_accmode & VAR_19)
   VAR_33 = VAR_10;
  else
   VAR_33 = 0;
  if (VAR_29->v_type != 130) {
   if (VAR_28->a_accmode & VAR_20)
    VAR_33 |= (VAR_9 | VAR_7);
   if (VAR_28->a_accmode & VAR_15)
    VAR_33 |= VAR_7;
   if (VAR_28->a_accmode & VAR_18)
    VAR_33 |= VAR_6;
   if (VAR_28->a_accmode & VAR_16)
    VAR_33 |= VAR_5;
  } else {
   if (VAR_28->a_accmode & VAR_20)
    VAR_33 |= (VAR_9 | VAR_7);
   if (VAR_28->a_accmode & VAR_15)
    VAR_33 |= VAR_7;
   if (VAR_28->a_accmode & VAR_18)
    VAR_33 |= VAR_8;
   if (VAR_28->a_accmode & VAR_16)
    VAR_33 |= VAR_5;
   if (VAR_28->a_accmode & VAR_17)
    VAR_33 |= VAR_9;
  }

  if (VAR_25 > 0) {
   VAR_34 = VAR_10 | VAR_9 |
    VAR_7 | VAR_6 |
    VAR_5 | VAR_8;
  } else {
   VAR_34 = VAR_33;
  }





  VAR_32 = 0;
  FUNC_3(VAR_37);
  for (VAR_31 = 0; VAR_31 < VAR_11; VAR_31++) {
   if (VAR_28->a_cred->cr_uid == VAR_37->n_accesscache[VAR_31].uid) {
       if (VAR_27 < (VAR_37->n_accesscache[VAR_31].stamp
    + VAR_25) &&
    (VAR_37->n_accesscache[VAR_31].mode & VAR_33) == VAR_33) {
    FUNC_2(VAR_26);
    VAR_32 = 1;
       }
       break;
   }
  }
  FUNC_4(VAR_37);
  if (VAR_32 == 0) {



   FUNC_2(VAR_26);
          VAR_30 = FUNC_12(VAR_29, VAR_34, VAR_28->a_td,
       VAR_28->a_cred, &VAR_35);
   if (!VAR_30 &&
       (VAR_35 & VAR_33) != VAR_33)
    VAR_30 = VAR_0;
  }
  return (VAR_30);
 } else {
  if ((VAR_30 = FUNC_13(VAR_28)) != 0) {
   return (VAR_30);
  }







  FUNC_3(VAR_37);
  if (VAR_28->a_cred->cr_uid == 0 && (VAR_28->a_accmode & VAR_19)
      && FUNC_6(VAR_29)->n_size > 0) {
   struct iovec VAR_38;
   struct uio VAR_39;
   char VAR_40[1];

   FUNC_4(VAR_37);
   VAR_38.iov_base = VAR_40;
   VAR_38.iov_len = 1;
   VAR_39.uio_iov = &VAR_38;
   VAR_39.uio_iovcnt = 1;
   VAR_39.uio_offset = 0;
   VAR_39.uio_resid = 1;
   VAR_39.uio_segflg = VAR_14;
   VAR_39.uio_rw = VAR_13;
   VAR_39.uio_td = VAR_28->a_td;

   if (VAR_29->v_type == 128)
    VAR_30 = FUNC_11(VAR_29, &VAR_39, VAR_28->a_cred);
   else if (VAR_29->v_type == 130) {
    char* VAR_41;
    VAR_41 = FUNC_8(VAR_12, VAR_3, VAR_4);
    VAR_38.iov_base = VAR_41;
    VAR_38.iov_len = VAR_39.uio_resid = VAR_12;
    VAR_30 = FUNC_9(VAR_29, &VAR_39, VAR_28->a_cred,
        VAR_28->a_td);
    FUNC_7(VAR_41, VAR_3);
   } else if (VAR_29->v_type == 129)
    VAR_30 = FUNC_10(VAR_29, &VAR_39, VAR_28->a_cred);
   else
    VAR_30 = VAR_0;
  } else
   FUNC_4(VAR_37);
  return (VAR_30);
 }
}

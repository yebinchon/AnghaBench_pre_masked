
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vop_vptocnp_args {char* a_buf; int* a_buflen; struct ucred* a_cred; struct vnode** a_vpp; struct vnode* a_vp; } ;
struct vnode {scalar_t__ v_type; int v_vflag; TYPE_1__* v_mount; } ;
struct vattr {scalar_t__ va_fileid; int va_blocksize; } ;
struct ucred {int dummy; } ;
struct thread {int dummy; } ;
struct nameidata {struct vnode* ni_vp; } ;
struct dirent {scalar_t__ d_type; scalar_t__ d_fileno; char* d_name; int d_namlen; } ;
typedef scalar_t__ off_t ;
typedef scalar_t__ ino_t ;
struct TYPE_2__ {int mnt_flag; struct vnode* mnt_vnodecovered; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct nameidata*,int ) ;
 int VAR_14 ;
 int FUNC_1 (struct nameidata*,int ,int,int ,char*,struct vnode*,struct thread*) ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int FUNC_2 (struct vnode*,struct vattr*,struct ucred*) ;
 int FUNC_3 (struct vnode*) ;
 int FUNC_4 (struct vnode*,int ) ;
 int FUNC_5 (struct vnode*) ;
 int VAR_18 ;
 int FUNC_6 (char*,char*,int) ;
 struct thread* VAR_19 ;
 scalar_t__ FUNC_7 (struct vnode*,char*,struct thread*) ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 (struct vnode*,struct dirent**,char*,int,scalar_t__*,char**,int*,int*,struct thread*) ;
 scalar_t__ FUNC_10 (int,int ,int ) ;
 int FUNC_11 (struct vnode*,int,struct ucred*,struct thread*) ;
 int FUNC_12 (struct vnode*,int) ;
 int FUNC_13 (struct nameidata*,int*,int ,int ,struct ucred*,int *) ;
 int FUNC_14 (struct vnode*) ;
 int FUNC_15 (struct vnode*) ;
 int FUNC_16 (struct vnode*) ;

int
FUNC_17(struct vop_vptocnp_args *VAR_20)
{
 struct vnode *VAR_21 = VAR_20->a_vp;
 struct vnode **VAR_22 = VAR_20->a_vpp;
 struct ucred *VAR_23 = VAR_20->a_cred;
 char *VAR_24 = VAR_20->a_buf;
 int *VAR_25 = VAR_20->a_buflen;
 char *VAR_26, *VAR_27;
 int VAR_28, VAR_29, VAR_30, VAR_31, VAR_32, VAR_33, VAR_34, VAR_35;
 off_t VAR_36;
 ino_t VAR_37;
 struct vattr VAR_38;
 struct nameidata VAR_39;
 struct thread *VAR_40;
 struct dirent *VAR_41;
 struct vnode *VAR_42;

 VAR_28 = *VAR_25;
 VAR_29 = 0;
 VAR_35 = 0;
 VAR_40 = VAR_19;

 if (VAR_21->v_type != VAR_16)
  return (VAR_2);

 VAR_29 = FUNC_2(VAR_21, &VAR_38, VAR_23);
 if (VAR_29)
  return (VAR_29);

 FUNC_5(VAR_21);
 VAR_33 = FUNC_3(VAR_21);
 FUNC_4(VAR_21, 0);
 FUNC_1(&VAR_39, VAR_10, VAR_4 | VAR_9 | VAR_8, VAR_15,
     "..", VAR_21, VAR_40);
 VAR_32 = VAR_5;
 VAR_29 = FUNC_13(&VAR_39, &VAR_32, 0, VAR_17, VAR_23, ((void*)0));
 if (VAR_29) {
  FUNC_12(VAR_21, VAR_33 | VAR_6);
  return (VAR_29);
 }
 FUNC_0(&VAR_39, VAR_14);

 VAR_42 = *VAR_22 = VAR_39.ni_vp;

 if (VAR_21->v_mount != (*VAR_22)->v_mount &&
     ((*VAR_22)->v_vflag & VAR_18) &&
     ((*VAR_22)->v_mount->mnt_flag & VAR_11)) {
  *VAR_22 = (*VAR_22)->v_mount->mnt_vnodecovered;
  FUNC_5(VAR_42);
  FUNC_4(VAR_42, 0);
  FUNC_11(VAR_42, VAR_5, VAR_23, VAR_40);
  FUNC_5(*VAR_22);
  FUNC_12(*VAR_22, VAR_7 | VAR_6);
  VAR_35 = 1;
 }

 VAR_37 = VAR_38.va_fileid;

 VAR_31 = VAR_0;
 if (VAR_31 < VAR_38.va_blocksize)
  VAR_31 = VAR_38.va_blocksize;
 VAR_26 = (char *)FUNC_10(VAR_31, VAR_12, VAR_13);

 if ((*VAR_22)->v_type != VAR_16) {
  VAR_29 = VAR_2;
  goto out;
 }

 VAR_36 = 0;
 VAR_34 = 0;
 do {

  VAR_29 = FUNC_9(*VAR_22, &VAR_41, VAR_26, VAR_31, &VAR_36,
     &VAR_27, &VAR_34, &VAR_30, VAR_40);
  if (VAR_29)
   goto out;

  if ((VAR_41->d_type != VAR_1) &&
      (VAR_41->d_fileno == VAR_37)) {
   if (VAR_35) {
    FUNC_4(*VAR_22, 0);
    FUNC_12(VAR_42, VAR_7 | VAR_6);
    if (FUNC_7(VAR_42, VAR_41->d_name, VAR_40)) {
     VAR_29 = VAR_2;
     FUNC_4(VAR_42, 0);
     FUNC_12(*VAR_22, VAR_7 | VAR_6);
     goto out;
    }
    FUNC_4(VAR_42, 0);
    FUNC_12(*VAR_22, VAR_7 | VAR_6);
   }
   VAR_28 -= VAR_41->d_namlen;

   if (VAR_28 < 0) {
    VAR_29 = VAR_3;
    goto out;
   }
   if (VAR_41->d_namlen == 1 && VAR_41->d_name[0] == '.') {
    VAR_29 = VAR_2;
   } else {
    FUNC_6(VAR_41->d_name, VAR_24 + VAR_28, VAR_41->d_namlen);
    VAR_29 = 0;
   }
   goto out;
  }
 } while (VAR_34 > 0 || !VAR_30);
 VAR_29 = VAR_2;

out:
 FUNC_8(VAR_26, VAR_12);
 if (!VAR_29) {
  *VAR_25 = VAR_28;
  FUNC_15(*VAR_22);
 }
 if (VAR_35) {
  FUNC_14(*VAR_22);
  FUNC_16(VAR_42);
 } else {
  FUNC_4(VAR_42, 0);
  FUNC_11(VAR_42, VAR_5, VAR_23, VAR_40);
 }
 FUNC_12(VAR_21, VAR_33 | VAR_6);
 return (VAR_29);
}

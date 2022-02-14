
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uid_t ;
struct vop_close_args {int a_fflag; int a_td; struct ucred* a_cred; struct vnode* a_vp; } ;
struct vnode {scalar_t__ v_type; int v_mount; scalar_t__ v_object; } ;
struct ucred {int dummy; } ;
struct nfsvattr {int na_filerev; } ;
struct nfsnode {int n_flag; int n_error; scalar_t__ n_directio_asyncwr; scalar_t__ n_directio_opens; int n_change; scalar_t__ n_attrstamp; } ;
typedef int gid_t ;
struct TYPE_2__ {scalar_t__ nm_negnametimeo; int nm_flag; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct vnode*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct ucred*) ;
 int FUNC_4 (struct nfsnode*) ;
 int VAR_1 ;
 int FUNC_5 (struct nfsnode*) ;
 scalar_t__ FUNC_6 (struct vnode*) ;
 scalar_t__ FUNC_7 (struct vnode*) ;
 int VAR_2 ;
 int VAR_3 ;
 struct ucred* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__* FUNC_8 (int ) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (scalar_t__) ;
 scalar_t__ VAR_7 ;
 struct nfsnode* FUNC_11 (struct vnode*) ;
 int VAR_8 ;
 int FUNC_12 (struct vnode*,int ,int ,int,int ) ;
 int FUNC_13 (struct vnode*,int ,int ,int) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 struct ucred* FUNC_14 () ;
 scalar_t__ VAR_11 ;
 int FUNC_15 (struct vnode**,struct nfsvattr*,int *,int *,int ,int ) ;
 int FUNC_16 (int ,int,int ,int ) ;
 scalar_t__ FUNC_17 (struct vnode*) ;
 int FUNC_18 (struct vnode*,int ,int ) ;
 int FUNC_19 (struct vnode*,struct ucred*,int ,struct nfsvattr*,int *) ;
 int FUNC_20 (scalar_t__,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_21(struct vop_close_args *VAR_12)
{
 struct vnode *VAR_13 = VAR_12->a_vp;
 struct nfsnode *VAR_14 = FUNC_11(VAR_13);
 struct nfsvattr VAR_15;
 struct ucred *VAR_16;
 int VAR_17 = 0, VAR_18, VAR_19 = 0;
 int VAR_20 = VAR_12->a_fflag;

 if (FUNC_2(VAR_13->v_mount))
  return (0);



 if (VAR_12->a_cred == VAR_4) {
  VAR_16 = FUNC_14();
  VAR_19 = 1;
 } else {
  VAR_16 = VAR_12->a_cred;
 }
 if (VAR_13->v_type == VAR_7) {







     if (VAR_11 && VAR_13->v_object) {
  FUNC_9(VAR_13->v_object);
  FUNC_20(VAR_13->v_object, 0, 0, 0);
  FUNC_10(VAR_13->v_object);
     }
     FUNC_4(VAR_14);
     if (VAR_14->n_flag & VAR_2) {
  FUNC_5(VAR_14);
  if (FUNC_6(VAR_13)) {
      int VAR_21 = VAR_9 ? 1 : 0;
      VAR_17 = FUNC_12(VAR_13, VAR_0, VAR_12->a_td, VAR_21, 0);

  } else if (FUNC_7(VAR_13)) {
   if (FUNC_17(VAR_13) != 0) {
    int VAR_22 = VAR_9 ? 1 : 0;
    VAR_17 = FUNC_12(VAR_13, VAR_0, VAR_12->a_td,
        VAR_22, 0);





   }
  } else {
   VAR_17 = FUNC_13(VAR_13, VAR_8, VAR_12->a_td, 1);
  }
  FUNC_4(VAR_14);
     }
     if (FUNC_8(VAR_13->v_mount)->nm_negnametimeo == 0) {
      VAR_14->n_attrstamp = 0;
      FUNC_1(VAR_13);
     }
     if (VAR_14->n_flag & VAR_5) {
  VAR_14->n_flag &= ~VAR_5;
  VAR_17 = VAR_14->n_error;
     }
     FUNC_5(VAR_14);
 }

 if (FUNC_7(VAR_13)) {



  if (VAR_17 == 0 && FUNC_17(VAR_13) != 0 &&
      VAR_13->v_type == VAR_7 &&
      (FUNC_8(VAR_13->v_mount)->nm_flag & VAR_1) == 0) {
   VAR_18 = FUNC_19(VAR_13, VAR_16, VAR_12->a_td, &VAR_15,
       ((void*)0));
   if (!VAR_18) {
    VAR_14->n_change = VAR_15.na_filerev;
    (void) FUNC_15(&VAR_13, &VAR_15, ((void*)0),
        ((void*)0), 0, 0);
   }
  }




  VAR_18 = FUNC_18(VAR_13, 0, VAR_12->a_td);
  if (!VAR_17 && VAR_18)
   VAR_17 = VAR_18;
  if (VAR_17)
   VAR_17 = FUNC_16(VAR_12->a_td, VAR_17, (uid_t)0,
       (gid_t)0);
 }
 if (VAR_10)
  FUNC_0((VAR_14->n_directio_asyncwr == 0),
   ("nfs_close: dirty unflushed (%d) directio buffers\n",
    VAR_14->n_directio_asyncwr));
 if (VAR_10 && (VAR_20 & VAR_6) && (VAR_13->v_type == VAR_7)) {
  FUNC_4(VAR_14);
  FUNC_0((VAR_14->n_directio_opens > 0),
   ("nfs_close: unexpectedly value (0) of n_directio_opens\n"));
  VAR_14->n_directio_opens--;
  if (VAR_14->n_directio_opens == 0)
   VAR_14->n_flag &= ~VAR_3;
  FUNC_5(VAR_14);
 }
 if (VAR_19)
  FUNC_3(VAR_16);
 return (VAR_17);
}

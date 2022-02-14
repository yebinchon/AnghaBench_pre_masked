
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vnode {scalar_t__ v_type; int v_mount; } ;
struct TYPE_4__ {scalar_t__ tv_sec; } ;
struct vattr {TYPE_2__ va_mtime; } ;
struct uio {scalar_t__ uio_segflg; scalar_t__ uio_resid; scalar_t__ uio_offset; struct thread* uio_td; } ;
struct ucred {int dummy; } ;
struct thread {int dummy; } ;
struct TYPE_3__ {scalar_t__ tv_sec; } ;
struct smbnode {int n_flag; int n_fid; TYPE_1__ n_mtime; } ;
struct smbmount {int sm_share; } ;
struct smb_cred {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 struct smbmount* FUNC_1 (int ) ;
 int FUNC_2 (struct vnode*,struct vattr*,struct ucred*) ;
 scalar_t__ VAR_11 ;
 struct smbnode* FUNC_3 (struct vnode*) ;
 int FUNC_4 (struct smb_cred*,struct thread*,struct ucred*) ;
 int FUNC_5 (int ,int ,struct uio*,struct smb_cred*) ;
 int FUNC_6 (struct vnode*) ;
 int FUNC_7 (struct smb_cred*) ;
 struct smb_cred* FUNC_8 () ;
 int FUNC_9 (struct vnode*,struct uio*,struct ucred*) ;
 int FUNC_10 (struct vnode*,struct thread*) ;
 int FUNC_11 (struct vnode*,int) ;

int
FUNC_12(struct vnode *VAR_12, struct uio *VAR_13, struct ucred *VAR_14)
{
 struct smbmount *VAR_15 = FUNC_1(VAR_12->v_mount);
 struct smbnode *VAR_16 = FUNC_3(VAR_12);
 struct thread *VAR_17;
 struct vattr VAR_18;
 struct smb_cred *VAR_19;
 int VAR_20, VAR_21;




 if (VAR_13->uio_segflg == VAR_9)
  return VAR_2;

 if (VAR_12->v_type != VAR_11 && VAR_12->v_type != VAR_10) {
  FUNC_0("vn types other than VREG or VDIR are unsupported !\n");
  return VAR_1;
 }
 if (VAR_13->uio_resid == 0)
  return 0;
 if (VAR_13->uio_offset < 0)
  return VAR_0;


 VAR_17 = VAR_13->uio_td;
 if (VAR_12->v_type == VAR_10) {
  VAR_21 = VAR_4;
  if (VAR_21 == VAR_6)
   FUNC_11(VAR_12, VAR_7 | VAR_5);
  VAR_20 = FUNC_9(VAR_12, VAR_13, VAR_14);
  if (VAR_21 == VAR_6)
   FUNC_11(VAR_12, VAR_3 | VAR_5);
  return VAR_20;
 }


 if (VAR_16->n_flag & VAR_8) {
  FUNC_6(VAR_12);
  VAR_20 = FUNC_2(VAR_12, &VAR_18, VAR_14);
  if (VAR_20)
   return VAR_20;
  VAR_16->n_mtime.tv_sec = VAR_18.va_mtime.tv_sec;
 } else {
  VAR_20 = FUNC_2(VAR_12, &VAR_18, VAR_14);
  if (VAR_20)
   return VAR_20;
  if (VAR_16->n_mtime.tv_sec != VAR_18.va_mtime.tv_sec) {
   VAR_20 = FUNC_10(VAR_12, VAR_17);
   if (VAR_20)
    return VAR_20;
   VAR_16->n_mtime.tv_sec = VAR_18.va_mtime.tv_sec;
  }
 }
 VAR_19 = FUNC_8();
 FUNC_4(VAR_19, VAR_17, VAR_14);
 VAR_20 = FUNC_5(VAR_15->sm_share, VAR_16->n_fid, VAR_13, VAR_19);
 FUNC_7(VAR_19);
 return (VAR_20);
}

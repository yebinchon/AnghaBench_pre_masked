
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {scalar_t__ v_type; } ;
struct uio {scalar_t__ uio_offset; scalar_t__ uio_resid; struct thread* uio_td; } ;
struct ucred {int dummy; } ;
struct thread {int dummy; } ;
struct smbnode {int n_flag; scalar_t__ n_size; int n_fid; } ;
struct smbmount {int sm_share; } ;
struct smb_cred {int dummy; } ;
typedef int intmax_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int ,scalar_t__) ;
 int FUNC_2 (struct vnode*,int *,struct ucred*) ;
 scalar_t__ VAR_6 ;
 struct smbnode* FUNC_3 (struct vnode*) ;
 struct smbmount* FUNC_4 (struct vnode*) ;
 int FUNC_5 (struct smb_cred*,struct thread*,struct ucred*) ;
 int FUNC_6 (int ,int ,struct uio*,struct smb_cred*) ;
 int FUNC_7 (struct vnode*) ;
 int FUNC_8 (struct smb_cred*) ;
 struct smb_cred* FUNC_9 () ;
 int FUNC_10 (struct vnode*,struct thread*) ;
 int VAR_7 ;
 scalar_t__ FUNC_11 (struct vnode*,struct uio*,struct thread*) ;
 int FUNC_12 (struct vnode*,scalar_t__) ;

int
FUNC_13(struct vnode *VAR_8, struct uio *VAR_9,
 struct ucred *VAR_10, int VAR_11)
{
 struct smbmount *VAR_12 = FUNC_4(VAR_8);
 struct smbnode *VAR_13 = FUNC_3(VAR_8);
 struct smb_cred *VAR_14;
 struct thread *VAR_15;
 int VAR_16 = 0;

 if (VAR_8->v_type != VAR_6) {
  FUNC_0("vn types other than VREG unsupported !\n");
  return VAR_2;
 }
 FUNC_1("ofs=%jd,resid=%zd\n", (intmax_t)VAR_9->uio_offset,
     VAR_9->uio_resid);
 if (VAR_9->uio_offset < 0)
  return VAR_1;


 VAR_15 = VAR_9->uio_td;
 if (VAR_11 & (VAR_3 | VAR_4)) {
  if (VAR_13->n_flag & VAR_5) {
   FUNC_7(VAR_8);
   VAR_16 = FUNC_10(VAR_8, VAR_15);
   if (VAR_16)
    return VAR_16;
  }
  if (VAR_11 & VAR_3) {
   VAR_9->uio_offset = VAR_13->n_size;
  }
 }
 if (VAR_9->uio_resid == 0)
  return 0;

 if (FUNC_11(VAR_8, VAR_9, VAR_15))
  return (VAR_0);

 VAR_14 = FUNC_9();
 FUNC_5(VAR_14, VAR_15, VAR_10);
 VAR_16 = FUNC_6(VAR_12->sm_share, VAR_13->n_fid, VAR_9, VAR_14);
 FUNC_8(VAR_14);
 FUNC_1("after: ofs=%jd,resid=%zd\n", (intmax_t)VAR_9->uio_offset,
     VAR_9->uio_resid);
 if (!VAR_16) {
  if (VAR_9->uio_offset > VAR_13->n_size) {
   VAR_13->n_size = VAR_9->uio_offset;
   FUNC_12(VAR_8, VAR_13->n_size);
  }
 }
 return VAR_16;
}

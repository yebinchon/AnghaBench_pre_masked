
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnode {int v_mount; } ;
struct uio {long uio_offset; long uio_resid; int uio_td; } ;
struct ucred {int dummy; } ;
struct smbnode {int n_name; int n_ino; int n_parentino; long n_dirofs; struct smbfs_fctx* n_dirseq; scalar_t__ n_parent; } ;
struct TYPE_2__ {int fa_ino; int fa_attr; } ;
struct smbfs_fctx {long f_nmlen; TYPE_1__ f_attr; int f_name; } ;
struct smb_cred {int dummy; } ;
struct dirent {long d_reclen; int d_fileno; long d_namlen; char* d_name; void* d_type; } ;
struct componentname {char* cn_nameptr; long cn_namelen; } ;
typedef int caddr_t ;


 long VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int,...) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct smbnode* FUNC_1 (struct vnode*) ;
 int FUNC_2 (int ,char*,long) ;
 int FUNC_3 (int ,long) ;
 int FUNC_4 (struct vnode*,struct vnode*,struct componentname*) ;
 int FUNC_5 (struct dirent*) ;
 int FUNC_6 (struct smb_cred*,int ,struct ucred*) ;
 scalar_t__ VAR_8 ;
 int FUNC_7 (struct smbfs_fctx*,struct smb_cred*) ;
 int FUNC_8 (struct smbfs_fctx*,long,struct smb_cred*) ;
 int FUNC_9 (struct smbnode*,char*,int,int,struct smb_cred*,struct smbfs_fctx**) ;
 int FUNC_10 (struct smb_cred*) ;
 struct smb_cred* FUNC_11 () ;
 int FUNC_12 (int ,struct vnode*,int ,long,TYPE_1__*,struct vnode**) ;
 int FUNC_13 (struct dirent*,long,struct uio*) ;
 int FUNC_14 (struct vnode*) ;

__attribute__((used)) static int
FUNC_15(struct vnode *VAR_9, struct uio *VAR_10, struct ucred *VAR_11)
{
 struct dirent VAR_12;
 struct componentname VAR_13;
 struct smb_cred *VAR_14;
 struct smbfs_fctx *VAR_15;
 struct vnode *VAR_16;
 struct smbnode *VAR_17 = FUNC_1(VAR_9);
 int VAR_18 ;
 long VAR_19, VAR_20;

 VAR_17 = FUNC_1(VAR_9);
 FUNC_0("dirname='%s'\n", VAR_17->n_name);
 VAR_14 = FUNC_11();
 FUNC_6(VAR_14, VAR_10->uio_td, VAR_11);
 VAR_19 = VAR_10->uio_offset / VAR_0;
 VAR_20 = VAR_10->uio_resid / VAR_0;
 if (VAR_10->uio_resid < VAR_0 || VAR_10->uio_offset < 0) {
  VAR_18 = VAR_3;
  goto out;
 }
 while (VAR_20 && VAR_19 < 2) {
  VAR_20--;
  FUNC_3((caddr_t)&VAR_12, VAR_0);
  VAR_12.d_reclen = VAR_0;
  VAR_12.d_fileno = (VAR_19 == 0) ? VAR_17->n_ino :
      (VAR_17->n_parent ? VAR_17->n_parentino : 2);
  if (VAR_12.d_fileno == 0)
   VAR_12.d_fileno = 0x7ffffffd + VAR_19;
  VAR_12.d_namlen = VAR_19 + 1;
  VAR_12.d_name[0] = '.';
  VAR_12.d_name[1] = '.';
  VAR_12.d_type = VAR_1;
  FUNC_5(&VAR_12);
  VAR_18 = FUNC_13(&VAR_12, VAR_0, VAR_10);
  if (VAR_18)
   goto out;
  VAR_19++;
  VAR_10->uio_offset += VAR_0;
 }
 if (VAR_20 == 0) {
  VAR_18 = 0;
  goto out;
 }
 if (VAR_19 != VAR_17->n_dirofs || VAR_17->n_dirseq == ((void*)0)) {
  FUNC_0("Reopening search %ld:%ld\n", VAR_19, VAR_17->n_dirofs);
  if (VAR_17->n_dirseq) {
   FUNC_7(VAR_17->n_dirseq, VAR_14);
   VAR_17->n_dirseq = ((void*)0);
  }
  VAR_17->n_dirofs = 2;
  VAR_18 = FUNC_9(VAR_17, "*", 1,
      VAR_7 | VAR_6 | VAR_5,
      VAR_14, &VAR_15);
  if (VAR_18) {
   FUNC_0("can not open search, error = %d", VAR_18);
   goto out;
  }
  VAR_17->n_dirseq = VAR_15;
 } else
  VAR_15 = VAR_17->n_dirseq;
 while (VAR_17->n_dirofs < VAR_19) {
  VAR_18 = FUNC_8(VAR_15, VAR_19 - VAR_17->n_dirofs++, VAR_14);
  if (VAR_18) {
   FUNC_7(VAR_17->n_dirseq, VAR_14);
   VAR_17->n_dirseq = ((void*)0);
   VAR_18 = VAR_4 ? 0 : VAR_18;
   goto out;
  }
 }
 VAR_18 = 0;
 for (; VAR_20; VAR_20--, VAR_19++) {
  VAR_18 = FUNC_8(VAR_15, VAR_20, VAR_14);
  if (VAR_18)
   break;
  VAR_17->n_dirofs++;
  FUNC_3((caddr_t)&VAR_12, VAR_0);
  VAR_12.d_reclen = VAR_0;
  VAR_12.d_fileno = VAR_15->f_attr.fa_ino;
  VAR_12.d_type = (VAR_15->f_attr.fa_attr & VAR_5) ? VAR_1 : VAR_2;
  VAR_12.d_namlen = VAR_15->f_nmlen;
  FUNC_2(VAR_15->f_name, VAR_12.d_name, VAR_12.d_namlen);
  FUNC_5(&VAR_12);
  if (VAR_8) {
   VAR_18 = FUNC_12(VAR_9->v_mount, VAR_9, VAR_15->f_name,
       VAR_15->f_nmlen, &VAR_15->f_attr, &VAR_16);
   if (!VAR_18) {
    VAR_13.cn_nameptr = VAR_12.d_name;
    VAR_13.cn_namelen = VAR_12.d_namlen;
    FUNC_4(VAR_9, VAR_16, &VAR_13);
    FUNC_14(VAR_16);
   }
  }
  VAR_18 = FUNC_13(&VAR_12, VAR_0, VAR_10);
  if (VAR_18)
   break;
 }
 if (VAR_18 == VAR_4)
  VAR_18 = 0;
 VAR_10->uio_offset = VAR_19 * VAR_0;
out:
 FUNC_10(VAR_14);
 return VAR_18;
}

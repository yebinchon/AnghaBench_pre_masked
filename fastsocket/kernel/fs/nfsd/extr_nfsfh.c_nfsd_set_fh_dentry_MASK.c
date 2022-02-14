
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct svc_rqst {int rq_vers; } ;
struct knfsd_fh {int fh_size; int fh_version; scalar_t__ fh_auth_type; scalar_t__ fh_fsid_type; scalar_t__ ofh_dirino; int fh_fileid_type; int ofh_generation; int ofh_ino; int ofh_xino; int ofh_xdev; int * fh_auth; int * fh_fsid; } ;
struct svc_fh {struct svc_export* fh_export; struct svc_export* fh_dentry; struct knfsd_fh fh_handle; } ;
struct TYPE_12__ {int name; } ;
struct TYPE_8__ {int mnt; int dentry; } ;
struct svc_export {int ex_flags; int d_flags; TYPE_6__ d_name; TYPE_5__* d_parent; TYPE_3__* d_inode; TYPE_2__ ex_path; } ;
struct TYPE_7__ {scalar_t__ parent_ino; int gen; int ino; } ;
struct fid {TYPE_1__ i32; } ;
struct dentry {int ex_flags; int d_flags; TYPE_6__ d_name; TYPE_5__* d_parent; TYPE_3__* d_inode; TYPE_2__ ex_path; } ;
struct cred {int cap_permitted; int cap_effective; } ;
typedef int ino_t ;
typedef int dev_t ;
typedef int __u32 ;
typedef scalar_t__ __be32 ;
struct TYPE_10__ {int name; } ;
struct TYPE_11__ {TYPE_4__ d_name; } ;
struct TYPE_9__ {int i_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_0 (struct svc_export*) ;
 int FUNC_1 (int ,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (struct svc_export*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 struct svc_export* FUNC_5 (int ) ;
 int FUNC_6 (struct svc_export*) ;
 struct svc_export* FUNC_7 (int ,struct fid*,int,int,int ,struct svc_export*) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__,int *,int ,int ,int ,int *) ;
 int FUNC_10 (int ) ;
 int VAR_12 ;
 scalar_t__ FUNC_11 (struct svc_rqst*,struct svc_export*) ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 struct cred* FUNC_15 (struct cred*) ;
 struct cred* FUNC_16 () ;
 int FUNC_17 (char*,int ,int ) ;
 int FUNC_18 (struct cred*) ;
 struct svc_export* FUNC_19 (struct svc_rqst*,scalar_t__,int *) ;
 int FUNC_20 (int ) ;

__attribute__((used)) static __be32 FUNC_21(struct svc_rqst *VAR_16, struct svc_fh *VAR_17)
{
 struct knfsd_fh *VAR_18 = &VAR_17->fh_handle;
 struct fid *VAR_19 = ((void*)0), VAR_20;
 struct svc_export *VAR_21;
 struct dentry *VAR_22;
 int VAR_23;
 int VAR_24 = VAR_18->fh_size/4;
 __be32 VAR_25;

 VAR_25 = VAR_15;
 if (VAR_16->rq_vers > 2)
  VAR_25 = VAR_13;
 if (VAR_16->rq_vers == 4 && VAR_18->fh_size == 0)
  return VAR_14;

 if (VAR_18->fh_version == 1) {
  int VAR_26;

  if (--VAR_24 < 0)
   return VAR_25;
  if (VAR_18->fh_auth_type != 0)
   return VAR_25;
  VAR_26 = FUNC_8(VAR_18->fh_fsid_type) / 4;
  if (VAR_26 == 0)
   return VAR_25;
  if (VAR_18->fh_fsid_type == VAR_9) {

   VAR_26 = FUNC_8(VAR_8)/4;
   VAR_18->fh_fsid_type = VAR_8;
   VAR_18->fh_fsid[0] = FUNC_10(FUNC_1(FUNC_13(VAR_18->fh_fsid[0]), FUNC_13(VAR_18->fh_fsid[1])));
   VAR_18->fh_fsid[1] = VAR_18->fh_fsid[2];
  }
  VAR_24 -= VAR_26;
  if (VAR_24 < 0)
   return VAR_25;
  VAR_21 = FUNC_19(VAR_16, VAR_18->fh_fsid_type, VAR_18->fh_auth);
  VAR_19 = (struct fid *)(VAR_18->fh_auth + VAR_26);
 } else {
  __u32 VAR_27[2];
  dev_t VAR_28;
  ino_t VAR_29;

  if (VAR_18->fh_size != VAR_11)
   return VAR_25;

  VAR_28 = FUNC_14(VAR_18->ofh_xdev);
  VAR_29 = FUNC_20(VAR_18->ofh_xino);
  FUNC_9(VAR_7, VAR_27, VAR_28, VAR_29, 0, ((void*)0));
  VAR_21 = FUNC_19(VAR_16, VAR_7, VAR_27);
 }

 VAR_25 = VAR_15;
 if (FUNC_2(VAR_21) == -VAR_2)
  return VAR_25;

 if (FUNC_0(VAR_21))
  return FUNC_12(FUNC_2(VAR_21));

 if (VAR_21->ex_flags & VAR_10) {
  struct cred *VAR_30 = FUNC_16();
  if (!VAR_30)
   return FUNC_12(-VAR_3);
  VAR_30->cap_effective =
   FUNC_4(VAR_30->cap_effective,
        VAR_30->cap_permitted);
  FUNC_18(FUNC_15(VAR_30));
  FUNC_18(VAR_30);
 } else {
  VAR_25 = FUNC_11(VAR_16, VAR_21);
  if (VAR_25)
   goto out;
 }




 VAR_25 = VAR_15;
 if (VAR_16->rq_vers > 2)
  VAR_25 = VAR_13;

 if (VAR_18->fh_version != 1) {
  VAR_20.i32.ino = VAR_18->ofh_ino;
  VAR_20.i32.gen = VAR_18->ofh_generation;
  VAR_20.i32.parent_ino = VAR_18->ofh_dirino;
  VAR_19 = &VAR_20;
  VAR_24 = 3;
  if (VAR_18->ofh_dirino == 0)
   VAR_23 = VAR_4;
  else
   VAR_23 = VAR_5;
 } else
  VAR_23 = VAR_18->fh_fileid_type;

 if (VAR_23 == VAR_6)
  VAR_22 = FUNC_5(VAR_21->ex_path.dentry);
 else {
  VAR_22 = FUNC_7(VAR_21->ex_path.mnt, VAR_19,
    VAR_24, VAR_23,
    VAR_12, VAR_21);
 }
 if (VAR_22 == ((void*)0))
  goto out;
 if (FUNC_0(VAR_22)) {
  if (FUNC_2(VAR_22) != -VAR_1)
   VAR_25 = FUNC_12(FUNC_2(VAR_22));
  goto out;
 }

 if (FUNC_3(VAR_22->d_inode->i_mode) &&
   (VAR_22->d_flags & VAR_0)) {
  FUNC_17("nfsd: find_fh_dentry returned a DISCONNECTED directory: %s/%s\n",
    VAR_22->d_parent->d_name.name, VAR_22->d_name.name);
 }

 VAR_17->fh_dentry = VAR_22;
 VAR_17->fh_export = VAR_21;
 return 0;
out:
 FUNC_6(VAR_21);
 return VAR_25;
}

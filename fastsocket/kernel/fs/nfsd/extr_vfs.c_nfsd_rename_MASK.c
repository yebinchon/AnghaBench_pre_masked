
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct svc_rqst {int rq_vers; } ;
struct svc_fh {int fh_locked; TYPE_2__* fh_export; struct dentry* fh_dentry; } ;
struct inode {int dummy; } ;
struct dentry {struct inode* d_inode; int d_count; } ;
typedef scalar_t__ __be32 ;
struct TYPE_3__ {scalar_t__ mnt; } ;
struct TYPE_4__ {TYPE_1__ ex_path; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct dentry*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct dentry*) ;
 int VAR_7 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct svc_fh*) ;
 int FUNC_4 (struct dentry*) ;
 int FUNC_5 (struct svc_fh*) ;
 scalar_t__ FUNC_6 (struct svc_rqst*,struct svc_fh*,int ,int ) ;
 int FUNC_7 (struct svc_fh*) ;
 int FUNC_8 (struct svc_fh*) ;
 int FUNC_9 (struct svc_fh*) ;
 scalar_t__ FUNC_10 (char*,int) ;
 struct dentry* FUNC_11 (struct dentry*,struct dentry*) ;
 struct dentry* FUNC_12 (char*,struct dentry*,int) ;
 int FUNC_13 (struct inode*) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_14 (int) ;
 scalar_t__ FUNC_15 (struct svc_fh*) ;
 int FUNC_16 (struct dentry*,struct dentry*) ;
 int FUNC_17 (struct inode*,struct dentry*,struct inode*,struct dentry*) ;

__be32
FUNC_18(struct svc_rqst *VAR_11, struct svc_fh *VAR_12, char *VAR_13, int VAR_14,
       struct svc_fh *VAR_15, char *VAR_16, int VAR_17)
{
 struct dentry *VAR_18, *VAR_19, *VAR_20, *VAR_21, *VAR_22;
 struct inode *VAR_23, *VAR_24;
 __be32 VAR_25;
 int VAR_26;

 VAR_25 = FUNC_6(VAR_11, VAR_12, VAR_7, VAR_6);
 if (VAR_25)
  goto out;
 VAR_25 = FUNC_6(VAR_11, VAR_15, VAR_7, VAR_5);
 if (VAR_25)
  goto out;

 VAR_18 = VAR_12->fh_dentry;
 VAR_23 = VAR_18->d_inode;

 VAR_19 = VAR_15->fh_dentry;
 VAR_24 = VAR_19->d_inode;

 VAR_25 = (VAR_11->rq_vers == 2) ? VAR_8 : VAR_10;
 if (VAR_12->fh_export != VAR_15->fh_export)
  goto out;

 VAR_25 = VAR_9;
 if (!VAR_14 || FUNC_10(VAR_13, VAR_14) || !VAR_17 || FUNC_10(VAR_16, VAR_17))
  goto out;

 VAR_26 = FUNC_7(VAR_12);
 if (VAR_26) {
  VAR_25 = FUNC_14(VAR_26);
  goto out;
 }



 VAR_22 = FUNC_11(VAR_19, VAR_18);
 VAR_12->fh_locked = VAR_15->fh_locked = 1;
 FUNC_9(VAR_12);
 FUNC_9(VAR_15);

 VAR_20 = FUNC_12(VAR_13, VAR_18, VAR_14);
 VAR_26 = FUNC_1(VAR_20);
 if (FUNC_0(VAR_20))
  goto out_nfserr;

 VAR_26 = -VAR_1;
 if (!VAR_20->d_inode)
  goto out_dput_old;
 VAR_26 = -VAR_0;
 if (VAR_20 == VAR_22)
  goto out_dput_old;

 VAR_21 = FUNC_12(VAR_16, VAR_19, VAR_17);
 VAR_26 = FUNC_1(VAR_21);
 if (FUNC_0(VAR_21))
  goto out_dput_old;
 VAR_26 = -VAR_2;
 if (VAR_21 == VAR_22)
  goto out_dput_new;

 if (FUNC_15(VAR_12) &&
  ((FUNC_2(&VAR_20->d_count) > 1)
   || (FUNC_2(&VAR_21->d_count) > 1))) {
   VAR_26 = -VAR_3;
   goto out_dput_new;
 }

 VAR_26 = -VAR_4;
 if (VAR_12->fh_export->ex_path.mnt != VAR_15->fh_export->ex_path.mnt)
  goto out_dput_new;

 VAR_26 = FUNC_13(VAR_20->d_inode);
 if (VAR_26)
  goto out_dput_new;
 if (VAR_21->d_inode) {
  VAR_26 = FUNC_13(VAR_21->d_inode);
  if (VAR_26)
   goto out_dput_new;
 }
 VAR_26 = FUNC_17(VAR_23, VAR_20, VAR_24, VAR_21);
 if (!VAR_26) {
  VAR_26 = FUNC_3(VAR_15);
  if (!VAR_26)
   VAR_26 = FUNC_3(VAR_12);
 }
 out_dput_new:
 FUNC_4(VAR_21);
 out_dput_old:
 FUNC_4(VAR_20);
 out_nfserr:
 VAR_25 = FUNC_14(VAR_26);





 FUNC_8(VAR_12);
 FUNC_8(VAR_15);
 FUNC_16(VAR_19, VAR_18);
 VAR_12->fh_locked = VAR_15->fh_locked = 0;
 FUNC_5(VAR_12);

out:
 return VAR_25;
}

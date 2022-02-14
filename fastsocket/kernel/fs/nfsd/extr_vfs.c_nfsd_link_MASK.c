
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rqst {int rq_vers; } ;
struct svc_fh {struct dentry* fh_dentry; } ;
struct inode {int dummy; } ;
struct dentry {struct inode* d_inode; } ;
typedef scalar_t__ __be32 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct dentry*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct dentry*) ;
 int VAR_4 ;
 int FUNC_2 (struct svc_fh*) ;
 int FUNC_3 (struct dentry*) ;
 int FUNC_4 (struct svc_fh*) ;
 int FUNC_5 (struct svc_fh*,int ) ;
 int FUNC_6 (struct svc_fh*) ;
 scalar_t__ FUNC_7 (struct svc_rqst*,struct svc_fh*,int ,int ) ;
 int FUNC_8 (struct svc_fh*) ;
 scalar_t__ FUNC_9 (char*,int) ;
 struct dentry* FUNC_10 (char*,struct dentry*,int) ;
 int FUNC_11 (struct inode*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_12 (int) ;
 int FUNC_13 (struct dentry*,struct inode*,struct dentry*) ;

__be32
FUNC_14(struct svc_rqst *VAR_9, struct svc_fh *VAR_10,
    char *VAR_11, int VAR_12, struct svc_fh *VAR_13)
{
 struct dentry *VAR_14, *VAR_15, *VAR_16;
 struct inode *VAR_17;
 __be32 VAR_18;
 int VAR_19;

 VAR_18 = FUNC_7(VAR_9, VAR_10, VAR_4, VAR_2);
 if (VAR_18)
  goto out;
 VAR_18 = FUNC_7(VAR_9, VAR_13, -VAR_4, VAR_3);
 if (VAR_18)
  goto out;

 VAR_18 = VAR_8;
 if (!VAR_12)
  goto out;
 VAR_18 = VAR_6;
 if (FUNC_9(VAR_11, VAR_12))
  goto out;

 VAR_19 = FUNC_8(VAR_13);
 if (VAR_19) {
  VAR_18 = FUNC_12(VAR_19);
  goto out;
 }

 FUNC_5(VAR_10, VAR_1);
 VAR_14 = VAR_10->fh_dentry;
 VAR_17 = VAR_14->d_inode;

 VAR_15 = FUNC_10(VAR_11, VAR_14, VAR_12);
 VAR_19 = FUNC_1(VAR_15);
 if (FUNC_0(VAR_15))
  goto out_nfserr;

 VAR_16 = VAR_13->fh_dentry;

 VAR_18 = VAR_7;
 if (!VAR_16->d_inode)
  goto out_dput;
 VAR_19 = FUNC_11(VAR_16->d_inode);
 if (VAR_19) {
  VAR_18 = FUNC_12(VAR_19);
  goto out_dput;
 }
 VAR_19 = FUNC_13(VAR_16, VAR_17, VAR_15);
 if (!VAR_19) {
  VAR_18 = FUNC_12(FUNC_2(VAR_10));
  if (!VAR_18)
   VAR_18 = FUNC_12(FUNC_2(VAR_13));
 } else {
  if (VAR_19 == -VAR_0 && VAR_9->rq_vers == 2)
   VAR_18 = VAR_5;
  else
   VAR_18 = FUNC_12(VAR_19);
 }
out_dput:
 FUNC_3(VAR_15);
out_unlock:
 FUNC_6(VAR_10);
 FUNC_4(VAR_13);
out:
 return VAR_18;

out_nfserr:
 VAR_18 = FUNC_12(VAR_19);
 goto out_unlock;
}

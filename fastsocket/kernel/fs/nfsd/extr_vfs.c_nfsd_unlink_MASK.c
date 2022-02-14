
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct svc_rqst {int dummy; } ;
struct svc_fh {TYPE_1__* fh_export; struct dentry* fh_dentry; } ;
struct inode {int i_mode; } ;
struct dentry {int d_count; struct inode* d_inode; } ;
typedef scalar_t__ __be32 ;
struct TYPE_2__ {int ex_flags; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct dentry*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct dentry*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct svc_fh*) ;
 int FUNC_4 (struct dentry*) ;
 int FUNC_5 (struct svc_fh*,int ) ;
 scalar_t__ FUNC_6 (struct svc_rqst*,struct svc_fh*,int,int ) ;
 int FUNC_7 (struct svc_fh*) ;
 scalar_t__ FUNC_8 (char*,int) ;
 struct dentry* FUNC_9 (char*,struct dentry*,int) ;
 int FUNC_10 (struct inode*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_11 (int) ;
 int FUNC_12 (struct inode*,struct dentry*) ;
 int FUNC_13 (struct inode*,struct dentry*) ;

__be32
FUNC_14(struct svc_rqst *VAR_8, struct svc_fh *VAR_9, int VAR_10,
    char *VAR_11, int VAR_12)
{
 struct dentry *VAR_13, *VAR_14;
 struct inode *VAR_15;
 __be32 VAR_16;
 int VAR_17;

 VAR_16 = VAR_6;
 if (!VAR_12 || FUNC_8(VAR_11, VAR_12))
  goto out;
 VAR_16 = FUNC_6(VAR_8, VAR_9, VAR_4, VAR_2);
 if (VAR_16)
  goto out;

 VAR_17 = FUNC_7(VAR_9);
 if (VAR_17)
  goto out_nfserr;

 FUNC_5(VAR_9, VAR_1);
 VAR_13 = VAR_9->fh_dentry;
 VAR_15 = VAR_13->d_inode;

 VAR_14 = FUNC_9(VAR_11, VAR_13, VAR_12);
 VAR_17 = FUNC_1(VAR_14);
 if (FUNC_0(VAR_14))
  goto out_nfserr;

 if (!VAR_14->d_inode) {
  FUNC_4(VAR_14);
  VAR_16 = VAR_7;
  goto out;
 }

 if (!VAR_10)
  VAR_10 = VAR_14->d_inode->i_mode & VAR_5;

 VAR_17 = FUNC_10(VAR_14->d_inode);
 if (VAR_17)
  goto out_put;
 if (VAR_10 != VAR_4) {






  VAR_17 = FUNC_13(VAR_15, VAR_14);
 } else {
  VAR_17 = FUNC_12(VAR_15, VAR_14);
 }

 if (!VAR_17)
  VAR_17 = FUNC_3(VAR_9);
out_put:
 FUNC_4(VAR_14);

out_nfserr:
 VAR_16 = FUNC_11(VAR_17);
out:
 return VAR_16;
}

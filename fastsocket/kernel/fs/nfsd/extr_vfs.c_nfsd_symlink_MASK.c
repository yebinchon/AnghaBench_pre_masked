
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rqst {int dummy; } ;
struct svc_fh {int fh_export; struct dentry* fh_dentry; } ;
struct iattr {int dummy; } ;
struct dentry {int d_inode; } ;
typedef scalar_t__ __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct dentry*) ;
 int VAR_2 ;
 int FUNC_1 (struct dentry*) ;
 int VAR_3 ;
 int FUNC_2 (struct svc_fh*) ;
 int FUNC_3 (struct dentry*) ;
 scalar_t__ FUNC_4 (struct svc_fh*,int ,struct dentry*,struct svc_fh*) ;
 int FUNC_5 (struct svc_fh*) ;
 int FUNC_6 (struct svc_fh*) ;
 int FUNC_7 (struct svc_fh*) ;
 scalar_t__ FUNC_8 (struct svc_rqst*,struct svc_fh*,int ,int ) ;
 int FUNC_9 (struct svc_fh*) ;
 scalar_t__ FUNC_10 (char*,int) ;
 int FUNC_11 (char*) ;
 char* FUNC_12 (int,int ) ;
 struct dentry* FUNC_13 (char*,struct dentry*,int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_14 (int) ;
 int FUNC_15 (char*,char*,int) ;
 scalar_t__ FUNC_16 (int) ;
 int FUNC_17 (int ,struct dentry*,char*) ;

__be32
FUNC_18(struct svc_rqst *VAR_6, struct svc_fh *VAR_7,
    char *VAR_8, int VAR_9,
    char *VAR_10, int VAR_11,
    struct svc_fh *VAR_12,
    struct iattr *VAR_13)
{
 struct dentry *VAR_14, *VAR_15;
 __be32 VAR_16, VAR_17;
 int VAR_18;

 VAR_16 = VAR_5;
 if (!VAR_9 || !VAR_11)
  goto out;
 VAR_16 = VAR_4;
 if (FUNC_10(VAR_8, VAR_9))
  goto out;

 VAR_16 = FUNC_8(VAR_6, VAR_7, VAR_3, VAR_2);
 if (VAR_16)
  goto out;

 VAR_18 = FUNC_9(VAR_7);
 if (VAR_18)
  goto out_nfserr;

 FUNC_6(VAR_7);
 VAR_14 = VAR_7->fh_dentry;
 VAR_15 = FUNC_13(VAR_8, VAR_14, VAR_9);
 VAR_18 = FUNC_1(VAR_15);
 if (FUNC_0(VAR_15))
  goto out_nfserr;

 if (FUNC_16(VAR_10[VAR_11] != 0)) {
  char *VAR_19 = FUNC_12(VAR_11+1, VAR_1);
  if (VAR_19 == ((void*)0))
   VAR_18 = -VAR_0;
  else {
   FUNC_15(VAR_19, VAR_10, VAR_11);
   VAR_19[VAR_11] = 0;
   VAR_18 = FUNC_17(VAR_14->d_inode, VAR_15, VAR_19);
   FUNC_11(VAR_19);
  }
 } else
  VAR_18 = FUNC_17(VAR_14->d_inode, VAR_15, VAR_10);
 VAR_16 = FUNC_14(VAR_18);
 if (!VAR_16)
  VAR_16 = FUNC_14(FUNC_2(VAR_7));
 FUNC_7(VAR_7);

 FUNC_5(VAR_7);

 VAR_17 = FUNC_4(VAR_12, VAR_7->fh_export, VAR_15, VAR_7);
 FUNC_3(VAR_15);
 if (VAR_16==0) VAR_16 = VAR_17;
out:
 return VAR_16;

out_nfserr:
 VAR_16 = FUNC_14(VAR_18);
 goto out;
}

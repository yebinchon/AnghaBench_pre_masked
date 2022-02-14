
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct svc_rqst {int dummy; } ;
struct svc_fh {struct svc_export* fh_export; struct dentry* fh_dentry; } ;
struct TYPE_2__ {struct dentry* dentry; } ;
struct svc_export {TYPE_1__ ex_path; } ;
struct dentry {int dummy; } ;
typedef scalar_t__ __be32 ;


 int FUNC_0 (struct svc_export*) ;
 scalar_t__ FUNC_1 (struct dentry*) ;
 int VAR_0 ;
 int FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct svc_fh*) ;
 int VAR_1 ;
 struct dentry* FUNC_4 (struct dentry*) ;
 struct dentry* FUNC_5 (struct dentry*) ;
 int FUNC_6 (char*,int ,unsigned int,char const*) ;
 int FUNC_7 (struct dentry*) ;
 int FUNC_8 (struct svc_export*) ;
 int FUNC_9 (struct svc_export*) ;
 int FUNC_10 (struct svc_fh*) ;
 scalar_t__ FUNC_11 (struct svc_rqst*,struct svc_fh*,int ,int ) ;
 scalar_t__ FUNC_12 (char const*,unsigned int) ;
 struct dentry* FUNC_13 (char const*,struct dentry*,unsigned int) ;
 int FUNC_14 (struct svc_rqst*,struct dentry**,struct svc_export**) ;
 int FUNC_15 (struct svc_rqst*,struct dentry*,struct svc_export**,struct dentry**) ;
 scalar_t__ FUNC_16 (struct dentry*,struct svc_export*) ;
 int FUNC_17 (struct svc_rqst*) ;
 scalar_t__ FUNC_18 (int) ;

__be32
FUNC_19(struct svc_rqst *VAR_2, struct svc_fh *VAR_3,
     const char *VAR_4, unsigned int VAR_5,
     struct svc_export **VAR_6, struct dentry **VAR_7)
{
 struct svc_export *VAR_8;
 struct dentry *VAR_9;
 struct dentry *VAR_10;
 __be32 VAR_11;
 int VAR_12;

 FUNC_6("nfsd: nfsd_lookup(fh %s, %.*s)\n", FUNC_3(VAR_3), VAR_5,VAR_4);


 VAR_11 = FUNC_11(VAR_2, VAR_3, VAR_1, VAR_0);
 if (VAR_11)
  return VAR_11;

 VAR_9 = VAR_3->fh_dentry;
 VAR_8 = VAR_3->fh_export;
 FUNC_8(VAR_8);


 if (FUNC_12(VAR_4, VAR_5)) {
  if (VAR_5==1)
   VAR_10 = FUNC_4(VAR_9);
  else if (VAR_9 != VAR_8->ex_path.dentry)
   VAR_10 = FUNC_5(VAR_9);
  else if (!FUNC_0(VAR_8) && !FUNC_17(VAR_2))
   VAR_10 = FUNC_4(VAR_9);
  else {

   VAR_12 = FUNC_15(VAR_2, VAR_9, &VAR_8, &VAR_10);
   if (VAR_12)
    goto out_nfserr;
  }
 } else {
  FUNC_10(VAR_3);
  VAR_10 = FUNC_13(VAR_4, VAR_9, VAR_5);
  VAR_12 = FUNC_2(VAR_10);
  if (FUNC_1(VAR_10))
   goto out_nfserr;



  if (FUNC_16(VAR_10, VAR_8)) {
   if ((VAR_12 = FUNC_14(VAR_2, &VAR_10, &VAR_8))) {
    FUNC_7(VAR_10);
    goto out_nfserr;
   }
  }
 }
 *VAR_7 = VAR_10;
 *VAR_6 = VAR_8;
 return 0;

out_nfserr:
 FUNC_9(VAR_8);
 return FUNC_18(VAR_12);
}

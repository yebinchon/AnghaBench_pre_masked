
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rqst {int dummy; } ;
struct svc_fh {int dummy; } ;
struct svc_export {int dummy; } ;
struct dentry {int d_inode; } ;
typedef scalar_t__ __be32 ;


 scalar_t__ FUNC_0 (struct svc_export*,struct svc_rqst*) ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct svc_export*) ;
 scalar_t__ FUNC_3 (struct svc_fh*,struct svc_export*,struct dentry*,struct svc_fh*) ;
 scalar_t__ FUNC_4 (struct svc_rqst*,struct svc_fh*,char const*,unsigned int,struct svc_export**,struct dentry**) ;
 scalar_t__ VAR_0 ;

__be32
FUNC_5(struct svc_rqst *VAR_1, struct svc_fh *VAR_2, const char *VAR_3,
    unsigned int VAR_4, struct svc_fh *VAR_5)
{
 struct svc_export *VAR_6;
 struct dentry *VAR_7;
 __be32 VAR_8;

 VAR_8 = FUNC_4(VAR_1, VAR_2, VAR_3, VAR_4, &VAR_6, &VAR_7);
 if (VAR_8)
  return VAR_8;
 VAR_8 = FUNC_0(VAR_6, VAR_1);
 if (VAR_8)
  goto out;




 VAR_8 = FUNC_3(VAR_5, VAR_6, VAR_7, VAR_2);
 if (!VAR_8 && !VAR_7->d_inode)
  VAR_8 = VAR_0;
out:
 FUNC_1(VAR_7);
 FUNC_2(VAR_6);
 return VAR_8;
}

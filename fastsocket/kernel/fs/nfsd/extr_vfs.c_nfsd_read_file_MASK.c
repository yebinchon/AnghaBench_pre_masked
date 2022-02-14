
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rqst {int dummy; } ;
struct svc_fh {int fh_dentry; int fh_export; } ;
struct kvec {int dummy; } ;
struct file {int dummy; } ;
typedef int loff_t ;
typedef scalar_t__ __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct svc_rqst*,int ,int ,int) ;
 scalar_t__ FUNC_1 (struct svc_rqst*,struct svc_fh*,int ,struct kvec*,int,unsigned long*) ;
 scalar_t__ FUNC_2 (struct svc_rqst*,struct svc_fh*,struct file*,int ,struct kvec*,int,unsigned long*) ;

__be32
FUNC_3(struct svc_rqst *VAR_2, struct svc_fh *VAR_3, struct file *VAR_4,
  loff_t VAR_5, struct kvec *VAR_6, int VAR_7,
  unsigned long *VAR_8)
{
 __be32 VAR_9;

 if (VAR_4) {
  VAR_9 = FUNC_0(VAR_2, VAR_3->fh_export, VAR_3->fh_dentry,
    VAR_1|VAR_0);
  if (VAR_9)
   goto out;
  VAR_9 = FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
 } else
  VAR_9 = FUNC_1(VAR_2, VAR_3, VAR_5, VAR_6, VAR_7, VAR_8);
out:
 return VAR_9;
}

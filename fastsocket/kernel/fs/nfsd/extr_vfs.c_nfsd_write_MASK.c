
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
 int VAR_2 ;
 int FUNC_0 (struct file*) ;
 scalar_t__ FUNC_1 (struct svc_rqst*,struct svc_fh*,int ,int,struct file**) ;
 scalar_t__ FUNC_2 (struct svc_rqst*,int ,int ,int) ;
 scalar_t__ FUNC_3 (struct svc_rqst*,struct svc_fh*,struct file*,int ,struct kvec*,int,unsigned long*,int*) ;

__be32
FUNC_4(struct svc_rqst *VAR_3, struct svc_fh *VAR_4, struct file *VAR_5,
  loff_t VAR_6, struct kvec *VAR_7, int VAR_8, unsigned long *VAR_9,
  int *VAR_10)
{
 __be32 VAR_11 = 0;

 if (VAR_5) {
  VAR_11 = FUNC_2(VAR_3, VAR_4->fh_export, VAR_4->fh_dentry,
    VAR_1|VAR_0);
  if (VAR_11)
   goto out;
  VAR_11 = FUNC_3(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9,
    VAR_10);
 } else {
  VAR_11 = FUNC_1(VAR_3, VAR_4, VAR_2, VAR_1, &VAR_5);
  if (VAR_11)
   goto out;

  if (VAR_9)
   VAR_11 = FUNC_3(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8,
          VAR_9, VAR_10);
  FUNC_0(VAR_5);
 }
out:
 return VAR_11;
}

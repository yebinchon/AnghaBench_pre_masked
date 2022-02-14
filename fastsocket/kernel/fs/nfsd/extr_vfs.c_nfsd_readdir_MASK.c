
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rqst {int rq_vers; } ;
struct svc_fh {int dummy; } ;
struct readdir_cd {int dummy; } ;
struct file {int dummy; } ;
typedef scalar_t__ loff_t ;
typedef int filldir_t ;
typedef scalar_t__ __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct file*,int ,struct readdir_cd*,scalar_t__*) ;
 int FUNC_1 (struct file*) ;
 scalar_t__ FUNC_2 (struct svc_rqst*,struct svc_fh*,int ,int,struct file**) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (struct file*,scalar_t__,int ) ;

__be32
FUNC_5(struct svc_rqst *VAR_6, struct svc_fh *VAR_7, loff_t *VAR_8,
      struct readdir_cd *VAR_9, filldir_t VAR_10)
{
 __be32 VAR_11;
 struct file *VAR_12;
 loff_t VAR_13 = *VAR_8;
 int VAR_14 = VAR_1;


 if (VAR_6->rq_vers > 2)
  VAR_14 |= VAR_0;

 VAR_11 = FUNC_2(VAR_6, VAR_7, VAR_2, VAR_14, &VAR_12);
 if (VAR_11)
  goto out;

 VAR_13 = FUNC_4(VAR_12, VAR_13, 0);
 if (VAR_13 < 0) {
  VAR_11 = FUNC_3((int)VAR_13);
  goto out_close;
 }

 VAR_11 = FUNC_0(VAR_12, VAR_10, VAR_9, VAR_8);

 if (VAR_11 == VAR_4 || VAR_11 == VAR_5)
  VAR_11 = VAR_3;
out_close:
 FUNC_1(VAR_12);
out:
 return VAR_11;
}

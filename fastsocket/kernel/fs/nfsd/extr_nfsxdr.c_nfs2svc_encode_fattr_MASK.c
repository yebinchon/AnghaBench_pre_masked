
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct svc_rqst {int dummy; } ;
struct svc_fh {int fh_dentry; TYPE_2__* fh_export; } ;
struct kstat {int dummy; } ;
typedef int __be32 ;
struct TYPE_3__ {int mnt; } ;
struct TYPE_4__ {TYPE_1__ ex_path; } ;


 int * FUNC_0 (struct svc_rqst*,int *,struct svc_fh*,struct kstat*) ;
 int FUNC_1 (int ,int ,struct kstat*) ;

__be32 *FUNC_2(struct svc_rqst *VAR_0, __be32 *VAR_1, struct svc_fh *VAR_2)
{
 struct kstat VAR_3;
 FUNC_1(VAR_2->fh_export->ex_path.mnt, VAR_2->fh_dentry, &VAR_3);
 return FUNC_0(VAR_0, VAR_1, VAR_2, &VAR_3);
}

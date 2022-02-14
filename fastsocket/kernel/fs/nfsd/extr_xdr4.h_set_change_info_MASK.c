
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int tv_nsec; int tv_sec; } ;
struct TYPE_8__ {TYPE_3__ ctime; } ;
struct TYPE_6__ {int tv_nsec; int tv_sec; } ;
struct svc_fh {TYPE_4__ fh_post_attr; TYPE_2__ fh_pre_ctime; int fh_post_change; int fh_pre_change; TYPE_1__* fh_dentry; int fh_post_saved; int fh_pre_saved; } ;
struct nfsd4_change_info {int after_ctime_nsec; int after_ctime_sec; int before_ctime_nsec; int before_ctime_sec; int after_change; int before_change; int change_supported; int atomic; } ;
struct TYPE_5__ {int d_inode; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline void
FUNC_2(struct nfsd4_change_info *VAR_0, struct svc_fh *VAR_1)
{
 FUNC_0(!VAR_1->fh_pre_saved);
 VAR_0->atomic = VAR_1->fh_post_saved;
 VAR_0->change_supported = FUNC_1(VAR_1->fh_dentry->d_inode);

 VAR_0->before_change = VAR_1->fh_pre_change;
 VAR_0->after_change = VAR_1->fh_post_change;
 VAR_0->before_ctime_sec = VAR_1->fh_pre_ctime.tv_sec;
 VAR_0->before_ctime_nsec = VAR_1->fh_pre_ctime.tv_nsec;
 VAR_0->after_ctime_sec = VAR_1->fh_post_attr.ctime.tv_sec;
 VAR_0->after_ctime_nsec = VAR_1->fh_post_attr.ctime.tv_nsec;

}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct svc_rqst {int dummy; } ;
struct TYPE_2__ {int mnt; } ;
struct svc_export {int ex_flags; TYPE_1__ ex_path; } ;
struct path {struct dentry* dentry; int mnt; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct svc_export*) ;
 scalar_t__ FUNC_1 (struct svc_export*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct svc_export*) ;
 int FUNC_3 (struct path*,int) ;
 struct dentry* FUNC_4 (struct dentry*) ;
 int FUNC_5 (struct svc_export*) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (struct svc_rqst*) ;
 int FUNC_8 (struct path*) ;
 struct svc_export* FUNC_9 (struct svc_rqst*,struct path*) ;

int
FUNC_10(struct svc_rqst *VAR_3, struct dentry **VAR_4,
          struct svc_export **VAR_5)
{
 struct svc_export *VAR_6 = *VAR_5, *VAR_7 = ((void*)0);
 struct dentry *VAR_8 = *VAR_4;
 struct path VAR_9 = {.mnt = FUNC_6(VAR_6->ex_path.mnt),
       .dentry = FUNC_4(VAR_8)};
 int VAR_10 = 0;

 VAR_10 = FUNC_3(&VAR_9, 0);
 if (VAR_10 < 0)
  goto out;

 VAR_7 = FUNC_9(VAR_3, &VAR_9);
 if (FUNC_1(VAR_7)) {
  VAR_10 = FUNC_2(VAR_7);







  if (VAR_10 == -VAR_0 && !(VAR_6->ex_flags & VAR_2))
   VAR_10 = 0;
  FUNC_8(&VAR_9);
  goto out;
 }
 if (FUNC_7(VAR_3) ||
  (VAR_6->ex_flags & VAR_1) || FUNC_0(VAR_7)) {







  *VAR_4 = VAR_9.dentry;
  VAR_9.dentry = VAR_8;
  *VAR_5 = VAR_7;
  VAR_7 = VAR_6;
 }
 FUNC_8(&VAR_9);
 FUNC_5(VAR_7);
out:
 return VAR_10;
}

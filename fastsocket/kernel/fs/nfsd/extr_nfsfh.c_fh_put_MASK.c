
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_fh {struct svc_export* fh_export; scalar_t__ fh_post_saved; scalar_t__ fh_pre_saved; struct dentry* fh_dentry; } ;
struct svc_export {int h; } ;
struct dentry {int dummy; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct svc_fh*) ;
 int FUNC_3 (struct svc_fh*) ;
 int VAR_0 ;

void
FUNC_4(struct svc_fh *VAR_1)
{
 struct dentry * VAR_2 = VAR_1->fh_dentry;
 struct svc_export * VAR_3 = VAR_1->fh_export;
 if (VAR_2) {
  FUNC_3(VAR_1);
  VAR_1->fh_dentry = ((void*)0);
  FUNC_1(VAR_2);




 }
 FUNC_2(VAR_1);
 if (VAR_3) {
  FUNC_0(&VAR_3->h, &VAR_0);
  VAR_1->fh_export = ((void*)0);
 }
 return;
}

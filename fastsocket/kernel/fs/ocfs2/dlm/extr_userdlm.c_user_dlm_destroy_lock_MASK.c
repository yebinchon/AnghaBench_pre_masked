
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_lock_res {int l_flags; int l_lksb; int l_lock; scalar_t__ l_ex_holders; scalar_t__ l_ro_holders; int l_name; int l_namelen; } ;
struct dlm_ctxt {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct dlm_ctxt* FUNC_0 (struct user_lock_res*) ;
 int FUNC_1 (struct dlm_ctxt*,int *,int ,int ,struct user_lock_res*) ;
 int FUNC_2 (int ,char*,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,int,struct user_lock_res*) ;
 int VAR_7 ;
 int FUNC_6 (struct user_lock_res*) ;

int FUNC_7(struct user_lock_res *VAR_8)
{
 int VAR_9 = -VAR_1;
 struct dlm_ctxt *VAR_10 = FUNC_0(VAR_8);

 FUNC_2(0, "asked to destroy %.*s\n", VAR_8->l_namelen, VAR_8->l_name);

 FUNC_3(&VAR_8->l_lock);
 if (VAR_8->l_flags & VAR_6) {
  FUNC_4(&VAR_8->l_lock);
  return 0;
 }

 VAR_8->l_flags |= VAR_6;

 while (VAR_8->l_flags & VAR_5) {
  FUNC_4(&VAR_8->l_lock);

  FUNC_6(VAR_8);

  FUNC_3(&VAR_8->l_lock);
 }

 if (VAR_8->l_ro_holders || VAR_8->l_ex_holders) {
  FUNC_4(&VAR_8->l_lock);
  goto bail;
 }

 VAR_9 = 0;
 if (!(VAR_8->l_flags & VAR_4)) {
  FUNC_4(&VAR_8->l_lock);
  goto bail;
 }

 VAR_8->l_flags &= ~VAR_4;
 VAR_8->l_flags |= VAR_5;
 FUNC_4(&VAR_8->l_lock);

 VAR_9 = FUNC_1(VAR_10,
      &VAR_8->l_lksb,
      VAR_3,
      VAR_7,
      VAR_8);
 if (VAR_9 != VAR_0) {
  FUNC_5("dlmunlock", VAR_9, VAR_8);
  VAR_9 = -VAR_2;
  goto bail;
 }

 FUNC_6(VAR_8);

 VAR_9 = 0;
bail:
 return VAR_9;
}

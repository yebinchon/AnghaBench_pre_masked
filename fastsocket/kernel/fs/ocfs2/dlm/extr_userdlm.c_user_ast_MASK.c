
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_lockstatus {scalar_t__ status; } ;
struct user_lock_res {scalar_t__ l_requested; scalar_t__ l_level; int l_event; int l_lock; int l_flags; int l_blocking; int l_name; int l_namelen; struct dlm_lockstatus l_lksb; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,scalar_t__,int ,...) ;
 int FUNC_1 (int,char*,int ,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(void *VAR_7)
{
 struct user_lock_res *VAR_8 = VAR_7;
 struct dlm_lockstatus *VAR_9;

 FUNC_0(0, "AST fired for lockres %.*s\n", VAR_8->l_namelen,
      VAR_8->l_name);

 FUNC_2(&VAR_8->l_lock);

 VAR_9 = &(VAR_8->l_lksb);
 if (VAR_9->status != VAR_0) {
  FUNC_0(VAR_3, "lksb status value of %u on lockres %.*s\n",
       VAR_9->status, VAR_8->l_namelen, VAR_8->l_name);
  FUNC_3(&VAR_8->l_lock);
  return;
 }

 FUNC_1(VAR_8->l_requested == VAR_1,
   "Lockres %.*s, requested ivmode. flags 0x%x\n",
   VAR_8->l_namelen, VAR_8->l_name, VAR_8->l_flags);


 if (VAR_8->l_requested < VAR_8->l_level) {
  if (VAR_8->l_requested <=
      FUNC_4(VAR_8->l_blocking)) {
   VAR_8->l_blocking = VAR_2;
   VAR_8->l_flags &= ~VAR_5;
  }
 }

 VAR_8->l_level = VAR_8->l_requested;
 VAR_8->l_requested = VAR_1;
 VAR_8->l_flags |= VAR_4;
 VAR_8->l_flags &= ~VAR_6;

 FUNC_3(&VAR_8->l_lock);

 FUNC_5(&VAR_8->l_event);
}

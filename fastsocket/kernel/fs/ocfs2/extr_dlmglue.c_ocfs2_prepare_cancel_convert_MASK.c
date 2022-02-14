
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {int dummy; } ;
struct ocfs2_lock_res {scalar_t__ l_unlock_action; scalar_t__ l_action; int l_flags; int l_name; int l_lock; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (int,char*,int ,int) ;
 int FUNC_4 () ;

__attribute__((used)) static int FUNC_5(struct ocfs2_super *VAR_4,
            struct ocfs2_lock_res *VAR_5)
{
 FUNC_1(&VAR_5->l_lock);

 FUNC_4();
 FUNC_2(0, "lock %s\n", VAR_5->l_name);

 if (VAR_5->l_unlock_action == VAR_3) {




  FUNC_2(0, "Lockres %s, skip convert\n", VAR_5->l_name);
  return 0;
 }


 FUNC_0(VAR_5->l_action != VAR_0 &&
        VAR_5->l_action != VAR_1);


 VAR_5->l_unlock_action = VAR_3;

 FUNC_3(!(VAR_5->l_flags & VAR_2),
   "lock %s, invalid flags: 0x%lx\n",
   VAR_5->l_name, VAR_5->l_flags);

 return 1;
}

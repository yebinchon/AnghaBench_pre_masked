
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {int dc_task_lock; int blocked_lock_count; int blocked_lock_list; } ;
struct ocfs2_lock_res {int l_flags; int l_blocked_list; int l_name; int l_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct ocfs2_lock_res*,int ) ;
 int FUNC_4 (int ,char*,int ,int) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct ocfs2_super *VAR_2,
     struct ocfs2_lock_res *VAR_3)
{
 FUNC_5();

 FUNC_0(&VAR_3->l_lock);

 if (VAR_3->l_flags & VAR_0) {



  FUNC_4(0, "Lockres %s won't be scheduled: flags 0x%lx\n",
       VAR_3->l_name, VAR_3->l_flags);
  return;
 }

 FUNC_3(VAR_3, VAR_1);

 FUNC_7(&VAR_2->dc_task_lock);
 if (FUNC_2(&VAR_3->l_blocked_list)) {
  FUNC_1(&VAR_3->l_blocked_list,
         &VAR_2->blocked_lock_list);
  VAR_2->blocked_lock_count++;
 }
 FUNC_8(&VAR_2->dc_task_lock);

 FUNC_6();
}

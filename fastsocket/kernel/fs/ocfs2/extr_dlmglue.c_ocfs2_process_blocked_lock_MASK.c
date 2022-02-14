
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_unblock_ctl {scalar_t__ unblock_action; scalar_t__ requeue; int member_1; int member_0; } ;
struct ocfs2_super {int dummy; } ;
struct ocfs2_lock_res {int l_flags; TYPE_1__* l_ops; int l_lock; int l_name; } ;
struct TYPE_2__ {int (* post_unlock ) (struct ocfs2_super*,struct ocfs2_lock_res*) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct ocfs2_lock_res*,int ) ;
 int FUNC_2 (int ,char*,int ,...) ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 () ;
 int FUNC_6 (struct ocfs2_super*,struct ocfs2_lock_res*) ;
 int FUNC_7 (struct ocfs2_super*,struct ocfs2_lock_res*,struct ocfs2_unblock_ctl*) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (struct ocfs2_super*,struct ocfs2_lock_res*) ;

__attribute__((used)) static void FUNC_11(struct ocfs2_super *VAR_3,
           struct ocfs2_lock_res *VAR_4)
{
 int VAR_5;
 struct ocfs2_unblock_ctl VAR_6 = {0, 0,};
 unsigned long VAR_7;





 FUNC_3();

 FUNC_0(!VAR_4);
 FUNC_0(!VAR_4->l_ops);

 FUNC_2(0, "lockres %s blocked.\n", VAR_4->l_name);






 FUNC_8(&VAR_4->l_lock, VAR_7);
 if (VAR_4->l_flags & VAR_0)
  goto unqueue;
 FUNC_9(&VAR_4->l_lock, VAR_7);

 VAR_5 = FUNC_7(VAR_3, VAR_4, &VAR_6);
 if (VAR_5 < 0)
  FUNC_4(VAR_5);

 FUNC_8(&VAR_4->l_lock, VAR_7);
unqueue:
 if (VAR_4->l_flags & VAR_0 || !VAR_6.requeue) {
  FUNC_1(VAR_4, VAR_1);
 } else
  FUNC_6(VAR_3, VAR_4);

 FUNC_2(0, "lockres %s, requeue = %s.\n", VAR_4->l_name,
      VAR_6.requeue ? "yes" : "no");
 FUNC_9(&VAR_4->l_lock, VAR_7);

 if (VAR_6.unblock_action != VAR_2
     && VAR_4->l_ops->post_unlock)
  VAR_4->l_ops->post_unlock(VAR_3, VAR_4);

 FUNC_5();
}

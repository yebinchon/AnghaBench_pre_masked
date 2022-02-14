
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_mask_waiter {int dummy; } ;
struct ocfs2_lock_res {int l_flags; int l_lock; int l_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ocfs2_lock_res*,struct ocfs2_mask_waiter*,int,int ) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct ocfs2_mask_waiter*) ;
 int FUNC_4 (struct ocfs2_mask_waiter*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

void FUNC_7(struct ocfs2_lock_res *VAR_2)
{
 int VAR_3;
 struct ocfs2_mask_waiter VAR_4;
 unsigned long VAR_5;

 FUNC_3(&VAR_4);

 FUNC_5(&VAR_2->l_lock, VAR_5);
 VAR_2->l_flags |= VAR_0;
 while (VAR_2->l_flags & VAR_1) {
  FUNC_0(VAR_2, &VAR_4, VAR_1, 0);
  FUNC_6(&VAR_2->l_lock, VAR_5);

  FUNC_1(0, "Waiting on lockres %s\n", VAR_2->l_name);

  VAR_3 = FUNC_4(&VAR_4);
  if (VAR_3)
   FUNC_2(VAR_3);

  FUNC_5(&VAR_2->l_lock, VAR_5);
 }
 FUNC_6(&VAR_2->l_lock, VAR_5);
}

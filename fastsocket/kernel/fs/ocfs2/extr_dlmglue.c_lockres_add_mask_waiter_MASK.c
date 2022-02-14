
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_mask_waiter {unsigned long mw_mask; unsigned long mw_goal; int mw_item; } ;
struct ocfs2_lock_res {int l_mask_waiters; int l_lock; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct ocfs2_lock_res *VAR_0,
        struct ocfs2_mask_waiter *VAR_1,
        unsigned long VAR_2,
        unsigned long VAR_3)
{
 FUNC_0(!FUNC_3(&VAR_1->mw_item));

 FUNC_1(&VAR_0->l_lock);

 FUNC_2(&VAR_1->mw_item, &VAR_0->l_mask_waiters);
 VAR_1->mw_mask = VAR_2;
 VAR_1->mw_goal = VAR_3;
}

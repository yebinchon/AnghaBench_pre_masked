
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_mask_waiter {int mw_status; int mw_complete; } ;
struct ocfs2_lock_res {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct ocfs2_lock_res*,struct ocfs2_mask_waiter*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct ocfs2_mask_waiter *VAR_0,
          struct ocfs2_lock_res *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_2(&VAR_0->mw_complete);
 if (VAR_2)
  FUNC_1(VAR_1, VAR_0);
 else
  VAR_2 = VAR_0->mw_status;

 FUNC_0(VAR_0->mw_complete);
 return VAR_2;
}

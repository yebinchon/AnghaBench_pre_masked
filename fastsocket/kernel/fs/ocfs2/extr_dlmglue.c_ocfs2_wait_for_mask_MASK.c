
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_mask_waiter {int mw_status; int mw_complete; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct ocfs2_mask_waiter *VAR_0)
{
 FUNC_1(&VAR_0->mw_complete);

 FUNC_0(VAR_0->mw_complete);
 return VAR_0->mw_status;
}

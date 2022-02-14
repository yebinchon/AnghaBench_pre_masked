
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* deinit ) () ;} ;
struct fst_ctrl_handle {TYPE_1__ ctrl; int global_ctrls_lentry; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct fst_ctrl_handle*) ;
 int FUNC_2 () ;

void FUNC_3(struct fst_ctrl_handle *VAR_0)
{
 FUNC_0(&VAR_0->global_ctrls_lentry);
 if (VAR_0->ctrl.deinit)
  VAR_0->ctrl.deinit();
 FUNC_1(VAR_0);
}

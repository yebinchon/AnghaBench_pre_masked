
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int os; int wqe_timer; int in_active_wqe_timer; } ;
typedef TYPE_1__ ocs_hw_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ,TYPE_1__*) ;
 int FUNC_2 (int ,char*) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_3(void *VAR_2)
{
 ocs_hw_t *VAR_3 = (ocs_hw_t *)VAR_2;


 VAR_3->in_active_wqe_timer = VAR_0;
 FUNC_0(&VAR_3->wqe_timer);


 if (FUNC_1(VAR_3, VAR_1, VAR_3)) {
  FUNC_2(VAR_3->os, "ocs_hw_async_call failed\n");
 }
}

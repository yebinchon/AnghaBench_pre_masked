
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int os; int wq_reqtag_pool; } ;
typedef TYPE_1__ ocs_hw_t ;
typedef int hw_wq_callback_t ;


 int FUNC_0 (int ,char*,int ) ;
 int * FUNC_1 (int ,int ) ;

hw_wq_callback_t *
FUNC_2(ocs_hw_t *VAR_0, uint32_t VAR_1)
{
 hw_wq_callback_t *VAR_2;

 VAR_2 = FUNC_1(VAR_0->wq_reqtag_pool, VAR_1);
 if (VAR_2 == ((void*)0)) {
  FUNC_0(VAR_0->os, "wqcb for instance %d is null\n", VAR_1);
 }
 return VAR_2;
}

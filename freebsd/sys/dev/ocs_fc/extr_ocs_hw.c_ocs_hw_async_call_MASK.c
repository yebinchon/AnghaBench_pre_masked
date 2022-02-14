
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int os; int sli; } ;
typedef TYPE_1__ ocs_hw_t ;
typedef int ocs_hw_async_cb_t ;
struct TYPE_9__ {int cmd; void* arg; int callback; } ;
typedef TYPE_2__ ocs_hw_async_call_ctx_t ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,TYPE_2__*,int) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ,int ,int ,TYPE_2__*) ;
 int FUNC_2 (int ,char*) ;
 TYPE_2__* FUNC_3 (int ,int,int) ;
 scalar_t__ FUNC_4 (int *,int ,int,int ) ;

int32_t
FUNC_5(ocs_hw_t *VAR_5, ocs_hw_async_cb_t VAR_6, void *VAR_7)
{
 int32_t VAR_8 = 0;
 ocs_hw_async_call_ctx_t *VAR_9;






 VAR_9 = FUNC_3(VAR_5->os, sizeof(*VAR_9), VAR_3 | VAR_2);
 if (VAR_9 == ((void*)0)) {
  FUNC_2(VAR_5->os, "failed to malloc async call context\n");
  return VAR_1;
 }
 VAR_9->callback = VAR_6;
 VAR_9->arg = VAR_7;


 if (FUNC_4(&VAR_5->sli, VAR_9->cmd, sizeof(VAR_9->cmd), 0) == 0) {
  FUNC_2(VAR_5->os, "COMMON_NOP format failure\n");
  FUNC_0(VAR_5->os, VAR_9, sizeof(*VAR_9));
  VAR_8 = -1;
 }

 if (FUNC_1(VAR_5, VAR_9->cmd, VAR_0, VAR_4, VAR_9)) {
  FUNC_2(VAR_5->os, "COMMON_NOP command failure\n");
  FUNC_0(VAR_5->os, VAR_9, sizeof(*VAR_9));
  VAR_8 = -1;
 }
 return VAR_8;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int cmd_head_count; int os; int mq; int sli; int cmd_head; int cmd_pending; } ;
typedef TYPE_1__ ocs_hw_t ;
struct TYPE_7__ {int buf; } ;
typedef TYPE_2__ ocs_command_ctx_t ;
typedef int int32_t ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_2__*) ;
 TYPE_2__* FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,int) ;
 scalar_t__ FUNC_3 (int *,int ,int ) ;

__attribute__((used)) static int32_t
FUNC_4(ocs_hw_t *VAR_1)
{
 ocs_command_ctx_t *VAR_2;
 int32_t VAR_3 = 0;




 while (VAR_1->cmd_head_count < (VAR_0 - 1)) {
  VAR_2 = FUNC_1(&VAR_1->cmd_pending);
  if (VAR_2 == ((void*)0)) {
   break;
  }
  FUNC_0(&VAR_1->cmd_head, VAR_2);
  VAR_1->cmd_head_count++;
  if (FUNC_3(&VAR_1->sli, VAR_1->mq, VAR_2->buf) < 0) {
   FUNC_2(VAR_1->os, "sli_queue_write failed: %d\n", VAR_3);
   VAR_3 = -1;
   break;
  }
 }
 return VAR_3;
}

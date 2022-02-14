
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_9__ {int os; int cmd_lock; int cmd_head_count; int cmd_head; } ;
typedef TYPE_1__ ocs_hw_t ;
struct TYPE_10__ {int arg; scalar_t__ buf; int (* cb ) (TYPE_1__*,int,scalar_t__,int ) ;} ;
typedef TYPE_2__ ocs_command_ctx_t ;
typedef int int32_t ;


 int FUNC_0 (int ,TYPE_2__*,int) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_2__* FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (scalar_t__,int *,size_t) ;
 int FUNC_6 (TYPE_2__*,int ,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_1__*,int,scalar_t__,int ) ;

__attribute__((used)) static int32_t
FUNC_9(ocs_hw_t *VAR_0, int32_t VAR_1, uint8_t *VAR_2, size_t VAR_3)
{
 ocs_command_ctx_t *VAR_4 = ((void*)0);

 FUNC_3(&VAR_0->cmd_lock);
  if (((void*)0) == (VAR_4 = FUNC_2(&VAR_0->cmd_head))) {
   FUNC_4(VAR_0->os, "XXX no command context?!?\n");
   FUNC_7(&VAR_0->cmd_lock);
   return -1;
  }

  VAR_0->cmd_head_count--;


  FUNC_1(VAR_0);

 FUNC_7(&VAR_0->cmd_lock);

 if (VAR_4->cb) {
  if (VAR_4->buf) {
   FUNC_5(VAR_4->buf, VAR_2, VAR_3);
  }
  VAR_4->cb(VAR_0, VAR_1, VAR_4->buf, VAR_4->arg);
 }

 FUNC_6(VAR_4, 0, sizeof(ocs_command_ctx_t));
 FUNC_0(VAR_0->os, VAR_4, sizeof(ocs_command_ctx_t));

 return 0;
}

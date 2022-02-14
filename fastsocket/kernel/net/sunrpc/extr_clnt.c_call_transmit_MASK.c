
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rpc_task {scalar_t__ tk_status; TYPE_2__* tk_xprt; int (* tk_action ) (struct rpc_task*) ;TYPE_1__* tk_rqstp; } ;
struct TYPE_4__ {int pending; } ;
struct TYPE_3__ {scalar_t__ rq_bytes_sent; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct rpc_task*) ;
 int FUNC_2 (struct rpc_task*) ;
 int FUNC_3 (struct rpc_task*) ;
 int FUNC_4 (struct rpc_task*,int) ;
 int FUNC_5 (struct rpc_task*,scalar_t__) ;
 int FUNC_6 (struct rpc_task*) ;
 scalar_t__ FUNC_7 (struct rpc_task*) ;
 scalar_t__ FUNC_8 (struct rpc_task*) ;
 int FUNC_9 (int *,struct rpc_task*) ;
 int FUNC_10 (struct rpc_task*) ;
 scalar_t__ FUNC_11 (struct rpc_task*) ;
 int FUNC_12 (struct rpc_task*) ;

__attribute__((used)) static void
FUNC_13(struct rpc_task *VAR_2)
{
 FUNC_3(VAR_2);

 VAR_2->tk_action = FUNC_1;
 if (VAR_2->tk_status < 0)
  return;
 VAR_2->tk_status = FUNC_11(VAR_2);
 if (VAR_2->tk_status != 0)
  return;
 VAR_2->tk_action = FUNC_2;

 if (FUNC_8(VAR_2)) {
  FUNC_0(VAR_2->tk_rqstp->rq_bytes_sent != 0);
  FUNC_10(VAR_2);

  if (VAR_2->tk_status != 0) {

   if (VAR_2->tk_status == -VAR_0)
    FUNC_4(VAR_2, VAR_1 >> 4);
   else
    FUNC_5(VAR_2, VAR_2->tk_status);
   return;
  }
 }
 FUNC_12(VAR_2);
 if (VAR_2->tk_status < 0)
  return;




 FUNC_2(VAR_2);
 if (FUNC_7(VAR_2))
  return;
 VAR_2->tk_action = FUNC_6;
 FUNC_9(&VAR_2->tk_xprt->pending, VAR_2);
}

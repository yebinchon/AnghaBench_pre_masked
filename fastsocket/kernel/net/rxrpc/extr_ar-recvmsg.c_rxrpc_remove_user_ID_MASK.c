
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rxrpc_sock {int call_lock; } ;
struct rxrpc_call {int state_lock; int events; int flags; TYPE_1__* socket; int sock_node; int debug_id; } ;
struct TYPE_2__ {int calls; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct rxrpc_call*) ;
 int FUNC_6 (int ,int *) ;
 scalar_t__ FUNC_7 (int ,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

void FUNC_10(struct rxrpc_sock *VAR_3, struct rxrpc_call *VAR_4)
{
 FUNC_0("RELEASE CALL %d", VAR_4->debug_id);

 if (FUNC_7(VAR_0, &VAR_4->flags)) {
  FUNC_8(&VAR_3->call_lock);
  FUNC_2(&VAR_4->sock_node, &VAR_4->socket->calls);
  FUNC_1(VAR_0, &VAR_4->flags);
  FUNC_9(&VAR_3->call_lock);
 }

 FUNC_3(&VAR_4->state_lock);
 if (!FUNC_7(VAR_2, &VAR_4->flags) &&
     !FUNC_6(VAR_1, &VAR_4->events))
  FUNC_5(VAR_4);
 FUNC_4(&VAR_4->state_lock);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct rxrpc_call {scalar_t__ state; TYPE_1__* socket; int conn; int user_call_ID; int debug_id; } ;
struct TYPE_2__ {int sk; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int ,int ,scalar_t__,int ) ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct rxrpc_call*,int ) ;

void FUNC_6(struct rxrpc_call *VAR_1, u32 VAR_2)
{
 FUNC_1("{%d},%d", VAR_1->debug_id, VAR_2);

 FUNC_3(&VAR_1->socket->sk);

 FUNC_0("CALL %d USR %lx ST %d on CONN %p",
        VAR_1->debug_id, VAR_1->user_call_ID, VAR_1->state, VAR_1->conn);

 if (VAR_1->state < VAR_0)
  FUNC_5(VAR_1, VAR_2);

 FUNC_4(&VAR_1->socket->sk);
 FUNC_2("");
}

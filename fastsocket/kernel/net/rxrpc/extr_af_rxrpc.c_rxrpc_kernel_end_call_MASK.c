
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rxrpc_call {int socket; int usage; int debug_id; } ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct rxrpc_call*) ;
 int FUNC_3 (int ,struct rxrpc_call*) ;

void FUNC_4(struct rxrpc_call *VAR_0)
{
 FUNC_0("%d{%d}", VAR_0->debug_id, FUNC_1(&VAR_0->usage));
 FUNC_3(VAR_0->socket, VAR_0);
 FUNC_2(VAR_0);
}

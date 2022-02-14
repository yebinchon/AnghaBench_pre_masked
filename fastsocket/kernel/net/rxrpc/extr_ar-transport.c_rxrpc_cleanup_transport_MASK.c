
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rxrpc_transport {int peer; int local; int error_queue; int debug_id; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct rxrpc_transport*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct rxrpc_transport *VAR_0)
{
 FUNC_0("DESTROY TRANS %d", VAR_0->debug_id);

 FUNC_2(&VAR_0->error_queue);

 FUNC_3(VAR_0->local);
 FUNC_4(VAR_0->peer);
 FUNC_1(VAR_0);
}

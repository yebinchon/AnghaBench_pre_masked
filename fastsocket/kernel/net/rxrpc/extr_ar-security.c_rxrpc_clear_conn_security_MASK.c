
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rxrpc_connection {int server_key; int key; TYPE_1__* security; int debug_id; } ;
struct TYPE_2__ {int (* clear ) (struct rxrpc_connection*) ;} ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct rxrpc_connection*) ;

void FUNC_4(struct rxrpc_connection *VAR_0)
{
 FUNC_0("{%d}", VAR_0->debug_id);

 if (VAR_0->security) {
  VAR_0->security->clear(VAR_0);
  FUNC_2(VAR_0->security);
  VAR_0->security = ((void*)0);
 }

 FUNC_1(VAR_0->key);
 FUNC_1(VAR_0->server_key);
}

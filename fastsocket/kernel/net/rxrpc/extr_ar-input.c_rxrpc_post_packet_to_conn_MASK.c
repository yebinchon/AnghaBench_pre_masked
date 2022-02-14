
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct rxrpc_connection {int rx_queue; int usage; } ;


 int FUNC_0 (char*,struct rxrpc_connection*,struct sk_buff*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct rxrpc_connection*) ;
 int FUNC_3 (int *,struct sk_buff*) ;

__attribute__((used)) static void FUNC_4(struct rxrpc_connection *VAR_0,
          struct sk_buff *VAR_1)
{
 FUNC_0("%p,%p", VAR_0, VAR_1);

 FUNC_1(&VAR_0->usage);
 FUNC_3(&VAR_0->rx_queue, VAR_1);
 FUNC_2(VAR_0);
}

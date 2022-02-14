
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int sk; } ;
struct rxrpc_sock {int interceptor; } ;
typedef int rxrpc_interceptor_t ;


 int FUNC_0 (char*) ;
 struct rxrpc_sock* FUNC_1 (int ) ;

void FUNC_2(struct socket *VAR_0,
     rxrpc_interceptor_t VAR_1)
{
 struct rxrpc_sock *VAR_2 = FUNC_1(VAR_0->sk);

 FUNC_0("");
 VAR_2->interceptor = VAR_1;
}

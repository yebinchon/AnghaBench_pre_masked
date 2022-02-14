
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int sk; } ;
struct rxrpc_call {int dummy; } ;


 int FUNC_0 (char*,unsigned long) ;
 int FUNC_1 (char*,struct rxrpc_call*) ;
 struct rxrpc_call* FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (int ) ;

struct rxrpc_call *FUNC_4(struct socket *VAR_0,
         unsigned long VAR_1)
{
 struct rxrpc_call *VAR_2;

 FUNC_0(",%lx", VAR_1);
 VAR_2 = FUNC_2(FUNC_3(VAR_0->sk), VAR_1);
 FUNC_1(" = %p", VAR_2);
 return VAR_2;
}

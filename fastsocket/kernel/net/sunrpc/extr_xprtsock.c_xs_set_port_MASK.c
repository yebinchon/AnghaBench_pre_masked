
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_xprt {int dummy; } ;


 int FUNC_0 (char*,struct rpc_xprt*,unsigned short) ;
 int FUNC_1 (int ,unsigned short) ;
 int FUNC_2 (struct rpc_xprt*) ;
 int FUNC_3 (struct rpc_xprt*) ;

__attribute__((used)) static void FUNC_4(struct rpc_xprt *VAR_0, unsigned short VAR_1)
{
 FUNC_0("RPC:       setting port for xprt %p to %u\n", VAR_0, VAR_1);

 FUNC_1(FUNC_2(VAR_0), VAR_1);
 FUNC_3(VAR_0);
}

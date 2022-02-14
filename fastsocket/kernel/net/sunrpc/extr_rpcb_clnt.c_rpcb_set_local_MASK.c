
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_clnt {int dummy; } ;


 int FUNC_0 (char*,struct rpc_clnt*,struct rpc_clnt*) ;
 struct rpc_clnt* VAR_0 ;
 struct rpc_clnt* VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(struct rpc_clnt *VAR_3, struct rpc_clnt *VAR_4)
{

 VAR_0 = VAR_3;
 VAR_1 = VAR_4;
 FUNC_1();
 VAR_2 = 1;
 FUNC_0("RPC:       created new rpcb local clients (rpcb_local_clnt: "
   "%p, rpcb_local_clnt4: %p)\n", VAR_0,
   VAR_1);
}

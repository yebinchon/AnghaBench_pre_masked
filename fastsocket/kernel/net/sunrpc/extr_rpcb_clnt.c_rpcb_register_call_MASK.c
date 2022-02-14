
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_message {int* rpc_resp; } ;
struct rpc_clnt {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct rpc_clnt*,struct rpc_message*,int ) ;

__attribute__((used)) static int FUNC_2(struct rpc_clnt *VAR_2, struct rpc_message *VAR_3)
{
 int VAR_4, VAR_5 = 0;

 VAR_3->rpc_resp = &VAR_4;

 VAR_5 = FUNC_1(VAR_2, VAR_3, VAR_1);
 if (VAR_5 < 0) {
  FUNC_0("RPC:       failed to contact local rpcbind "
    "server (errno %d).\n", -VAR_5);
  return VAR_5;
 }

 if (!VAR_4)
  return -VAR_0;
 return 0;
}

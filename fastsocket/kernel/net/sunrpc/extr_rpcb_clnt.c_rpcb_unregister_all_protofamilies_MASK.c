
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpcbind_args {char* r_addr; int r_netid; int r_vers; int r_prog; } ;
struct rpc_message {int * rpc_proc; struct rpcbind_args* rpc_argp; } ;


 size_t VAR_0 ;
 int FUNC_0 (char*,int ,int ,int ) ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_1 (int ,struct rpc_message*) ;

__attribute__((used)) static int FUNC_2(struct rpc_message *VAR_3)
{
 struct rpcbind_args *VAR_4 = VAR_3->rpc_argp;

 FUNC_0("RPC:       unregistering [%u, %u, '%s'] with "
  "local rpcbind\n",
   VAR_4->r_prog, VAR_4->r_vers, VAR_4->r_netid);

 VAR_4->r_addr = "";
 VAR_3->rpc_proc = &VAR_2[VAR_0];

 return FUNC_1(VAR_1, VAR_3);
}

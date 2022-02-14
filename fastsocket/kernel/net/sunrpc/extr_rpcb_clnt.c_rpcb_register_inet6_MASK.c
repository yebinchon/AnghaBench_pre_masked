
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in6 {int sin6_port; } ;
struct sockaddr {int dummy; } ;
struct rpcbind_args {int r_addr; int r_netid; int r_vers; int r_prog; } ;
struct rpc_message {int * rpc_proc; struct rpcbind_args* rpc_argp; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (char*,char*,int ,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 unsigned short FUNC_2 (int ) ;
 int FUNC_3 (struct sockaddr const*) ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_4 (int ,struct rpc_message*) ;

__attribute__((used)) static int FUNC_5(const struct sockaddr *VAR_4,
          struct rpc_message *VAR_5)
{
 const struct sockaddr_in6 *VAR_6 = (const struct sockaddr_in6 *)VAR_4;
 struct rpcbind_args *VAR_7 = VAR_5->rpc_argp;
 unsigned short VAR_8 = FUNC_2(VAR_6->sin6_port);
 int VAR_9;

 VAR_7->r_addr = FUNC_3(VAR_4);

 FUNC_0("RPC:       %sregistering [%u, %u, %s, '%s'] with "
  "local rpcbind\n", (VAR_8 ? "" : "un"),
   VAR_7->r_prog, VAR_7->r_vers,
   VAR_7->r_addr, VAR_7->r_netid);

 VAR_5->rpc_proc = &VAR_3[VAR_1];
 if (VAR_8)
  VAR_5->rpc_proc = &VAR_3[VAR_0];

 VAR_9 = FUNC_4(VAR_2, VAR_5);
 FUNC_1(VAR_7->r_addr);
 return VAR_9;
}

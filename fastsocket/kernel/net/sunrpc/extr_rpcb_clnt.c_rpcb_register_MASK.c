
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rpcbind_args {int r_prot; unsigned short r_port; int r_vers; int r_prog; } ;
struct rpc_message {int * rpc_proc; struct rpcbind_args* rpc_argp; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (char*,char*,int ,int ,int,unsigned short) ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_1 (int ,struct rpc_message*) ;

int FUNC_2(u32 VAR_4, u32 VAR_5, int VAR_6, unsigned short VAR_7)
{
 struct rpcbind_args VAR_8 = {
  .r_prog = VAR_4,
  .r_vers = VAR_5,
  .r_prot = VAR_6,
  .r_port = VAR_7,
 };
 struct rpc_message VAR_9 = {
  .rpc_argp = &VAR_8,
 };

 FUNC_0("RPC:       %sregistering (%u, %u, %d, %u) with local "
   "rpcbind\n", (VAR_7 ? "" : "un"),
   VAR_4, VAR_5, VAR_6, VAR_7);

 VAR_9.rpc_proc = &VAR_3[VAR_1];
 if (VAR_7)
  VAR_9.rpc_proc = &VAR_3[VAR_0];

 return FUNC_1(VAR_2, &VAR_9);
}

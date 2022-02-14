
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sockaddr {int sa_family; } ;
struct rpcbind_args {char const* r_netid; int r_owner; int const r_vers; int const r_prog; } ;
struct rpc_message {struct rpcbind_args* rpc_argp; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_0 (struct sockaddr const*,struct rpc_message*) ;
 int FUNC_1 (struct sockaddr const*,struct rpc_message*) ;
 int FUNC_2 (struct rpc_message*) ;

int FUNC_3(const u32 VAR_4, const u32 VAR_5,
       const struct sockaddr *VAR_6, const char *VAR_7)
{
 struct rpcbind_args VAR_8 = {
  .r_prog = VAR_4,
  .r_vers = VAR_5,
  .r_netid = VAR_7,
  .r_owner = VAR_2,
 };
 struct rpc_message VAR_9 = {
  .rpc_argp = &VAR_8,
 };

 if (VAR_3 == ((void*)0))
  return -VAR_1;

 if (VAR_6 == ((void*)0))
  return FUNC_2(&VAR_9);

 switch (VAR_6->sa_family) {
 case 129:
  return FUNC_0(VAR_6, &VAR_9);
 case 128:
  return FUNC_1(VAR_6, &VAR_9);
 }

 return -VAR_0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_clnt {int dummy; } ;
struct rpc_auth {int au_count; } ;
typedef int rpc_authflavor_t ;


 int FUNC_0 (int *) ;
 struct rpc_auth VAR_0 ;

__attribute__((used)) static struct rpc_auth *
FUNC_1(struct rpc_clnt *VAR_1, rpc_authflavor_t VAR_2)
{
 FUNC_0(&VAR_0.au_count);
 return &VAR_0;
}

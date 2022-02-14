
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_cred_cache {struct rpc_cred_cache* hashtable; } ;
struct rpc_auth {struct rpc_cred_cache* au_credcache; } ;


 int FUNC_0 (struct rpc_cred_cache*) ;
 int FUNC_1 (struct rpc_cred_cache*) ;

void
FUNC_2(struct rpc_auth *VAR_0)
{
 struct rpc_cred_cache *VAR_1 = VAR_0->au_credcache;

 if (VAR_1) {
  VAR_0->au_credcache = ((void*)0);
  FUNC_1(VAR_1);
  FUNC_0(VAR_1->hashtable);
  FUNC_0(VAR_1);
 }
}

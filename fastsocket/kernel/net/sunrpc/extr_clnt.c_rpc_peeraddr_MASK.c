
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
struct rpc_xprt {size_t addrlen; int addr; } ;
struct rpc_clnt {struct rpc_xprt* cl_xprt; } ;


 int FUNC_0 (struct sockaddr*,int *,size_t) ;

size_t FUNC_1(struct rpc_clnt *VAR_0, struct sockaddr *VAR_1, size_t VAR_2)
{
 size_t VAR_3;
 struct rpc_xprt *VAR_4 = VAR_0->cl_xprt;

 VAR_3 = sizeof(VAR_4->addr);
 if (VAR_3 > VAR_2)
  VAR_3 = VAR_2;
 FUNC_0(VAR_1, &VAR_0->cl_xprt->addr, VAR_3);
 return VAR_4->addrlen;
}

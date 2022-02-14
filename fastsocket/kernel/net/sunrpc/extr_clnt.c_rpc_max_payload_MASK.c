
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpc_clnt {TYPE_1__* cl_xprt; } ;
struct TYPE_2__ {size_t max_payload; } ;



size_t FUNC_0(struct rpc_clnt *VAR_0)
{
 return VAR_0->cl_xprt->max_payload;
}

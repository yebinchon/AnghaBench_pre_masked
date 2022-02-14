
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_iostats {int dummy; } ;
struct rpc_clnt {int cl_maxproc; } ;


 int VAR_0 ;
 struct rpc_iostats* FUNC_0 (int ,int,int ) ;

struct rpc_iostats *FUNC_1(struct rpc_clnt *VAR_1)
{
 return FUNC_0(VAR_1->cl_maxproc, sizeof(struct rpc_iostats), VAR_0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_call_ops {int (* rpc_release ) (void*) ;} ;


 int FUNC_0 (void*) ;

void FUNC_1(const struct rpc_call_ops *VAR_0, void *VAR_1)
{
 if (VAR_0->rpc_release != ((void*)0))
  VAR_0->rpc_release(VAR_1);
}

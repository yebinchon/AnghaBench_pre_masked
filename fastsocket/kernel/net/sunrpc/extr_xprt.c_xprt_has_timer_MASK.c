
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_xprt {scalar_t__ idle_timeout; } ;



__attribute__((used)) static inline int FUNC_0(struct rpc_xprt *VAR_0)
{
 return VAR_0->idle_timeout != 0;
}

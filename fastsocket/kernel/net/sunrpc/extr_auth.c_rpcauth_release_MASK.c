
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpc_auth {TYPE_1__* au_ops; int au_count; } ;
struct TYPE_2__ {int (* destroy ) (struct rpc_auth*) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct rpc_auth*) ;

void
FUNC_2(struct rpc_auth *VAR_0)
{
 if (!FUNC_0(&VAR_0->au_count))
  return;
 VAR_0->au_ops->destroy(VAR_0);
}

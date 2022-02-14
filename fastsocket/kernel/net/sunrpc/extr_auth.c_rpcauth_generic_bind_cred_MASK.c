
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rpc_task {int tk_pid; } ;
struct rpc_cred {TYPE_2__* cr_auth; } ;
struct TYPE_4__ {TYPE_1__* au_ops; } ;
struct TYPE_3__ {int au_name; } ;


 int FUNC_0 (char*,int ,int ,struct rpc_cred*) ;
 struct rpc_cred* FUNC_1 (struct rpc_cred*) ;

struct rpc_cred *
FUNC_2(struct rpc_task *VAR_0, struct rpc_cred *VAR_1, int VAR_2)
{
 FUNC_0("RPC: %5u holding %s cred %p\n", VAR_0->tk_pid,
   VAR_1->cr_auth->au_ops->au_name, VAR_1);
 return FUNC_1(VAR_1);
}

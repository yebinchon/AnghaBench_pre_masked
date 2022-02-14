
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rpc_task {int tk_pid; TYPE_1__* tk_client; } ;
struct rpc_cred {int dummy; } ;
struct rpc_auth {TYPE_2__* au_ops; } ;
struct TYPE_4__ {int au_name; } ;
struct TYPE_3__ {struct rpc_auth* cl_auth; } ;


 int FUNC_0 (char*,int ,int ) ;
 struct rpc_cred* FUNC_1 (struct rpc_auth*,int) ;

__attribute__((used)) static struct rpc_cred *
FUNC_2(struct rpc_task *VAR_0, int VAR_1)
{
 struct rpc_auth *VAR_2 = VAR_0->tk_client->cl_auth;

 FUNC_0("RPC: %5u looking up %s cred\n",
  VAR_0->tk_pid, VAR_2->au_ops->au_name);
 return FUNC_1(VAR_2, VAR_1);
}

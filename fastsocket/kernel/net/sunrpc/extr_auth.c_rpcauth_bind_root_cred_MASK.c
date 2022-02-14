
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rpc_task {TYPE_1__* tk_client; int tk_pid; } ;
struct rpc_cred {int dummy; } ;
struct rpc_auth {TYPE_2__* au_ops; } ;
struct auth_cred {int gid; int uid; } ;
struct TYPE_4__ {struct rpc_cred* (* lookup_cred ) (struct rpc_auth*,struct auth_cred*,int) ;int au_name; } ;
struct TYPE_3__ {struct rpc_auth* cl_auth; } ;


 int FUNC_0 (char*,int ,int ) ;
 struct rpc_cred* FUNC_1 (struct rpc_auth*,struct auth_cred*,int) ;

__attribute__((used)) static struct rpc_cred *
FUNC_2(struct rpc_task *VAR_0, int VAR_1)
{
 struct rpc_auth *VAR_2 = VAR_0->tk_client->cl_auth;
 struct auth_cred VAR_3 = {
  .uid = 0,
  .gid = 0,
 };

 FUNC_0("RPC: %5u looking up %s cred\n",
  VAR_0->tk_pid, VAR_0->tk_client->cl_auth->au_ops->au_name);
 return VAR_2->au_ops->lookup_cred(VAR_2, &VAR_3, VAR_1);
}

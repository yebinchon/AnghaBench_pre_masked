
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpc_cred {int dummy; } ;
struct rpc_auth {TYPE_1__* au_ops; } ;
struct cred {int group_info; int fsgid; int fsuid; } ;
struct auth_cred {int group_info; int gid; int uid; } ;
typedef int acred ;
struct TYPE_2__ {struct rpc_cred* (* lookup_cred ) (struct rpc_auth*,struct auth_cred*,int) ;int au_name; } ;


 struct cred* FUNC_0 () ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct auth_cred*,int ,int) ;
 int FUNC_4 (int ) ;
 struct rpc_cred* FUNC_5 (struct rpc_auth*,struct auth_cred*,int) ;

struct rpc_cred *
FUNC_6(struct rpc_auth *VAR_0, int VAR_1)
{
 struct auth_cred VAR_2;
 struct rpc_cred *VAR_3;
 const struct cred *VAR_4 = FUNC_0();

 FUNC_1("RPC:       looking up %s cred\n",
  VAR_0->au_ops->au_name);

 FUNC_3(&VAR_2, 0, sizeof(VAR_2));
 VAR_2.uid = VAR_4->fsuid;
 VAR_2.gid = VAR_4->fsgid;
 VAR_2.group_info = FUNC_2(((struct cred *)VAR_4)->group_info);

 VAR_3 = VAR_0->au_ops->lookup_cred(VAR_0, &VAR_2, VAR_1);
 FUNC_4(VAR_2.group_info);
 return VAR_3;
}

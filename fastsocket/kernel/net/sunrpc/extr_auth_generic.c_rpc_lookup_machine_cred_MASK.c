
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rpc_cred {int dummy; } ;
struct auth_cred {int machine_cred; int gid; int uid; } ;
struct TYPE_5__ {TYPE_1__* au_ops; } ;
struct TYPE_4__ {struct rpc_cred* (* lookup_cred ) (TYPE_2__*,struct auth_cred*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 TYPE_2__ VAR_2 ;
 struct rpc_cred* FUNC_1 (TYPE_2__*,struct auth_cred*,int ) ;

struct rpc_cred *FUNC_2(void)
{
 struct auth_cred VAR_3 = {
  .uid = VAR_1,
  .gid = VAR_0,
  .machine_cred = 1,
 };

 FUNC_0("RPC:       looking up machine cred\n");
 return VAR_2.au_ops->lookup_cred(&VAR_2, &VAR_3, 0);
}

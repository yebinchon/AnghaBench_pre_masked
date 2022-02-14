
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpc_cred {unsigned long cr_flags; } ;
struct rpc_auth {int dummy; } ;
struct TYPE_2__ {scalar_t__ machine_cred; int * group_info; int gid; int uid; } ;
struct generic_cred {struct rpc_cred gc_base; TYPE_1__ acred; } ;
struct auth_cred {int gid; int uid; scalar_t__ machine_cred; int * group_info; } ;


 int VAR_0 ;
 struct rpc_cred* FUNC_0 (int ) ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_1 (char*,char*,struct generic_cred*,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 struct generic_cred* FUNC_3 (int,int ) ;
 int FUNC_4 (struct rpc_cred*,struct auth_cred*,int *,int *) ;

__attribute__((used)) static struct rpc_cred *
FUNC_5(struct rpc_auth *VAR_5, struct auth_cred *VAR_6, int VAR_7)
{
 struct generic_cred *VAR_8;

 VAR_8 = FUNC_3(sizeof(*VAR_8), VAR_1);
 if (VAR_8 == ((void*)0))
  return FUNC_0(-VAR_0);

 FUNC_4(&VAR_8->gc_base, VAR_6, &VAR_3, &VAR_4);
 VAR_8->gc_base.cr_flags = 1UL << VAR_2;

 VAR_8->acred.uid = VAR_6->uid;
 VAR_8->acred.gid = VAR_6->gid;
 VAR_8->acred.group_info = VAR_6->group_info;
 if (VAR_8->acred.group_info != ((void*)0))
  FUNC_2(VAR_8->acred.group_info);
 VAR_8->acred.machine_cred = VAR_6->machine_cred;

 FUNC_1("RPC:       allocated %s cred %p for uid %d gid %d\n",
   VAR_8->acred.machine_cred ? "machine" : "generic",
   VAR_8, VAR_6->uid, VAR_6->gid);
 return &VAR_8->gc_base;
}

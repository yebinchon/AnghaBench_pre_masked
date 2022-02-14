
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpc_cred {unsigned long cr_flags; } ;
struct unx_cred {struct rpc_cred uc_base; int * uc_gids; int uc_gid; } ;
struct rpc_auth {int dummy; } ;
struct auth_cred {TYPE_1__* group_info; int gid; int uid; } ;
struct TYPE_2__ {unsigned int ngroups; } ;


 int VAR_0 ;
 struct rpc_cred* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,unsigned int) ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 int FUNC_2 (char*,int ,int ) ;
 struct unx_cred* FUNC_3 (int,int ) ;
 int FUNC_4 (struct rpc_cred*,struct auth_cred*,struct rpc_auth*,int *) ;
 int VAR_5 ;

__attribute__((used)) static struct rpc_cred *
FUNC_5(struct rpc_auth *VAR_6, struct auth_cred *VAR_7, int VAR_8)
{
 struct unx_cred *VAR_9;
 unsigned int VAR_10 = 0;
 unsigned int VAR_11;

 FUNC_2("RPC:       allocating UNIX cred for uid %d gid %d\n",
   VAR_7->uid, VAR_7->gid);

 if (!(VAR_9 = FUNC_3(sizeof(*VAR_9), VAR_1)))
  return FUNC_0(-VAR_0);

 FUNC_4(&VAR_9->uc_base, VAR_7, VAR_6, &VAR_5);
 VAR_9->uc_base.cr_flags = 1UL << VAR_4;

 if (VAR_7->group_info != ((void*)0))
  VAR_10 = VAR_7->group_info->ngroups;
 if (VAR_10 > VAR_2)
  VAR_10 = VAR_2;

 VAR_9->uc_gid = VAR_7->gid;
 for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++)
  VAR_9->uc_gids[VAR_11] = FUNC_1(VAR_7->group_info, VAR_11);
 if (VAR_11 < VAR_2)
  VAR_9->uc_gids[VAR_11] = VAR_3;

 return &VAR_9->uc_base;
}

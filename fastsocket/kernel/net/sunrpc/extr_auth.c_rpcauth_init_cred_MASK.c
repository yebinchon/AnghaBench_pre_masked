
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_credops {int dummy; } ;
struct rpc_cred {int cr_uid; int cr_magic; int cr_expire; struct rpc_credops const* cr_ops; struct rpc_auth* cr_auth; int cr_count; int cr_lru; int cr_hash; } ;
struct rpc_auth {int dummy; } ;
struct auth_cred {int uid; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int *,int) ;
 int VAR_1 ;

void
FUNC_3(struct rpc_cred *VAR_2, const struct auth_cred *VAR_3,
    struct rpc_auth *VAR_4, const struct rpc_credops *VAR_5)
{
 FUNC_0(&VAR_2->cr_hash);
 FUNC_1(&VAR_2->cr_lru);
 FUNC_2(&VAR_2->cr_count, 1);
 VAR_2->cr_auth = VAR_4;
 VAR_2->cr_ops = VAR_5;
 VAR_2->cr_expire = VAR_1;



 VAR_2->cr_uid = VAR_3->uid;
}

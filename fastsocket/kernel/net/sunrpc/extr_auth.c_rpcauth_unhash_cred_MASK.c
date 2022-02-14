
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rpc_cred {int cr_count; TYPE_2__* cr_auth; } ;
typedef int spinlock_t ;
struct TYPE_4__ {TYPE_1__* au_credcache; } ;
struct TYPE_3__ {int lock; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct rpc_cred*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4(struct rpc_cred *VAR_0)
{
 spinlock_t *VAR_1;
 int VAR_2;

 VAR_1 = &VAR_0->cr_auth->au_credcache->lock;
 FUNC_2(VAR_1);
 VAR_2 = FUNC_0(&VAR_0->cr_count) == 0;
 if (VAR_2)
  FUNC_1(VAR_0);
 FUNC_3(VAR_1);
 return VAR_2;
}

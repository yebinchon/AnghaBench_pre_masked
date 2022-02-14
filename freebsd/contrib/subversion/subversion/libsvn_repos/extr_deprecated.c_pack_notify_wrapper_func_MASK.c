
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ action; int shard; } ;
typedef TYPE_1__ svn_repos_notify_t ;
struct pack_notify_wrapper_baton {int notify_baton; int (* notify_func ) (int ,int ,scalar_t__,int *) ;} ;
typedef int apr_pool_t ;


 int FUNC_0 (int ,int ,scalar_t__,int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(void *VAR_0,
                         const svn_repos_notify_t *VAR_1,
                         apr_pool_t *VAR_2)
{
  struct pack_notify_wrapper_baton *VAR_3 = VAR_0;

  FUNC_1(VAR_3->notify_func(VAR_3->notify_baton, VAR_1->shard,
                                    VAR_1->action - 3, VAR_2));
}

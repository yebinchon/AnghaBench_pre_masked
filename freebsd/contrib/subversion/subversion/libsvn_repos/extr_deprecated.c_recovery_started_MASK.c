
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ action; } ;
typedef TYPE_1__ svn_repos_notify_t ;
struct recover_baton {int start_callback_baton; int (* start_callback ) (int ) ;} ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void
FUNC_2(void *VAR_1,
                 const svn_repos_notify_t *VAR_2,
                 apr_pool_t *VAR_3)
{
  struct recover_baton *VAR_4 = VAR_1;

  if (VAR_2->action == VAR_0
      && VAR_4->start_callback != ((void*)0))
    FUNC_1(VAR_4->start_callback(VAR_4->start_callback_baton));
}

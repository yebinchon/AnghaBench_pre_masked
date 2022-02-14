
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ action; } ;
typedef TYPE_1__ svn_wc_notify_t ;
struct svn_cl__check_externals_failed_notify_baton {int wrapped_baton; int (* wrapped_func ) (int ,TYPE_1__ const*,int *) ;int had_externals_error; } ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_1__ const*,int *) ;
 scalar_t__ VAR_1 ;

void
FUNC_1(void *VAR_2,
                                              const svn_wc_notify_t *VAR_3,
                                              apr_pool_t *VAR_4)
{
  struct svn_cl__check_externals_failed_notify_baton *VAR_5 = VAR_2;

  if (VAR_3->action == VAR_1)
    VAR_5->had_externals_error = VAR_0;

  if (VAR_5->wrapped_func)
    VAR_5->wrapped_func(VAR_5->wrapped_baton, VAR_3, VAR_4);
}

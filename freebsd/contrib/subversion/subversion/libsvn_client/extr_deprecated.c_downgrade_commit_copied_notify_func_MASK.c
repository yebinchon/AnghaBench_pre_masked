
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ action; } ;
typedef TYPE_1__ svn_wc_notify_t ;
struct downgrade_commit_copied_notify_baton {int orig_notify_baton2; int (* orig_notify_func2 ) (int ,TYPE_1__ const*,int *) ;} ;
typedef int apr_pool_t ;


 int FUNC_0 (int ,TYPE_1__ const*,int *) ;
 TYPE_1__* FUNC_1 (TYPE_1__ const*,int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void
FUNC_2(void *VAR_4,
                                    const svn_wc_notify_t *VAR_5,
                                    apr_pool_t *VAR_6)
{
  struct downgrade_commit_copied_notify_baton *VAR_7 = VAR_4;

  if (VAR_5->action == VAR_1)
    {
      svn_wc_notify_t *VAR_8 = FUNC_1(VAR_5, VAR_6);
      VAR_8->action = VAR_0;
      VAR_5 = VAR_8;
    }
  else if (VAR_5->action == VAR_2)
    {
      svn_wc_notify_t *VAR_9 = FUNC_1(VAR_5, VAR_6);
      VAR_9->action = VAR_3;
      VAR_5 = VAR_9;
    }




  if (VAR_7->orig_notify_func2)
    VAR_7->orig_notify_func2(VAR_7->orig_notify_baton2, VAR_5, VAR_6);
}

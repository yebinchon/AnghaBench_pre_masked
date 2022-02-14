
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ action; scalar_t__ prop_state; scalar_t__ content_state; int path; } ;
typedef TYPE_1__ svn_wc_notify_t ;
struct conflict_status_walker_baton {scalar_t__ resolve_later; int notify_baton; int (* notify_func ) (int ,TYPE_1__ const*,int *) ;} ;
typedef int apr_pool_t ;


 int FUNC_0 (scalar_t__) ;
 char* FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,TYPE_1__ const*,int *) ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (scalar_t__,char const*,char const*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void
FUNC_5(void *VAR_2,
                        const svn_wc_notify_t *VAR_3,
                        apr_pool_t *VAR_4)
{
  struct conflict_status_walker_baton *VAR_5 = VAR_2;

  if (VAR_5->notify_func)
    VAR_5->notify_func(VAR_5->notify_baton, VAR_3, VAR_4);

  if (VAR_5->resolve_later
      && (VAR_3->action == VAR_1
          || VAR_3->prop_state == VAR_0
          || VAR_3->content_state == VAR_0))
    {
      if (!FUNC_3(VAR_5->resolve_later, VAR_3->path))
        {
          const char *VAR_6;

          VAR_6 = FUNC_1(FUNC_0(VAR_5->resolve_later),
                                 VAR_3->path);

          FUNC_4(VAR_5->resolve_later, VAR_6, VAR_6);
        }
    }
}

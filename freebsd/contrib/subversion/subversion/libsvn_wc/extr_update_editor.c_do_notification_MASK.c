
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int kind; } ;
typedef TYPE_1__ svn_wc_notify_t ;
typedef int svn_wc_notify_action_t ;
typedef int svn_node_kind_t ;
struct edit_baton {int notify_baton; int (* notify_func ) (int ,TYPE_1__*,int *) ;} ;
typedef int apr_pool_t ;


 int FUNC_0 (int ,TYPE_1__*,int *) ;
 TYPE_1__* FUNC_1 (char const*,int ,int *) ;

__attribute__((used)) static void
FUNC_2(const struct edit_baton *VAR_0,
                const char *VAR_1,
                svn_node_kind_t VAR_2,
                svn_wc_notify_action_t VAR_3,
                apr_pool_t *VAR_4)
{
  svn_wc_notify_t *VAR_5;

  if (VAR_0->notify_func == ((void*)0))
    return;

  VAR_5 = FUNC_1(VAR_1, VAR_3, VAR_4);
  VAR_5->kind = VAR_2;

  (*VAR_0->notify_func)(VAR_0->notify_baton, VAR_5, VAR_4);
}

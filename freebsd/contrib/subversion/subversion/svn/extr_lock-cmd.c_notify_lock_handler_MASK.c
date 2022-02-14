
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ action; } ;
typedef TYPE_1__ svn_wc_notify_t ;
struct notify_lock_baton_t {int inner_baton; int (* inner_notify ) (int ,TYPE_1__ const*,int *) ;int had_failure; } ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_1__ const*,int *) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void
FUNC_1(void *VAR_2,
                    const svn_wc_notify_t *VAR_3,
                    apr_pool_t *VAR_4)
{
  struct notify_lock_baton_t *VAR_5 = VAR_2;

  if (VAR_3->action == VAR_1)
    VAR_5->had_failure = VAR_0;

  if (VAR_5->inner_notify)
    VAR_5->inner_notify(VAR_5->inner_baton, VAR_3, VAR_4);
}

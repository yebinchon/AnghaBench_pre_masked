
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int path; } ;
typedef TYPE_1__ svn_wc_notify_t ;
struct notification_adjust_baton {int inner_baton; int (* inner_func ) (int ,TYPE_1__*,int *) ;int final_abspath; int checkout_abspath; } ;
typedef int apr_pool_t ;


 int FUNC_0 (int ,TYPE_1__*,int *) ;
 int FUNC_1 (int ,char const*,int *) ;
 char* FUNC_2 (int ,int ) ;
 TYPE_1__* FUNC_3 (TYPE_1__ const*,int *) ;

__attribute__((used)) static void
FUNC_4(void *VAR_0,
                         const svn_wc_notify_t *VAR_1,
                         apr_pool_t *VAR_2)
{
  struct notification_adjust_baton *VAR_3 = VAR_0;
  svn_wc_notify_t *VAR_4 = FUNC_3(VAR_1, VAR_2);
  const char *VAR_5;

  VAR_5 = FUNC_2(VAR_3->checkout_abspath, VAR_1->path);
  VAR_4->path = FUNC_1(VAR_3->final_abspath, VAR_5, VAR_2);

  if (VAR_3->inner_func)
    VAR_3->inner_func(VAR_3->inner_baton, VAR_4, VAR_2);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int sdb; } ;
typedef TYPE_1__ svn_wc__db_wcroot_t ;
typedef int svn_error_t ;
struct with_triggers_baton_t {int drop_trigger; int cb_baton; int * (* cb_func ) (int ,TYPE_1__*,char const*,int *) ;int create_trigger; } ;
typedef int apr_pool_t ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,TYPE_1__*,char const*,int *) ;
 int FUNC_2 (int *,int *) ;
 int * FUNC_3 (int ) ;
 int * FUNC_4 (int ,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_5(void *VAR_0,
              svn_wc__db_wcroot_t *VAR_1,
              const char *VAR_2,
              apr_pool_t *VAR_3)
{
  struct with_triggers_baton_t *VAR_4 = VAR_0;
  svn_error_t *VAR_5;
  svn_error_t *VAR_6;

  FUNC_0(FUNC_4(VAR_1->sdb, VAR_4->create_trigger));

  VAR_5 = VAR_4->cb_func(VAR_4->cb_baton, VAR_1, VAR_2, VAR_3);

  VAR_6 = FUNC_4(VAR_1->sdb, VAR_4->drop_trigger);

  return FUNC_3(FUNC_2(VAR_5, VAR_6));
}

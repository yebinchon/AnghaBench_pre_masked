
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int prop_value_incoming_new; int prop_value_incoming_old; int prop_value_working; int prop_value_base; } ;
typedef TYPE_1__ svn_wc_conflict_description2_t ;
typedef int svn_string_t ;
typedef int svn_error_t ;
struct TYPE_7__ {int prop_conflicts; int pool; } ;
typedef TYPE_2__ svn_client_conflict_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int * FUNC_3 (int ,int *,int ,char const*) ;
 TYPE_1__* FUNC_4 (int ,char const*) ;
 int * FUNC_5 (int ,int *) ;

svn_error_t *
FUNC_6(const svn_string_t **VAR_2,
                                      const svn_string_t **VAR_3,
                                      const svn_string_t **VAR_4,
                                      const svn_string_t **VAR_5,
                                      svn_client_conflict_t *VAR_6,
                                      const char *VAR_7,
                                      apr_pool_t *VAR_8)
{
  const svn_wc_conflict_description2_t *VAR_9;

  FUNC_0(FUNC_2(VAR_6, VAR_6->pool));

  VAR_9 = FUNC_4(VAR_6->prop_conflicts, VAR_7);
  if (VAR_9 == ((void*)0))
    return FUNC_3(VAR_0, ((void*)0),
                             FUNC_1("Property '%s' is not in conflict."), VAR_7);

  if (VAR_2)
    *VAR_2 =
      FUNC_5(VAR_9->prop_value_base, VAR_8);

  if (VAR_3)
    *VAR_3 =
      FUNC_5(VAR_9->prop_value_working, VAR_8);

  if (VAR_4)
    *VAR_4 =
      FUNC_5(VAR_9->prop_value_incoming_old, VAR_8);

  if (VAR_5)
    *VAR_5 =
      FUNC_5(VAR_9->prop_value_incoming_new, VAR_8);

  return VAR_1;
}

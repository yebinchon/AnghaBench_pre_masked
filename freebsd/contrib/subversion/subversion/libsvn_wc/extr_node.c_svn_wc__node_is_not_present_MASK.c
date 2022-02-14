
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int db; } ;
typedef TYPE_1__ svn_wc_context_t ;
typedef scalar_t__ svn_wc__db_status_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (scalar_t__*,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int ,char const*,int *,int *) ;
 int FUNC_2 (scalar_t__*,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int ,char const*,int *,int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

svn_error_t *
FUNC_3(svn_boolean_t *VAR_4,
                            svn_boolean_t *VAR_5,
                            svn_boolean_t *VAR_6,
                            svn_wc_context_t *VAR_7,
                            const char *VAR_8,
                            svn_boolean_t VAR_9,
                            apr_pool_t *VAR_10)
{
  svn_wc__db_status_t VAR_11;

  if (VAR_9)
    {
      FUNC_0(FUNC_1(&VAR_11,
                                       ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                       ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                       ((void*)0), ((void*)0), ((void*)0),
                                       VAR_7->db, VAR_8,
                                       VAR_10, VAR_10));
    }
  else
    {
      FUNC_0(FUNC_2(&VAR_11,
                                   ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                   ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                   ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                   ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                   VAR_7->db, VAR_8,
                                   VAR_10, VAR_10));
    }

  if (VAR_4)
    *VAR_4 = (VAR_11 == VAR_2);

  if (VAR_5)
    *VAR_5 = (VAR_11 == VAR_1);

  if (VAR_6)
    *VAR_6 = (VAR_11 == VAR_3);

  return VAR_0;
}

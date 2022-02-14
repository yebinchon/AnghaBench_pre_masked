
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int db; } ;
typedef TYPE_1__ svn_wc_context_t ;
typedef scalar_t__ svn_wc__db_status_t ;
typedef int svn_revnum_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_time_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int * VAR_0 ;
 int FUNC_2 (int *,int *,int *,int *,int *,int *,int *,int *,char const**,int *,int *,int *,int *,int *,int *,int *,int ,char const*,int *,int *) ;
 int FUNC_3 (scalar_t__*,int *,int *,int *,int *,int *,int *,int *,char const**,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,scalar_t__*,scalar_t__*,scalar_t__*,int ,char const*,int *,int *) ;
 int FUNC_4 (int *,int *,int *,int *,char const**,int *,int *,int *,int *,int *,int ,char const*,int *,int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

svn_error_t *
FUNC_5(svn_revnum_t *VAR_3,
                                   svn_revnum_t *VAR_4,
                                   apr_time_t *VAR_5,
                                   const char **VAR_6,
                                   svn_wc_context_t *VAR_7,
                                   const char *VAR_8,
                                   apr_pool_t *VAR_9,
                                   apr_pool_t *VAR_10)
{
  svn_wc__db_status_t VAR_11;
  svn_boolean_t VAR_12, VAR_13, VAR_14;

  FUNC_0(FUNC_3(&VAR_11, ((void*)0), VAR_3, ((void*)0), ((void*)0), ((void*)0),
                               VAR_4, VAR_5, VAR_6,
                               ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                               ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                               &VAR_12, &VAR_13, &VAR_14,
                               VAR_7->db, VAR_8,
                               VAR_9, VAR_10));

  if (!VAR_14
      || ((!VAR_4 || FUNC_1(*VAR_4))
          && (!VAR_3 || FUNC_1(*VAR_3)))
      || ((VAR_11 != VAR_1)
          && (VAR_11 != VAR_2)))
    {
      return VAR_0;
    }

  if (VAR_12 && !VAR_13)
    FUNC_0(FUNC_2(((void*)0), ((void*)0), VAR_3, ((void*)0), ((void*)0), ((void*)0),
                                     VAR_4, VAR_5, VAR_6,
                                     ((void*)0), ((void*)0), ((void*)0),
                                     ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                     VAR_7->db, VAR_8,
                                     VAR_9, VAR_10));
  else if (VAR_11 == VAR_2)

    FUNC_0(FUNC_4(((void*)0), ((void*)0), VAR_4,
                                          VAR_5, VAR_6, ((void*)0),
                                          ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                          VAR_7->db, VAR_8,
                                          VAR_9, VAR_10));

  return VAR_0;
}

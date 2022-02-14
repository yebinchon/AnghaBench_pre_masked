
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc__db_t ;
typedef scalar_t__ svn_wc__db_status_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char const*,int *) ;
 int * FUNC_3 (int ,int *,int ,int ) ;
 int FUNC_4 (scalar_t__*,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int **,int *,int *,char const*,int *,int *) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

svn_error_t *
FUNC_5(apr_hash_t **VAR_4,
                          svn_wc__db_t *VAR_5,
                          const char *VAR_6,
                          apr_pool_t *VAR_7,
                          apr_pool_t *VAR_8)
{
  svn_wc__db_status_t VAR_9;

  FUNC_0(FUNC_4(&VAR_9, ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                   ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                   ((void*)0), ((void*)0), ((void*)0), ((void*)0), VAR_4, ((void*)0),
                                   VAR_5, VAR_6,
                                   VAR_7, VAR_8));
  if (VAR_9 != VAR_3
      && VAR_9 != VAR_2)
    {
      return FUNC_3(VAR_0, ((void*)0),
                               FUNC_1("The node '%s' has a BASE status that"
                                  " has no properties."),
                               FUNC_2(VAR_6,
                                                      VAR_8));
    }

  return VAR_1;
}

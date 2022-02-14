
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef int svn_config_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (char const*,int ,int) ;
 int * FUNC_2 (int *,char const*,int ,int *) ;
 int * FUNC_3 (int *,char const*,int ,int *) ;
 int FUNC_4 (int **,int ,int ,int *) ;

svn_error_t *
FUNC_5(svn_config_t **VAR_3, const char *VAR_4,
                 svn_boolean_t VAR_5,
                 svn_boolean_t VAR_6,
                 svn_boolean_t VAR_7,
                 apr_pool_t *VAR_8)
{
  svn_config_t *VAR_9;
  svn_error_t *VAR_10;

  FUNC_0(FUNC_4(&VAR_9,
                             VAR_6,
                             VAR_7,
                             VAR_8));
    VAR_10 = FUNC_2(VAR_9, VAR_4, VAR_5, VAR_8);

  if (VAR_10 != VAR_0)
    return VAR_10;
  else
    *VAR_3 = VAR_9;

  return VAR_0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc__db_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (scalar_t__*,scalar_t__*,int *,int *,char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_2(svn_boolean_t *VAR_2,
                  svn_wc__db_t *VAR_3,
                  const char *VAR_4,
                  apr_pool_t *VAR_5)
{
  svn_boolean_t VAR_6;


  FUNC_0(FUNC_1(VAR_2, &VAR_6, ((void*)0),
                                 VAR_3, VAR_4, VAR_5));

  if (*VAR_2)
    return VAR_0;

  if (VAR_6)
    *VAR_2 = VAR_1;

  return VAR_0;
}

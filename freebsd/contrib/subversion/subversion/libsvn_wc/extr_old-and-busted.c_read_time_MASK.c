
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef scalar_t__ apr_time_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (char const**,char**,char const*) ;
 int FUNC_2 (scalar_t__*,char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_3(apr_time_t *VAR_1,
          char **VAR_2, const char *VAR_3,
          apr_pool_t *VAR_4)
{
  const char *VAR_5;

  FUNC_0(FUNC_1(&VAR_5, VAR_2, VAR_3));
  if (VAR_5)
    FUNC_0(FUNC_2(VAR_1, VAR_5, VAR_4));
  else
    *VAR_1 = 0;

  return VAR_0;
}

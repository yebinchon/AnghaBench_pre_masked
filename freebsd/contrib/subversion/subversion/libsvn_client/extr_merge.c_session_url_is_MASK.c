
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_ra_session_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char const*,char const*) ;
 int * FUNC_2 (int *,char const**,int *) ;

__attribute__((used)) static svn_boolean_t
FUNC_3(svn_ra_session_t *VAR_0,
               const char *VAR_1,
               apr_pool_t *VAR_2)
{
  const char *VAR_3;
  svn_error_t *VAR_4
    = FUNC_2(VAR_0, &VAR_3, VAR_2);

  FUNC_0(! VAR_4);
  return FUNC_1(VAR_1, VAR_3) == 0;
}

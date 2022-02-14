
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (char const*,char const*,int) ;
 char* FUNC_1 (int *,char*,char const*) ;

__attribute__((used)) static svn_boolean_t
FUNC_2(const char *VAR_2, const char *VAR_3,
              svn_boolean_t VAR_4, apr_pool_t *VAR_5)
{
  const char *VAR_6 = FUNC_1(VAR_5, "*%s*", VAR_2);
  int VAR_7 = (VAR_4 ? VAR_0 : 0);

  return (FUNC_0(VAR_6, VAR_3, VAR_7) == VAR_1);
}

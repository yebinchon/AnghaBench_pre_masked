
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_boolean_t ;
typedef int apr_size_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*) ;
 int FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const*,char const*,int) ;

svn_boolean_t
FUNC_3(const char *VAR_1, const char *VAR_2)
{
  apr_size_t VAR_3 = FUNC_1(VAR_1);


  if (FUNC_0(VAR_1))
    return *VAR_2 != '/';







  if (FUNC_2(VAR_1, VAR_2, VAR_3) == 0)
    return VAR_1[VAR_3 - 1] == '/'
      || (VAR_2[VAR_3] == '/' || VAR_2[VAR_3] == '\0');

  return VAR_0;
}

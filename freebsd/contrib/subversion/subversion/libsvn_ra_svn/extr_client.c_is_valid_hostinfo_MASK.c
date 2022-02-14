
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char const) ;
 int FUNC_1 (char const) ;

__attribute__((used)) static svn_boolean_t
FUNC_2(const char *VAR_2)
{
  const char *VAR_3 = VAR_2;

  if (VAR_3[0] == '-')
    return VAR_0;

  while (*VAR_3)
    {
      if (!FUNC_1(*VAR_3) && !FUNC_0(":.-_[]@", *VAR_3))
        return VAR_0;

      ++VAR_3;
    }

  return VAR_1;
}

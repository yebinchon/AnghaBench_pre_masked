
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_boolean_t ;


 int VAR_0 ;
 char const VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (char const*,char*) ;

__attribute__((used)) static svn_boolean_t
FUNC_1(const char *VAR_3)
{
  const char *VAR_4 = VAR_3;

  while (*VAR_4)
    {

      while (*VAR_3 && *VAR_3 != '/' && *VAR_3 != VAR_1)
        ++VAR_3;
      if (VAR_3 - VAR_4 == 2 && VAR_4[0] == '.' && VAR_4[1] == '.')
        return VAR_0;



      while (*VAR_3 && (*VAR_3 == '/' || *VAR_3 == VAR_1))
        ++VAR_3;
      VAR_4 = VAR_3;
    }

  return VAR_2;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_boolean_t ;


 int VAR_0 ;
 char const VAR_1 ;
 char const VAR_2 ;
 char const VAR_3 ;
 char const VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (char const) ;
 scalar_t__ FUNC_1 (char const) ;

svn_boolean_t
FUNC_2(const char *VAR_6)
{
  const char *VAR_7 = VAR_6;







  if (!(FUNC_1(*VAR_7)
        || *VAR_7 == VAR_1
        || *VAR_7 == VAR_4))
    return VAR_0;
  VAR_7++;
  for (; *VAR_7; VAR_7++)
    {
      if (!(FUNC_0(*VAR_7)
            || *VAR_7 == VAR_3
            || *VAR_7 == VAR_2
            || *VAR_7 == VAR_1
            || *VAR_7 == VAR_4))
        return VAR_0;
    }
  return VAR_5;
}

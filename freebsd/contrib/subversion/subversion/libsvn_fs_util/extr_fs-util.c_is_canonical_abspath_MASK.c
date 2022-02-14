
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_boolean_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static svn_boolean_t
FUNC_0(const char *VAR_2, size_t VAR_3)
{
  const char *VAR_4;


  if (VAR_2[0] != '/')
    return VAR_0;


  if (VAR_3 == 1)
    return VAR_1;
  if (VAR_2[VAR_3 - 1] == '/')
    return VAR_0;


  VAR_4 = VAR_2 + VAR_3 - 1;
  for (; VAR_2 != VAR_4; ++VAR_2)
    if ((VAR_2[0] == '/') && (VAR_2[1] == '/'))
      return VAR_0;

  return VAR_1;
}

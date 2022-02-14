
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char const* FUNC_0 (char const*,int) ;
 char* FUNC_1 (char const*) ;
 char* FUNC_2 (char const*,char) ;

const char *
FUNC_3 (const char *VAR_0)
{
  const char *VAR_1;
  const char *VAR_2 = FUNC_1 (VAR_0);


  if (*VAR_2 == '@')
    VAR_2++;


  VAR_1 = FUNC_2 (VAR_2, '@');
  if (VAR_1)
    return FUNC_0 (VAR_2, VAR_1 - VAR_2);

  return VAR_2;
}

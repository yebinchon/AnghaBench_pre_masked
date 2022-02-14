
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int apr_size_t ;


 char* FUNC_0 (char*,int) ;

const char *
FUNC_1(char *VAR_0, apr_size_t VAR_1, char **VAR_2)
{
  char *VAR_3;

  VAR_3 = FUNC_0(VAR_0, VAR_1);
  if (VAR_3)
    {
      if (VAR_2)
        *VAR_2 = VAR_3;

      if (*VAR_3 == '\n')
        return "\n";


      ++VAR_3;
      if (VAR_3 == VAR_0 + VAR_1 || *VAR_3 != '\n')
        return "\r";
      return "\r\n";
    }

  return ((void*)0);
}

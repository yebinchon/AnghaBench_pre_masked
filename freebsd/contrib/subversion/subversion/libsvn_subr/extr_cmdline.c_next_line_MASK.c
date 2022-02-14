
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int apr_pool_t ;
struct TYPE_2__ {char const* data; } ;


 TYPE_1__* FUNC_0 (char const*,int,int *) ;

__attribute__((used)) static const char *
FUNC_1(const char **VAR_0, apr_pool_t *VAR_1)
{
  const char *VAR_2 = *VAR_0;
  const char *VAR_3 = *VAR_0;



  while (*VAR_3 != '\r' && *VAR_3 != '\n' && *VAR_3 != '\0')
    VAR_3++;

  if (*VAR_3 == '\r' || *VAR_3 == '\n')
    {
      char VAR_4 = *VAR_3++;

      if ((VAR_4 == '\r' && *VAR_3 == '\n') || (VAR_4 == '\n' && *VAR_3 == '\r'))
        VAR_3++;
    }


  *VAR_0 = VAR_3;

  if (VAR_3 == VAR_2)
    return ((void*)0);

  return FUNC_0(VAR_2, VAR_3 - VAR_2, VAR_1)->data;
}

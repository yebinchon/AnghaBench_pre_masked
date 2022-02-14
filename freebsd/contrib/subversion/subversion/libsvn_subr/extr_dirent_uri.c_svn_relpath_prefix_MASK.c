
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int apr_pool_t ;


 char const* FUNC_0 (int *,char const*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char const*) ;

const char *
FUNC_3(const char *VAR_0,
                   int VAR_1,
                   apr_pool_t *VAR_2)
{
  const char *VAR_3;
  FUNC_1(FUNC_2(VAR_0));

  if (VAR_1 <= 0)
    return "";

  for (VAR_3 = VAR_0; *VAR_3; VAR_3++)
    {
      if (*VAR_3 == '/')
        {
          if (!--VAR_1)
            break;
        }
    }

  return FUNC_0(VAR_2, VAR_0, VAR_3-VAR_0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int apr_pool_t ;


 char* FUNC_0 (int *,char const*) ;
 char* FUNC_1 (int *,char const*,int) ;
 char* FUNC_2 (char const*,char) ;

void
FUNC_3(const char **VAR_0,
                  const char **VAR_1,
                  const char *VAR_2,
                  apr_pool_t *VAR_3)
{
  const char *VAR_4, *VAR_5;


  if (! (VAR_0 || VAR_1))
    return;




  VAR_4 = FUNC_2(VAR_2, '.');
  if (VAR_4 && (*(VAR_4 + 1) != '\0'))
    {





      VAR_5 = FUNC_2(VAR_2, '/');
      if ((VAR_5 && (VAR_4 > (VAR_5 + 1)))
          || ((! VAR_5) && (VAR_4 > VAR_2)))
        {
          if (VAR_0)
            *VAR_0 = FUNC_1(VAR_3, VAR_2,
                                        (VAR_4 - VAR_2 + 1) * sizeof(*VAR_2));
          if (VAR_1)
            *VAR_1 = FUNC_0(VAR_3, VAR_4 + 1);
          return;
        }
    }


  if (VAR_0)
    *VAR_0 = FUNC_0(VAR_3, VAR_2);
  if (VAR_1)
    *VAR_1 = "";
}

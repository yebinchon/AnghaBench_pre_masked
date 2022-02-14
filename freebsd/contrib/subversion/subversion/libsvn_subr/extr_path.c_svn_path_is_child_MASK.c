
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t apr_size_t ;
typedef int apr_pool_t ;


 scalar_t__ FUNC_0 (char const*) ;
 char const* FUNC_1 (int *,char const*) ;

const char *
FUNC_2(const char *VAR_0,
                  const char *VAR_1,
                  apr_pool_t *VAR_2)
{
  apr_size_t VAR_3;





  if (FUNC_0(VAR_0))
    {
      if (FUNC_0(VAR_1)
          || VAR_1[0] == '/')
        return ((void*)0);
      else

        return VAR_2 ? FUNC_1(VAR_2, VAR_1) : VAR_1;
    }





  for (VAR_3 = 0; VAR_0[VAR_3] && VAR_1[VAR_3]; VAR_3++)
    if (VAR_0[VAR_3] != VAR_1[VAR_3])
      return ((void*)0);
  if (VAR_0[VAR_3] == '\0' && VAR_1[VAR_3])
    {
      if (VAR_1[VAR_3] == '/')
        return VAR_2 ? FUNC_1(VAR_2, VAR_1 + VAR_3 + 1) : VAR_1 + VAR_3 + 1;
      else if (VAR_3 == 1 && VAR_0[0] == '/')
        return VAR_2 ? FUNC_1(VAR_2, VAR_1 + 1) : VAR_1 + 1;
    }


  return ((void*)0);
}

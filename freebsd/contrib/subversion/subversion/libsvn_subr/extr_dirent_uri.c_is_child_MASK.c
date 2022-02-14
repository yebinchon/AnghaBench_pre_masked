
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ path_type_t ;
typedef size_t apr_size_t ;
typedef int apr_pool_t ;


 scalar_t__ FUNC_0 (char const*) ;
 char const* FUNC_1 (int *,char const*) ;
 scalar_t__ FUNC_2 (char const*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static const char *
FUNC_3(path_type_t VAR_2, const char *VAR_3, const char *VAR_4,
         apr_pool_t *VAR_5)
{
  apr_size_t VAR_6;


  if (FUNC_0(VAR_3))
    {
      if (FUNC_0(VAR_4))
        return ((void*)0);


      if ((VAR_2 == VAR_1) ||
          (VAR_2 == VAR_0 && FUNC_2(VAR_4)))
        return ((void*)0);
      else

        return VAR_5 ? FUNC_1(VAR_5, VAR_4) : VAR_4;
    }







  for (VAR_6 = 0; VAR_3[VAR_6] && VAR_4[VAR_6]; VAR_6++)
    if (VAR_3[VAR_6] != VAR_4[VAR_6])
      return ((void*)0);
  if (VAR_3[VAR_6] == '\0' && VAR_4[VAR_6])
    {
      if (VAR_3[VAR_6 - 1] == '/'



           )
        {
          if (VAR_4[VAR_6] == '/')



            return ((void*)0);
          else



            return VAR_5 ? FUNC_1(VAR_5, VAR_4 + VAR_6) : VAR_4 + VAR_6;
        }
      else if (VAR_4[VAR_6] == '/')
        {
          if (VAR_4[VAR_6 + 1])



            return VAR_5 ? FUNC_1(VAR_5, VAR_4 + VAR_6 + 1) : VAR_4 + VAR_6 + 1;
          else



            return ((void*)0);
        }
    }


  return ((void*)0);
}

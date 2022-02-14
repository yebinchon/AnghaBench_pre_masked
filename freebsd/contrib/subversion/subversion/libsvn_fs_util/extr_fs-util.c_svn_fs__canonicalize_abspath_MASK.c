
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 char* FUNC_0 (int *,size_t) ;
 char const* FUNC_1 (int *,char const*,size_t) ;
 scalar_t__ FUNC_2 (char const*,size_t) ;
 size_t FUNC_3 (char const*) ;

const char *
FUNC_4(const char *VAR_2, apr_pool_t *VAR_3)
{
  char *VAR_4;
  size_t VAR_5;
  size_t VAR_6 = 0, VAR_7 = 0;
  svn_boolean_t VAR_8 = VAR_0;


  if (! VAR_2)
    return ((void*)0);


  if (! *VAR_2)
    return "/";


  VAR_5 = FUNC_3(VAR_2);
  if (FUNC_2(VAR_2, VAR_5))
    return FUNC_1(VAR_3, VAR_2, VAR_5);



  VAR_4 = FUNC_0(VAR_3, VAR_5 + 2);


  if (*VAR_2 != '/')
    {
      VAR_4[VAR_7++] = '/';
    }

  for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
    {
      if (VAR_2[VAR_6] == '/')
        {



          if (VAR_8)
            continue;
          VAR_8 = VAR_1;
        }
      else
        {


          if (VAR_8)
            VAR_8 = VAR_0;
        }


      VAR_4[VAR_7++] = VAR_2[VAR_6];
    }



  if ((VAR_4[VAR_7 - 1] == '/') && (VAR_7 > 1))
    VAR_4[VAR_7 - 1] = '\0';
  else
    VAR_4[VAR_7] = '\0';

  return VAR_4;
}

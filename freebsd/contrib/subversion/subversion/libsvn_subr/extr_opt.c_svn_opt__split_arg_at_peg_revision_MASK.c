
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef int apr_pool_t ;


 int * VAR_0 ;
 char* FUNC_0 (int *,char const*) ;
 char* FUNC_1 (int *,char const*,int) ;
 int FUNC_2 (char const*) ;

svn_error_t *
FUNC_3(const char **VAR_1,
                                   const char **VAR_2,
                                   const char *VAR_3,
                                   apr_pool_t *VAR_4)
{
  const char *VAR_5 = ((void*)0);
  const char *VAR_6;

  for (VAR_6 = (VAR_3 + FUNC_2(VAR_3) - 1); VAR_6 >= VAR_3;
        --VAR_6)
    {


      if (*VAR_6 == '/')
        break;

      if (*VAR_6 == '@')
        {
          VAR_5 = VAR_6;
          break;
        }
    }

  if (VAR_5)
    {
      *VAR_1 = FUNC_1(VAR_4, VAR_3, VAR_6 - VAR_3);
      if (VAR_2)
        *VAR_2 = FUNC_0(VAR_4, VAR_5);
    }
  else
    {
      *VAR_1 = VAR_3;
      if (VAR_2)
        *VAR_2 = "";
    }

  return VAR_0;
}

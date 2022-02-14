
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int apr_pool_t ;


 scalar_t__ FUNC_0 (char const*) ;
 char VAR_0 ;
 char* FUNC_1 (int *,char const*) ;

const char *
FUNC_2(const char *VAR_1, apr_pool_t *VAR_2)
{


  if (FUNC_0(VAR_1))
    return ".";


    {
      char *VAR_3 = FUNC_1(VAR_2, VAR_1);
      VAR_1 = VAR_3;


      for (; *VAR_3 != '\0'; ++VAR_3)
        if (*VAR_3 == '/')
          *VAR_3 = VAR_0;
    }


  return VAR_1;
}

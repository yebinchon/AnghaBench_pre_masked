
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int apr_pool_t ;


 char VAR_0 ;
 char* FUNC_0 (int *,char const*) ;

__attribute__((used)) static const char *
FUNC_1(const char *VAR_1, apr_pool_t *VAR_2)
{

    {
      char *VAR_3 = FUNC_0(VAR_2, VAR_1);
      VAR_1 = VAR_3;


      for (; *VAR_3 != '\0'; ++VAR_3)
        if (*VAR_3 == VAR_0)
          *VAR_3 = '/';
    }


  return VAR_1;
}

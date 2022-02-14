
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,char const*,int) ;
 int * FUNC_2 (int ,int *,int ) ;
 char* FUNC_3 (int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_4(const char **VAR_2,
               const char *VAR_3,
               const char **VAR_4,
               apr_pool_t *VAR_5)
{
  const char *VAR_6 = *VAR_2;
  const char *VAR_7 = ((void*)0);




  while (VAR_6 < VAR_3 && *VAR_6 != '\n')
    {
      if (*VAR_6 == ':')
        VAR_7 = VAR_6;
      VAR_6++;
    }

  if (!VAR_7)
    return FUNC_2(VAR_0, ((void*)0),
                            FUNC_0("Pathname not terminated by ':'"));



  *VAR_4 = FUNC_3(FUNC_1(VAR_5, *VAR_2,
                                                    VAR_7 - *VAR_2),
                                       VAR_5);

  *VAR_2 = VAR_7;

  return VAR_1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int * VAR_1 ;
 char VAR_2 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int *,char const*) ;
 scalar_t__ FUNC_2 (char const*,char) ;
 int * FUNC_3 (int ,int ,int ,char const*) ;
 scalar_t__ FUNC_4 (char const*) ;
 char* FUNC_5 (char const*,int *) ;
 char* FUNC_6 (char const*,int *) ;
 char* FUNC_7 (char const*,int *) ;

svn_error_t *
FUNC_8(const char **VAR_3, const char *VAR_4,
                              apr_pool_t *VAR_5)
{
  const char *VAR_6;


  VAR_6 = FUNC_6(VAR_4, VAR_5);

  VAR_6 = FUNC_5(VAR_6, VAR_5);



  if (FUNC_2(VAR_6, VAR_2))
    {
      char *VAR_7 = FUNC_1(VAR_5, VAR_6);
      VAR_6 = VAR_7;


      for (; *VAR_7 != '\0'; ++VAR_7)
        if (*VAR_7 == VAR_2)
          *VAR_7 = '/';
    }



  if (FUNC_4(VAR_6))
    return FUNC_3(VAR_0, 0,
                             FUNC_0("URL '%s' contains a '..' element"),
                             VAR_6);


  VAR_6 = FUNC_7(VAR_6, VAR_5);

  *VAR_3 = VAR_6;
  return VAR_1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_off_t ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char const) ;
 int FUNC_2 (char const*,int *) ;
 int * FUNC_3 (int ,int *,int ,char const*,int ,char const,char const*) ;

svn_error_t *
FUNC_4(const char *VAR_2,
                                    apr_off_t VAR_3,
                                    const char *VAR_4,
                                    const char *VAR_5,
                                    apr_pool_t *VAR_6)
{
  const char *VAR_7;

  for (VAR_7 = VAR_2 + VAR_3; *VAR_7; VAR_7++)
    if (!FUNC_1(*VAR_7))
      return FUNC_3(VAR_0, ((void*)0),
        FUNC_0("%s file '%s' contains unexpected non-digit '%c' within '%s'"),
        VAR_5, FUNC_2(VAR_4, VAR_6), *VAR_7, VAR_2);

  return VAR_1;
}

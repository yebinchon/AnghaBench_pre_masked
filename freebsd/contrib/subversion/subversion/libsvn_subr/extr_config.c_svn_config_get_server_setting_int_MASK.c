
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef int svn_config_t ;
typedef int apr_pool_t ;
typedef int apr_int64_t ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char const*,char**,int ) ;
 char* FUNC_2 (int *,char const*,char const*,int *) ;
 int * FUNC_3 (int ,int *,int ,char const*) ;

svn_error_t*
FUNC_4(svn_config_t *VAR_2,
                                  const char *VAR_3,
                                  const char *VAR_4,
                                  apr_int64_t VAR_5,
                                  apr_int64_t *VAR_6,
                                  apr_pool_t *VAR_7)
{
  const char* VAR_8;
  char *VAR_9;

  VAR_8 = FUNC_2(VAR_2, VAR_3,
                                            VAR_4, ((void*)0));
  if (VAR_8 == ((void*)0))
    *VAR_6 = VAR_5;
  else
    {

      *VAR_6 = FUNC_1(VAR_8, &VAR_9, 0);

      if (*VAR_9 != 0)
        {
          return FUNC_3
            (VAR_0, ((void*)0),
             FUNC_0("Config error: invalid integer value '%s'"),
             VAR_8);
        }
    }

  return VAR_1;
}

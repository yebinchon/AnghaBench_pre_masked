
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc_adm_access_t ;
typedef int svn_error_t ;
typedef int apr_uint32_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 scalar_t__ FUNC_1 (char const*,char const*) ;
 int FUNC_2 (char const**,char const*,int *) ;
 int FUNC_3 (char const*) ;
 char* FUNC_4 (char const*,char const*,int *) ;
 int FUNC_5 (char const**,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char const**,char const*,int ,char const*,int ,int *,int *,int *,int *) ;

svn_error_t *
FUNC_8(const char **VAR_1,
                        const char *VAR_2,
                        const char *VAR_3,
                        svn_wc_adm_access_t *VAR_4,
                        apr_uint32_t VAR_5,
                        apr_pool_t *VAR_6)
{
  const char *VAR_7;
  const char *VAR_8;
  const char *VAR_9;
  const char *VAR_10;

  FUNC_0(FUNC_2(&VAR_7, VAR_3, VAR_6));
  FUNC_0(FUNC_2(&VAR_10, VAR_2, VAR_6));

  FUNC_0(FUNC_7(VAR_1, VAR_10,
                                           FUNC_6(VAR_4),
                                           VAR_7,
                                           VAR_5, ((void*)0), ((void*)0), VAR_6, VAR_6));

  if (FUNC_1(*VAR_1, VAR_10) == 0)
    *VAR_1 = VAR_2;
  else if (! FUNC_3(VAR_3))
    {
      FUNC_0(FUNC_5(&VAR_9, VAR_6));
      if (! FUNC_4(VAR_9, *VAR_1, VAR_6))
        {
          FUNC_0(FUNC_2(&VAR_8, "", VAR_6));

          if (FUNC_4(VAR_8, *VAR_1, VAR_6))
            *VAR_1 = FUNC_4(VAR_8, *VAR_1, VAR_6);
        }
    }

  return VAR_0;
}

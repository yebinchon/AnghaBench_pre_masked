
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_repos_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;

 int * FUNC_1 (int *) ;
 int FUNC_2 (int *,char const* const,char const* const) ;
 int FUNC_3 (int *,scalar_t__*,char const* const,int *) ;

svn_error_t *
FUNC_4(apr_hash_t **VAR_1,
                       svn_repos_t *VAR_2,
                       apr_pool_t *VAR_3,
                       apr_pool_t *VAR_4)
{
  static const char *const VAR_5[] = {
    128,
    ((void*)0)
  };
  const char *const *VAR_6;

  *VAR_1 = FUNC_1(VAR_3);

  for (VAR_6 = VAR_5; *VAR_6; VAR_6++)
    {
      svn_boolean_t VAR_7;
      FUNC_0(FUNC_3(VAR_2, &VAR_7, *VAR_6, VAR_4));
      if (VAR_7)
        FUNC_2(*VAR_1, *VAR_6, *VAR_6);
    }

  return VAR_0;
}

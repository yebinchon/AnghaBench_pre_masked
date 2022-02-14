
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc__db_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,char const*) ;
 int * FUNC_2 (int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,char const**,int *,int *,int *,int *,int *,int *,int *,int *,char const*,int *,int *) ;

svn_boolean_t
FUNC_3(svn_wc__db_t *VAR_2,
                                  const char *VAR_3,
                                  const apr_hash_t *VAR_4,
                                  apr_pool_t *VAR_5)
{
  svn_error_t *VAR_6;
  const char *VAR_7;

  if (VAR_4 == ((void*)0))
    return VAR_1;

  VAR_6 = FUNC_2(((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                             ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                             ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), &VAR_7,
                             ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                             VAR_2, VAR_3, VAR_5, VAR_5);
  if (VAR_6)
    {
      FUNC_0(VAR_6);
      return VAR_0;
    }

  return (VAR_7
            && FUNC_1((apr_hash_t *)VAR_4, VAR_7) != ((void*)0));
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc__db_t ;
typedef int svn_string_t ;
typedef int svn_error_t ;
typedef enum svn_prop_kind { ____Placeholder_svn_prop_kind } svn_prop_kind ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int * VAR_0 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char const*) ;
 int * FUNC_4 (int *,char const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (int **,int *,char const*,int *,int *) ;
 int FUNC_7 (int **,int *,char const*,int *,int *) ;

svn_error_t *
FUNC_8(const svn_string_t **VAR_3,
                         svn_wc__db_t *VAR_4,
                         const char *VAR_5,
                         const char *VAR_6,
                         apr_pool_t *VAR_7,
                         apr_pool_t *VAR_8)
{
  apr_hash_t *VAR_9 = ((void*)0);
  enum svn_prop_kind VAR_10 = FUNC_5(VAR_6);

  FUNC_0(FUNC_3(VAR_5));
  FUNC_0(VAR_10 != VAR_1);

  if (VAR_10 == VAR_2)
    {
      FUNC_1(FUNC_6(&VAR_9, VAR_4, VAR_5,
                                              VAR_7, VAR_8),
                FUNC_2("Failed to load properties"));
    }
  else
    {

      FUNC_1(FUNC_7(&VAR_9, VAR_4, VAR_5,
                                         VAR_7, VAR_8),
                FUNC_2("Failed to load properties"));
    }

  if (VAR_9)
    *VAR_3 = FUNC_4(VAR_9, VAR_6);
  else
    *VAR_3 = ((void*)0);

  return VAR_0;
}

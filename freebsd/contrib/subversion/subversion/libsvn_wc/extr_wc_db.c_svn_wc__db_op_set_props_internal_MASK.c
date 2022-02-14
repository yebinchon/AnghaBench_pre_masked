
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc__db_wcroot_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (int *,char const*,int ,int ,int *) ;
 int FUNC_2 (int *,char const*,int *,int *) ;

svn_error_t *
FUNC_3(svn_wc__db_wcroot_t *VAR_2,
                                 const char *VAR_3,
                                 apr_hash_t *VAR_4,
                                 svn_boolean_t VAR_5,
                                 apr_pool_t *VAR_6)
{
  FUNC_0(FUNC_2(VAR_2, VAR_3, VAR_4, VAR_6));

  if (VAR_5)
    {
      FUNC_0(FUNC_1(VAR_2, VAR_3,
                                 VAR_0, 0,
                                 VAR_6));
    }

  return VAR_1;
}

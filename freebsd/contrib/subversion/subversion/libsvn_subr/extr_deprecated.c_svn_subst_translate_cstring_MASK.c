
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_subst_keywords_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int * FUNC_0 (int const*,int *) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (char const*,char const**,char const*,int ,int *,int ,int *) ;

svn_error_t *
FUNC_3(const char *VAR_0,
                            const char **VAR_1,
                            const char *VAR_2,
                            svn_boolean_t VAR_3,
                            const svn_subst_keywords_t *VAR_4,
                            svn_boolean_t VAR_5,
                            apr_pool_t *VAR_6)
{
  apr_hash_t *VAR_7 = FUNC_0(VAR_4, VAR_6);

  return FUNC_1(FUNC_2(VAR_0, VAR_1, VAR_2,
                                                      VAR_3, VAR_7, VAR_5,
                                                      VAR_6));
}

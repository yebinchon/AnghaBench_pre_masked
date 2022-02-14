
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc_adm_access_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (char const**,char const*,char const*,int *,int,int *) ;

svn_error_t *
FUNC_1(const char **VAR_2,
                       const char *VAR_3,
                       svn_wc_adm_access_t *VAR_4,
                       svn_boolean_t VAR_5,
                       apr_pool_t *VAR_6)
{
  return FUNC_0(VAR_2, VAR_3, VAR_3, VAR_4,
                                 VAR_1
                                 | (VAR_5 ?
                                    VAR_0 : 0),
                                 VAR_6);
}

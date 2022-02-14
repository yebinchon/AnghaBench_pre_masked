
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc_relocation_validator_t ;
typedef int svn_wc_adm_access_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct compat_baton {void* baton; int validator; } ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int * FUNC_0 (char const*,int *,char const*,char const*,int ,int ,struct compat_baton*,int *) ;

svn_error_t *
FUNC_1(const char *VAR_1,
                svn_wc_adm_access_t *VAR_2,
                const char *VAR_3,
                const char *VAR_4,
                svn_boolean_t VAR_5,
                svn_wc_relocation_validator_t VAR_6,
                void *VAR_7,
                apr_pool_t *VAR_8)
{
  struct compat_baton VAR_9;

  VAR_9.validator = VAR_6;
  VAR_9.baton = VAR_7;

  return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5,
                          VAR_0, &VAR_9, VAR_8);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_string_t ;
typedef int svn_revnum_t ;
typedef int svn_fs_t ;
typedef int svn_error_t ;
struct change_rev_prop_args {char const* name; int const* value; int const* const* old_value_p; int rev; } ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int * FUNC_2 (int *,int ,struct change_rev_prop_args*,int ,int *) ;
 int VAR_1 ;

svn_error_t *
FUNC_3(svn_fs_t *VAR_2,
                             svn_revnum_t VAR_3,
                             const char *VAR_4,
                             const svn_string_t *const *VAR_5,
                             const svn_string_t *VAR_6,
                             apr_pool_t *VAR_7)
{
  struct change_rev_prop_args VAR_8;

  FUNC_0(FUNC_1(VAR_2, VAR_0));

  VAR_8.rev = VAR_3;
  VAR_8.name = VAR_4;
  VAR_8.old_value_p = VAR_5;
  VAR_8.value = VAR_6;
  return FUNC_2(VAR_2, VAR_1, &VAR_8,
                                VAR_0, VAR_7);
}

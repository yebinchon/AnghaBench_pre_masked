
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_repos_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct lock_baton_t {int * fs_err; int member_0; } ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int * FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *,char const*,char const*) ;
 int * FUNC_4 (int *,int *,int ,int ,struct lock_baton_t*,int *,int *) ;

svn_error_t *
FUNC_5(svn_repos_t *VAR_1,
                    const char *VAR_2,
                    const char *VAR_3,
                    svn_boolean_t VAR_4,
                    apr_pool_t *VAR_5)
{
  apr_hash_t *VAR_6 = FUNC_0(VAR_5);
  svn_error_t *VAR_7;
  struct lock_baton_t VAR_8 = {0};

  if (!VAR_3)
    VAR_3 = "";

  FUNC_3(VAR_6, VAR_2, VAR_3);

  VAR_7 = FUNC_4(VAR_1, VAR_6, VAR_4, VAR_0, &VAR_8,
                                 VAR_5, VAR_5);

  if (VAR_7 && VAR_8.fs_err)
    FUNC_1(VAR_7, VAR_8.fs_err);
  else if (!VAR_7)
    VAR_7 = VAR_8.fs_err;

  return FUNC_2(VAR_7);
}

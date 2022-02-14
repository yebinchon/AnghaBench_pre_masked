
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_lock_t ;
typedef int svn_fs_t ;
typedef int svn_error_t ;
struct lock_token_get_args {int ** lock_p; int path; } ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (char const*,int *) ;
 int FUNC_2 (int *,int ) ;
 int * FUNC_3 (int *,int ,struct lock_token_get_args*,int ,int *) ;
 int VAR_2 ;

svn_error_t *
FUNC_4(svn_lock_t **VAR_3,
                      svn_fs_t *VAR_4,
                      const char *VAR_5,
                      apr_pool_t *VAR_6)
{
  struct lock_token_get_args VAR_7;

  FUNC_0(FUNC_2(VAR_4, VAR_1));

  VAR_7.path = FUNC_1(VAR_5, VAR_6);
  VAR_7.lock_p = VAR_3;
  return FUNC_3(VAR_4, VAR_2, &VAR_7, VAR_0, VAR_6);
}

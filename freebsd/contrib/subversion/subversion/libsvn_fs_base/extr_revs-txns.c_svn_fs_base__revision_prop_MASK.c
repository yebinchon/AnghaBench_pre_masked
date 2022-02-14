
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_string_t ;
typedef int svn_revnum_t ;
typedef int svn_fs_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct revision_proplist_args {int rev; int ** table_p; } ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ,struct revision_proplist_args*,int ,int *) ;
 int * FUNC_3 (int *,char const*) ;
 int VAR_3 ;

svn_error_t *
FUNC_4(svn_string_t **VAR_4,
                           svn_fs_t *VAR_5,
                           svn_revnum_t VAR_6,
                           const char *VAR_7,
                           svn_boolean_t VAR_8,
                           apr_pool_t *VAR_9,
                           apr_pool_t *VAR_10)
{
  struct revision_proplist_args VAR_11;
  apr_hash_t *VAR_12;

  FUNC_0(FUNC_1(VAR_5, VAR_2));


  VAR_11.table_p = &VAR_12;
  VAR_11.rev = VAR_6;
  FUNC_0(FUNC_2(VAR_5, VAR_3, &VAR_11,
                                 VAR_0, VAR_9));


  *VAR_4 = FUNC_3(VAR_12, VAR_7);

  return VAR_1;
}

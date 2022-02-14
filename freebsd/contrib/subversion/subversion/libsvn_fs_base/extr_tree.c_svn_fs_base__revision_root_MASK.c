
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_revnum_t ;
typedef int svn_fs_t ;
typedef int svn_fs_root_t ;
typedef int svn_error_t ;
struct revision_root_args {int rev; int ** root_p; } ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ,struct revision_root_args*,int ,int *) ;
 int VAR_3 ;

svn_error_t *
FUNC_3(svn_fs_root_t **VAR_4,
                           svn_fs_t *VAR_5,
                           svn_revnum_t VAR_6,
                           apr_pool_t *VAR_7)
{
  struct revision_root_args VAR_8;
  svn_fs_root_t *VAR_9;

  FUNC_0(FUNC_1(VAR_5, VAR_2));

  VAR_8.root_p = &VAR_9;
  VAR_8.rev = VAR_6;
  FUNC_0(FUNC_2(VAR_5, VAR_3, &VAR_8,
                                 VAR_0, VAR_7));

  *VAR_4 = VAR_9;
  return VAR_1;
}

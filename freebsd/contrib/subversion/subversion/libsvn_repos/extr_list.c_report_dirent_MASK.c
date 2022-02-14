
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int (* svn_repos_dirent_receiver_t ) (char const*,TYPE_1__*,void*,int *) ;
typedef int svn_node_kind_t ;
typedef int svn_fs_root_t ;
typedef int svn_error_t ;
struct TYPE_5__ {int kind; int member_0; } ;
typedef TYPE_1__ svn_dirent_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (TYPE_1__*,int *,char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_2(svn_fs_root_t *VAR_1,
              const char *VAR_2,
              svn_node_kind_t VAR_3,
              svn_boolean_t VAR_4,
              svn_repos_dirent_receiver_t VAR_5,
              void *VAR_6,
              apr_pool_t *VAR_7)
{
  svn_dirent_t VAR_8 = { 0 };


  VAR_8.kind = VAR_3;
  if (!VAR_4)
    FUNC_0(FUNC_1(&VAR_8, VAR_1, VAR_2, VAR_7));


  FUNC_0(VAR_5(VAR_2, &VAR_8, VAR_6, VAR_7));

  return VAR_0;
}

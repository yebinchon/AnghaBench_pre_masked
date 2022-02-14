
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char const* data; int len; } ;
typedef TYPE_1__ svn_string_t ;
typedef int svn_revnum_t ;
struct TYPE_6__ {int fs; } ;
typedef TYPE_2__ svn_repos_t ;
typedef int svn_fs_txn_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int **,int ,int ,int ,int *) ;
 int FUNC_3 (int *,int ,TYPE_1__*,int *) ;

svn_error_t *
FUNC_4(svn_fs_txn_t **VAR_2,
                                  svn_repos_t *VAR_3,
                                  svn_revnum_t VAR_4,
                                  const char *VAR_5,
                                  apr_pool_t *VAR_6)
{



  FUNC_0(FUNC_2(VAR_2, VAR_3->fs, VAR_4, 0, VAR_6));





  if (VAR_5)
    {
      svn_string_t VAR_7;
      VAR_7.data = VAR_5;
      VAR_7.len = FUNC_1(VAR_5);
      FUNC_0(FUNC_3(*VAR_2, VAR_1,
                                     &VAR_7, VAR_6));
    }

  return VAR_0;
}

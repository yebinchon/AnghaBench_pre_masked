
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_revnum_t ;
struct TYPE_6__ {TYPE_3__* priv; } ;
typedef TYPE_2__ svn_ra_session_t ;
struct TYPE_7__ {int fs; TYPE_1__* fs_path; } ;
typedef TYPE_3__ svn_ra_local__session_baton_t ;
typedef int svn_fs_root_t ;
typedef int svn_error_t ;
typedef int svn_dirent_t ;
typedef int apr_pool_t ;
struct TYPE_5__ {int data; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int **,int ,int ,int *) ;
 int FUNC_3 (int *,int ,int *) ;
 char* FUNC_4 (int ,char const*,int *) ;
 int * FUNC_5 (int **,int *,char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_6(svn_ra_session_t *VAR_0,
                   const char *VAR_1,
                   svn_revnum_t VAR_2,
                   svn_dirent_t **VAR_3,
                   apr_pool_t *VAR_4)
{
  svn_ra_local__session_baton_t *VAR_5 = VAR_0->priv;
  svn_fs_root_t *VAR_6;
  const char *VAR_7 = FUNC_4(VAR_5->fs_path->data, VAR_1, VAR_4);

  if (! FUNC_1(VAR_2))
    FUNC_0(FUNC_3(&VAR_2, VAR_5->fs, VAR_4));
  FUNC_0(FUNC_2(&VAR_6, VAR_5->fs, VAR_2, VAR_4));

  return FUNC_5(VAR_3, VAR_6, VAR_7, VAR_4);
}

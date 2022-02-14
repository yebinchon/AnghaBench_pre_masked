
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_fs_access_t ;
typedef int svn_error_t ;
struct cleanup_fs_access_baton {int fs; int * pool; } ;
struct TYPE_7__ {TYPE_2__* repository; TYPE_1__* client_info; } ;
typedef TYPE_3__ server_baton_t ;
typedef int apr_pool_t ;
struct TYPE_6__ {int fs; } ;
struct TYPE_5__ {int user; } ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 struct cleanup_fs_access_baton* FUNC_1 (int *,int) ;
 int VAR_1 ;
 int FUNC_2 (int *,struct cleanup_fs_access_baton*,int ,int ) ;
 int VAR_2 ;
 int FUNC_3 (int **,int ,int *) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_5(server_baton_t *VAR_3, apr_pool_t *VAR_4)
{
  svn_fs_access_t *VAR_5;
  struct cleanup_fs_access_baton *VAR_6;

  if (!VAR_3->client_info->user)
    return VAR_0;

  FUNC_0(FUNC_3(&VAR_5, VAR_3->client_info->user, VAR_4));
  FUNC_0(FUNC_4(VAR_3->repository->fs, VAR_5));

  VAR_6 = FUNC_1(VAR_4, sizeof(*VAR_6));
  VAR_6->pool = VAR_4;
  VAR_6->fs = VAR_3->repository->fs;
  FUNC_2(VAR_4, VAR_6, VAR_2,
                            VAR_1);

  return VAR_0;
}

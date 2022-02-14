
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_fs_root_t ;
typedef int svn_error_t ;
struct TYPE_4__ {TYPE_1__* repository; } ;
typedef TYPE_2__ server_baton_t ;
typedef int apr_pool_t ;
struct TYPE_3__ {int fs; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * VAR_0 ;
 int FUNC_2 (int **,int ,int ,int *) ;
 int FUNC_3 (int *,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_4(svn_fs_root_t **VAR_1,
                  void *VAR_2,
                  svn_revnum_t VAR_3,
                  apr_pool_t *VAR_4)
{
  server_baton_t *VAR_5 = VAR_2;

  if (!FUNC_1(VAR_3))
    FUNC_0(FUNC_3(&VAR_3, VAR_5->repository->fs, VAR_4));

  FUNC_0(FUNC_2(VAR_1, VAR_5->repository->fs, VAR_3, VAR_4));

  return VAR_0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_fs_x__txn_id_t ;
struct TYPE_5__ {int change_set; int number; } ;
struct TYPE_6__ {TYPE_1__ noderev_id; int copyroot_rev; int created_path; scalar_t__ copyroot_path; int copy_id; } ;
typedef TYPE_2__ svn_fs_x__noderev_t ;
typedef int svn_fs_x__id_t ;
typedef int svn_fs_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int *,int *,int ,int *) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,TYPE_2__*,int *) ;

svn_error_t *
FUNC_6(svn_fs_t *VAR_1,
                           svn_fs_x__noderev_t *VAR_2,
                           const svn_fs_x__id_t *VAR_3,
                           svn_fs_x__txn_id_t VAR_4,
                           apr_pool_t *VAR_5)
{
  VAR_2->copy_id = *VAR_3;
  VAR_2->noderev_id.change_set = FUNC_3(VAR_4);
  FUNC_0(FUNC_1(&VAR_2->noderev_id.number, VAR_1, VAR_4,
                              VAR_5));

  if (! VAR_2->copyroot_path)
    {
      VAR_2->copyroot_path
        = FUNC_2(VAR_5, VAR_2->created_path);
      VAR_2->copyroot_rev
        = FUNC_4(VAR_2->noderev_id.change_set);
    }

  FUNC_0(FUNC_5(VAR_1, VAR_2, VAR_5));

  return VAR_0;
}

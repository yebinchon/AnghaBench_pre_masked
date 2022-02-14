
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fs; } ;
typedef TYPE_1__ svn_fs_txn_t ;
typedef int svn_fs_root_t ;
typedef int svn_error_t ;
struct txn_root_args {TYPE_1__* txn; int ** root_p; } ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int FUNC_1 (int ,int ,struct txn_root_args*,int ,int *) ;
 int VAR_2 ;

svn_error_t *
FUNC_2(svn_fs_root_t **VAR_3,
                      svn_fs_txn_t *VAR_4,
                      apr_pool_t *VAR_5)
{
  svn_fs_root_t *VAR_6;
  struct txn_root_args VAR_7;

  VAR_7.root_p = &VAR_6;
  VAR_7.txn = VAR_4;
  FUNC_0(FUNC_1(VAR_4->fs, VAR_2, &VAR_7,
                                 VAR_0, VAR_5));

  *VAR_3 = VAR_6;
  return VAR_1;
}

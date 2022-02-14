
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int id; int fs; } ;
typedef TYPE_1__ svn_fs_txn_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,int *) ;

svn_error_t *
FUNC_6(svn_fs_txn_t *VAR_2,
                     apr_pool_t *VAR_3)
{
  FUNC_0(FUNC_4(VAR_2->fs, VAR_1));


  FUNC_1(FUNC_5(VAR_2->fs, VAR_2->id, VAR_3),
            FUNC_3(VAR_3, FUNC_2("Transaction '%s' cleanup failed"),
                         VAR_2->id));

  return VAR_0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int fs; } ;
typedef TYPE_1__ svn_fs_txn_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ,int *) ;
 int FUNC_3 (TYPE_1__*) ;

svn_error_t *
FUNC_4(apr_hash_t **VAR_1,
                        svn_fs_txn_t *VAR_2,
                        apr_pool_t *VAR_3)
{
  apr_hash_t *VAR_4 = FUNC_1(VAR_3);
  FUNC_0(FUNC_2(VAR_4, VAR_2->fs, FUNC_3(VAR_2),
                           VAR_3));
  *VAR_1 = VAR_4;

  return VAR_0;
}

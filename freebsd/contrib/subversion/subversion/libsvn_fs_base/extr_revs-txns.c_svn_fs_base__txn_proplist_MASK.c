
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int id; int * fs; } ;
typedef TYPE_1__ svn_fs_txn_t ;
typedef int svn_fs_t ;
typedef int svn_error_t ;
struct txn_proplist_args {int id; int ** table_p; } ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ,struct txn_proplist_args*,int ,int *) ;
 int VAR_3 ;

svn_error_t *
FUNC_4(apr_hash_t **VAR_4,
                          svn_fs_txn_t *VAR_5,
                          apr_pool_t *VAR_6)
{
  struct txn_proplist_args VAR_7;
  apr_hash_t *VAR_8;
  svn_fs_t *VAR_9 = VAR_5->fs;

  FUNC_0(FUNC_2(VAR_9, VAR_2));

  VAR_7.table_p = &VAR_8;
  VAR_7.id = VAR_5->id;
  FUNC_0(FUNC_3(VAR_9, VAR_3, &VAR_7,
                                 VAR_0, VAR_6));

  *VAR_4 = VAR_8 ? VAR_8 : FUNC_1(VAR_6);
  return VAR_1;
}

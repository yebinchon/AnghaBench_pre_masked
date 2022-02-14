
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_string_t ;
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
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ,struct txn_proplist_args*,int ,int *) ;
 int * FUNC_3 (int *,char const*) ;
 int VAR_3 ;

svn_error_t *
FUNC_4(svn_string_t **VAR_4,
                      svn_fs_txn_t *VAR_5,
                      const char *VAR_6,
                      apr_pool_t *VAR_7)
{
  struct txn_proplist_args VAR_8;
  apr_hash_t *VAR_9;
  svn_fs_t *VAR_10 = VAR_5->fs;

  FUNC_0(FUNC_1(VAR_10, VAR_2));


  VAR_8.table_p = &VAR_9;
  VAR_8.id = VAR_5->id;
  FUNC_0(FUNC_2(VAR_10, VAR_3, &VAR_8,
                                 VAR_0, VAR_7));


  *VAR_4 = FUNC_3(VAR_9, VAR_6);

  return VAR_1;
}

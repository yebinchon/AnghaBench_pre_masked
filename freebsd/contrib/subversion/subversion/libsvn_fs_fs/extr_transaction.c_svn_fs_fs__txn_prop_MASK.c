
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_string_t ;
struct TYPE_4__ {int * fs; } ;
typedef TYPE_1__ svn_fs_txn_t ;
typedef int svn_fs_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int **,TYPE_1__*,int *) ;
 int * FUNC_3 (int *,char const*) ;

svn_error_t *
FUNC_4(svn_string_t **VAR_2,
                    svn_fs_txn_t *VAR_3,
                    const char *VAR_4,
                    apr_pool_t *VAR_5)
{
  apr_hash_t *VAR_6;
  svn_fs_t *VAR_7 = VAR_3->fs;

  FUNC_0(FUNC_1(VAR_7, VAR_1));
  FUNC_0(FUNC_2(&VAR_6, VAR_3, VAR_5));

  *VAR_2 = FUNC_3(VAR_6, VAR_4);

  return VAR_0;
}

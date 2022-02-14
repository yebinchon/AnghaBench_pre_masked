
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_fs_txn_t ;
typedef int svn_fs_t ;
typedef int svn_error_t ;
struct open_txn_args {char const* name; int ** txn_p; } ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ,struct open_txn_args*,int ,int *) ;
 int VAR_3 ;

svn_error_t *
FUNC_3(svn_fs_txn_t **VAR_4,
                      svn_fs_t *VAR_5,
                      const char *VAR_6,
                      apr_pool_t *VAR_7)
{
  svn_fs_txn_t *VAR_8;
  struct open_txn_args VAR_9;

  FUNC_0(FUNC_1(VAR_5, VAR_2));

  VAR_9.txn_p = &VAR_8;
  VAR_9.name = VAR_6;
  FUNC_0(FUNC_2(VAR_5, VAR_3, &VAR_9, VAR_0, VAR_7));

  *VAR_4 = VAR_8;
  return VAR_1;
}

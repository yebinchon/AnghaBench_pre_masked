
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_fs_t ;
struct TYPE_4__ {int rev; int txn_flags; int pool; int txn; int is_txn_root; } ;
typedef TYPE_1__ svn_fs_root_t ;
typedef int apr_uint32_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char const*) ;
 TYPE_1__* FUNC_1 (int *,int *) ;

__attribute__((used)) static svn_fs_root_t *
FUNC_2(svn_fs_t *VAR_1,
              const char *VAR_2,
              svn_revnum_t VAR_3,
              apr_uint32_t VAR_4,
              apr_pool_t *VAR_5)
{
  svn_fs_root_t *VAR_6 = FUNC_1(VAR_1, VAR_5);
  VAR_6->is_txn_root = VAR_0;
  VAR_6->txn = FUNC_0(VAR_6->pool, VAR_2);
  VAR_6->txn_flags = VAR_4;
  VAR_6->rev = VAR_3;

  return VAR_6;
}

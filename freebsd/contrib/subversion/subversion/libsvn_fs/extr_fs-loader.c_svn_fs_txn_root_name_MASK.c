
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int txn; scalar_t__ is_txn_root; } ;
typedef TYPE_1__ svn_fs_root_t ;
typedef int apr_pool_t ;


 char const* FUNC_0 (int *,int ) ;

const char *
FUNC_1(svn_fs_root_t *VAR_0, apr_pool_t *VAR_1)
{
  return VAR_0->is_txn_root ? FUNC_0(VAR_1, VAR_0->txn) : ((void*)0);
}

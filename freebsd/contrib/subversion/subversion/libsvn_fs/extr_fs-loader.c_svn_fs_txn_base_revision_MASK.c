
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_revnum_t ;
struct TYPE_3__ {int base_rev; } ;
typedef TYPE_1__ svn_fs_txn_t ;



svn_revnum_t
FUNC_0(svn_fs_txn_t *VAR_0)
{
  return VAR_0->base_rev;
}

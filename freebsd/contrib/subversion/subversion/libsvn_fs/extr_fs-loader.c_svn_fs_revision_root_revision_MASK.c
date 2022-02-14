
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_revnum_t ;
struct TYPE_3__ {int rev; scalar_t__ is_txn_root; } ;
typedef TYPE_1__ svn_fs_root_t ;


 int VAR_0 ;

svn_revnum_t
FUNC_0(svn_fs_root_t *VAR_1)
{
  return VAR_1->is_txn_root ? VAR_0 : VAR_1->rev;
}

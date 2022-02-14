
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_fs_x__change_set_t ;
struct TYPE_4__ {int rev; scalar_t__ is_txn_root; } ;
typedef TYPE_1__ svn_fs_root_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;

svn_fs_x__change_set_t
FUNC_3(svn_fs_root_t *VAR_0)
{
  if (VAR_0->is_txn_root)
    return FUNC_1(FUNC_2(VAR_0));

  return FUNC_0(VAR_0->rev);
}

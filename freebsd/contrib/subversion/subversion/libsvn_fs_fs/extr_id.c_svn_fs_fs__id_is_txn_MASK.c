
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_fs_id_t ;
typedef int svn_boolean_t ;
struct TYPE_3__ {int txn_id; } ;
struct TYPE_4__ {TYPE_1__ private_id; } ;
typedef TYPE_2__ fs_fs__id_t ;


 int FUNC_0 (int *) ;

svn_boolean_t
FUNC_1(const svn_fs_id_t *VAR_0)
{
  const fs_fs__id_t *VAR_1 = (const fs_fs__id_t *)VAR_0;

  return FUNC_0(&VAR_1->private_id.txn_id);
}

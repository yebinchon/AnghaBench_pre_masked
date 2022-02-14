
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_fs_id_t ;
typedef int svn_boolean_t ;
struct TYPE_3__ {int rev_item; int txn_id; int copy_id; int node_id; } ;
struct TYPE_4__ {TYPE_1__ private_id; } ;
typedef TYPE_2__ fs_fs__id_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *) ;

svn_boolean_t
FUNC_1(const svn_fs_id_t *VAR_1,
                 const svn_fs_id_t *VAR_2)
{
  const fs_fs__id_t *VAR_3 = (const fs_fs__id_t *)VAR_1;
  const fs_fs__id_t *VAR_4 = (const fs_fs__id_t *)VAR_2;

  if (VAR_1 == VAR_2)
    return VAR_0;

  return FUNC_0(&VAR_3->private_id.node_id,
                               &VAR_4->private_id.node_id)
      && FUNC_0(&VAR_3->private_id.copy_id,
                               &VAR_4->private_id.copy_id)
      && FUNC_0(&VAR_3->private_id.txn_id,
                               &VAR_4->private_id.txn_id)
      && FUNC_0(&VAR_3->private_id.rev_item,
                               &VAR_4->private_id.rev_item);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* fsap_data; } ;
typedef TYPE_1__ svn_fs_id_t ;
typedef int svn_boolean_t ;
struct TYPE_6__ {int txn_id; int copy_id; int node_id; } ;
typedef TYPE_2__ id_private_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;

svn_boolean_t
FUNC_1(const svn_fs_id_t *VAR_2,
                   const svn_fs_id_t *VAR_3)
{
  id_private_t *VAR_4 = VAR_2->fsap_data, *VAR_5 = VAR_3->fsap_data;

  if (VAR_2 == VAR_3)
    return VAR_1;
  if (FUNC_0(VAR_4->node_id, VAR_5->node_id) != 0)
     return VAR_0;
  if (FUNC_0(VAR_4->copy_id, VAR_5->copy_id) != 0)
    return VAR_0;
  if (FUNC_0(VAR_4->txn_id, VAR_5->txn_id) != 0)
    return VAR_0;
  return VAR_1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* fsap_data; } ;
typedef TYPE_1__ svn_fs_id_t ;
typedef int svn_boolean_t ;
struct TYPE_6__ {int node_id; } ;
typedef TYPE_2__ id_private_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;

svn_boolean_t
FUNC_1(const svn_fs_id_t *VAR_1,
                              const svn_fs_id_t *VAR_2)
{
  id_private_t *VAR_3 = VAR_1->fsap_data, *VAR_4 = VAR_2->fsap_data;

  if (VAR_1 == VAR_2)
    return VAR_0;

  return (FUNC_0(VAR_3->node_id, VAR_4->node_id) == 0);
}

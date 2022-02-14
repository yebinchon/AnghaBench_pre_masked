
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_string_t ;
struct TYPE_4__ {TYPE_2__* fsap_data; } ;
typedef TYPE_1__ svn_fs_id_t ;
struct TYPE_5__ {int txn_id; int copy_id; int node_id; } ;
typedef TYPE_2__ id_private_t ;
typedef int apr_pool_t ;


 int * FUNC_0 (int *,char*,int ,int ,int ) ;

svn_string_t *
FUNC_1(const svn_fs_id_t *VAR_0,
                        apr_pool_t *VAR_1)
{
  id_private_t *VAR_2 = VAR_0->fsap_data;

  return FUNC_0(VAR_1, "%s.%s.%s",
                            VAR_2->node_id, VAR_2->copy_id, VAR_2->txn_id);
}

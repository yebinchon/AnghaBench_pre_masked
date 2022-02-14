
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* fsap_data; int * vtable; } ;
typedef TYPE_1__ svn_fs_id_t ;
struct TYPE_6__ {void* txn_id; void* copy_id; void* node_id; } ;
typedef TYPE_2__ id_private_t ;
typedef int apr_pool_t ;


 void* FUNC_0 (int *,int) ;
 void* FUNC_1 (int *,void*) ;
 int VAR_0 ;

svn_fs_id_t *
FUNC_2(const svn_fs_id_t *VAR_1, apr_pool_t *VAR_2)
{
  svn_fs_id_t *VAR_3 = FUNC_0(VAR_2, sizeof(*VAR_3));
  id_private_t *VAR_4 = FUNC_0(VAR_2, sizeof(*VAR_4));
  id_private_t *VAR_5 = VAR_1->fsap_data;

  VAR_4->node_id = FUNC_1(VAR_2, VAR_5->node_id);
  VAR_4->copy_id = FUNC_1(VAR_2, VAR_5->copy_id);
  VAR_4->txn_id = FUNC_1(VAR_2, VAR_5->txn_id);
  VAR_3->vtable = &VAR_0;
  VAR_3->fsap_data = VAR_4;
  return VAR_3;
}

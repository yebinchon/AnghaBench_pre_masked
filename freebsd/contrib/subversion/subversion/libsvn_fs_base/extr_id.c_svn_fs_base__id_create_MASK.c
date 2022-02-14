
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* fsap_data; int * vtable; } ;
typedef TYPE_1__ svn_fs_id_t ;
struct TYPE_5__ {void* txn_id; void* copy_id; void* node_id; } ;
typedef TYPE_2__ id_private_t ;
typedef int apr_pool_t ;


 void* FUNC_0 (int *,int) ;
 void* FUNC_1 (int *,char const*) ;
 int VAR_0 ;

svn_fs_id_t *
FUNC_2(const char *VAR_1,
                       const char *VAR_2,
                       const char *VAR_3,
                       apr_pool_t *VAR_4)
{
  svn_fs_id_t *VAR_5 = FUNC_0(VAR_4, sizeof(*VAR_5));
  id_private_t *VAR_6 = FUNC_0(VAR_4, sizeof(*VAR_6));

  VAR_6->node_id = FUNC_1(VAR_4, VAR_1);
  VAR_6->copy_id = FUNC_1(VAR_4, VAR_2);
  VAR_6->txn_id = FUNC_1(VAR_4, VAR_3);
  VAR_5->vtable = &VAR_0;
  VAR_5->fsap_data = VAR_6;
  return VAR_5;
}

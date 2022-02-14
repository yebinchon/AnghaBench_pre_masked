
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {TYPE_4__* fsap_data; } ;
typedef TYPE_1__ svn_fs_t ;
typedef int svn_fs_fs__id_part_t ;
typedef int svn_boolean_t ;
struct TYPE_9__ {struct TYPE_9__* next; int being_written; int txn_id; int * pool; } ;
typedef TYPE_2__ fs_fs_shared_txn_data_t ;
struct TYPE_10__ {TYPE_2__* txns; int common_pool; TYPE_2__* free_txn; } ;
typedef TYPE_3__ fs_fs_shared_data_t ;
struct TYPE_11__ {TYPE_3__* shared; } ;
typedef TYPE_4__ fs_fs_data_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (int *,int const*) ;
 int * FUNC_2 (int ) ;

__attribute__((used)) static fs_fs_shared_txn_data_t *
FUNC_3(svn_fs_t *VAR_1,
               const svn_fs_fs__id_part_t *VAR_2,
               svn_boolean_t VAR_3)
{
  fs_fs_data_t *VAR_4 = VAR_1->fsap_data;
  fs_fs_shared_data_t *VAR_5 = VAR_4->shared;
  fs_fs_shared_txn_data_t *VAR_6;

  for (VAR_6 = VAR_5->txns; VAR_6; VAR_6 = VAR_6->next)
    if (FUNC_1(&VAR_6->txn_id, VAR_2))
      break;

  if (VAR_6 || !VAR_3)
    return VAR_6;



  if (VAR_5->free_txn)
    {
      VAR_6 = VAR_5->free_txn;
      VAR_5->free_txn = ((void*)0);
    }
  else
    {
      apr_pool_t *VAR_7 = FUNC_2(VAR_5->common_pool);
      VAR_6 = FUNC_0(VAR_7, sizeof(*VAR_6));
      VAR_6->pool = VAR_7;
    }

  VAR_6->txn_id = *VAR_2;
  VAR_6->being_written = VAR_0;





  VAR_6->next = VAR_5->txns;
  VAR_5->txns = VAR_6;

  return VAR_6;
}

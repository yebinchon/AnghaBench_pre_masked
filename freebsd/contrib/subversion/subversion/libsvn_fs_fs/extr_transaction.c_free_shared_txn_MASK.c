
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_4__* fsap_data; } ;
typedef TYPE_1__ svn_fs_t ;
typedef int svn_fs_fs__id_part_t ;
struct TYPE_7__ {int pool; struct TYPE_7__* next; int txn_id; } ;
typedef TYPE_2__ fs_fs_shared_txn_data_t ;
struct TYPE_8__ {TYPE_2__* free_txn; TYPE_2__* txns; } ;
typedef TYPE_3__ fs_fs_shared_data_t ;
struct TYPE_9__ {TYPE_3__* shared; } ;
typedef TYPE_4__ fs_fs_data_t ;


 scalar_t__ FUNC_0 (int *,int const*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(svn_fs_t *VAR_0, const svn_fs_fs__id_part_t *VAR_1)
{
  fs_fs_data_t *VAR_2 = VAR_0->fsap_data;
  fs_fs_shared_data_t *VAR_3 = VAR_2->shared;
  fs_fs_shared_txn_data_t *VAR_4, *VAR_5 = ((void*)0);

  for (VAR_4 = VAR_3->txns; VAR_4; VAR_5 = VAR_4, VAR_4 = VAR_4->next)
    if (FUNC_0(&VAR_4->txn_id, VAR_1))
      break;

  if (!VAR_4)
    return;

  if (VAR_5)
    VAR_5->next = VAR_4->next;
  else
    VAR_3->txns = VAR_4->next;




  if (!VAR_3->free_txn)
    VAR_3->free_txn = VAR_4;
  else
    FUNC_1(VAR_4->pool);
}

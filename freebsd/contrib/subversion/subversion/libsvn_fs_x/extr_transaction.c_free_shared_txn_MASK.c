
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ svn_fs_x__txn_id_t ;
struct TYPE_6__ {scalar_t__ txn_id; int pool; struct TYPE_6__* next; } ;
typedef TYPE_1__ svn_fs_x__shared_txn_data_t ;
struct TYPE_7__ {TYPE_1__* free_txn; TYPE_1__* txns; } ;
typedef TYPE_2__ svn_fs_x__shared_data_t ;
struct TYPE_8__ {TYPE_2__* shared; } ;
typedef TYPE_3__ svn_fs_x__data_t ;
struct TYPE_9__ {TYPE_3__* fsap_data; } ;
typedef TYPE_4__ svn_fs_t ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(svn_fs_t *VAR_0, svn_fs_x__txn_id_t VAR_1)
{
  svn_fs_x__data_t *VAR_2 = VAR_0->fsap_data;
  svn_fs_x__shared_data_t *VAR_3 = VAR_2->shared;
  svn_fs_x__shared_txn_data_t *VAR_4, *VAR_5 = ((void*)0);

  for (VAR_4 = VAR_3->txns; VAR_4; VAR_5 = VAR_4, VAR_4 = VAR_4->next)
    if (VAR_4->txn_id == VAR_1)
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
    FUNC_0(VAR_4->pool);
}

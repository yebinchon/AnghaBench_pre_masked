
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ svn_fs_x__txn_id_t ;
struct TYPE_8__ {scalar_t__ txn_id; struct TYPE_8__* next; int being_written; int * pool; } ;
typedef TYPE_1__ svn_fs_x__shared_txn_data_t ;
struct TYPE_9__ {TYPE_1__* txns; int common_pool; TYPE_1__* free_txn; } ;
typedef TYPE_2__ svn_fs_x__shared_data_t ;
struct TYPE_10__ {TYPE_2__* shared; } ;
typedef TYPE_3__ svn_fs_x__data_t ;
struct TYPE_11__ {TYPE_3__* fsap_data; } ;
typedef TYPE_4__ svn_fs_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int *,int) ;
 int * FUNC_1 (int ) ;

__attribute__((used)) static svn_fs_x__shared_txn_data_t *
FUNC_2(svn_fs_t *VAR_1,
               svn_fs_x__txn_id_t VAR_2,
               svn_boolean_t VAR_3)
{
  svn_fs_x__data_t *VAR_4 = VAR_1->fsap_data;
  svn_fs_x__shared_data_t *VAR_5 = VAR_4->shared;
  svn_fs_x__shared_txn_data_t *VAR_6;

  for (VAR_6 = VAR_5->txns; VAR_6; VAR_6 = VAR_6->next)
    if (VAR_6->txn_id == VAR_2)
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
      apr_pool_t *VAR_7 = FUNC_1(VAR_5->common_pool);
      VAR_6 = FUNC_0(VAR_7, sizeof(*VAR_6));
      VAR_6->pool = VAR_7;
    }

  VAR_6->txn_id = VAR_2;
  VAR_6->being_written = VAR_0;





  VAR_6->next = VAR_5->txns;
  VAR_5->txns = VAR_6;

  return VAR_6;
}

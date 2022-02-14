
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int pool; struct TYPE_8__* next; } ;
typedef TYPE_1__ svn_fs_x__shared_txn_data_t ;
struct TYPE_9__ {TYPE_1__* txns; } ;
typedef TYPE_2__ svn_fs_x__shared_data_t ;
struct TYPE_10__ {TYPE_2__* shared; } ;
typedef TYPE_3__ svn_fs_x__data_t ;
struct TYPE_11__ {TYPE_3__* fsap_data; } ;
typedef TYPE_4__ svn_fs_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (TYPE_4__*,int *) ;
 int FUNC_3 (TYPE_4__*,int *) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static svn_error_t *
FUNC_5(svn_fs_t *VAR_1,
                     apr_pool_t *VAR_2)
{
  svn_fs_x__data_t *VAR_3 = VAR_1->fsap_data;
  svn_fs_x__shared_data_t *VAR_4 = VAR_3->shared;





  while (VAR_4->txns)
    {
      svn_fs_x__shared_txn_data_t *VAR_5 = VAR_4->txns;
      VAR_4->txns = VAR_5->next;

      FUNC_4(VAR_5->pool);
    }


  FUNC_0(FUNC_1(FUNC_3(VAR_1, VAR_2),
                          VAR_2));
  FUNC_0(FUNC_1(FUNC_2(VAR_1, VAR_2),
                          VAR_2));

  return VAR_0;
}

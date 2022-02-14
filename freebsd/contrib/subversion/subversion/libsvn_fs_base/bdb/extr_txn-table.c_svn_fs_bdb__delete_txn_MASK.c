
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


typedef int transaction_t ;
struct TYPE_13__ {int db_txn; } ;
typedef TYPE_1__ trail_t ;
struct TYPE_14__ {TYPE_3__* fsap_data; } ;
typedef TYPE_2__ svn_fs_t ;
typedef int svn_error_t ;
struct TYPE_15__ {TYPE_10__* transactions; } ;
typedef TYPE_3__ base_fs_data_t ;
typedef int apr_pool_t ;
struct TYPE_12__ {int (* del ) (TYPE_10__*,int ,int *,int ) ;} ;
typedef int DBT ;


 int * FUNC_0 (TYPE_2__*,int ,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (TYPE_10__*,int ,int *,int ) ;
 int * FUNC_5 (TYPE_2__*,char const*) ;
 int FUNC_6 (int *,char const*) ;
 int FUNC_7 (TYPE_1__*,char*,char*) ;
 int FUNC_8 (int **,TYPE_2__*,char const*,TYPE_1__*,int *) ;

svn_error_t *
FUNC_9(svn_fs_t *VAR_0,
                       const char *VAR_1,
                       trail_t *VAR_2,
                       apr_pool_t *VAR_3)
{
  base_fs_data_t *VAR_4 = VAR_0->fsap_data;
  DBT VAR_5;
  transaction_t *VAR_6;


  FUNC_2(FUNC_8(&VAR_6, VAR_0, VAR_1, VAR_2, VAR_3));
  if (FUNC_3(VAR_6))
    return FUNC_5(VAR_0, VAR_1);


  FUNC_6(&VAR_5, VAR_1);
  FUNC_7(VAR_2, "transactions", "del");
  return FUNC_0(VAR_0, FUNC_1("deleting entry from 'transactions' table"),
                  VAR_4->transactions->del(VAR_4->transactions,
                                         VAR_2->db_txn, &VAR_5, 0));
}

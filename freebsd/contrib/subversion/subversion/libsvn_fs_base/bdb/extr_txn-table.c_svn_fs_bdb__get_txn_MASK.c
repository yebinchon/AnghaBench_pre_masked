
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_13__ ;


typedef int transaction_t ;
struct TYPE_16__ {int db_txn; } ;
typedef TYPE_1__ trail_t ;
typedef int svn_skel_t ;
struct TYPE_17__ {TYPE_3__* fsap_data; } ;
typedef TYPE_2__ svn_fs_t ;
typedef int svn_error_t ;
struct TYPE_18__ {TYPE_13__* transactions; } ;
typedef TYPE_3__ base_fs_data_t ;
typedef int apr_pool_t ;
struct TYPE_19__ {int size; int data; } ;
struct TYPE_15__ {int (* get ) (TYPE_13__*,int ,int ,int ,int ) ;} ;
typedef TYPE_4__ DBT ;


 int FUNC_0 (TYPE_2__*,int ,int) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int * VAR_1 ;
 int FUNC_3 (TYPE_13__*,int ,int ,int ,int ) ;
 int * FUNC_4 (TYPE_2__*,char const*) ;
 int * FUNC_5 (TYPE_2__*,char const*) ;
 int FUNC_6 (int **,int *,int *) ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (TYPE_4__*,char const*) ;
 int FUNC_9 (TYPE_4__*,int *) ;
 int FUNC_10 (TYPE_1__*,char*,char*) ;
 int * FUNC_11 (int ,int ,int *) ;

svn_error_t *
FUNC_12(transaction_t **VAR_2,
                    svn_fs_t *VAR_3,
                    const char *VAR_4,
                    trail_t *VAR_5,
                    apr_pool_t *VAR_6)
{
  base_fs_data_t *VAR_7 = VAR_3->fsap_data;
  DBT VAR_8, VAR_9;
  int VAR_10;
  svn_skel_t *VAR_11;
  transaction_t *VAR_12;



  FUNC_10(VAR_5, "transactions", "get");
  VAR_10 = VAR_7->transactions->get(VAR_7->transactions, VAR_5->db_txn,
                                  FUNC_8(&VAR_8, VAR_4),
                                  FUNC_7(&VAR_9),
                                  0);
  FUNC_9(&VAR_9, VAR_6);

  if (VAR_10 == VAR_0)
    return FUNC_5(VAR_3, VAR_4);
  FUNC_2(FUNC_0(VAR_3, FUNC_1("reading transaction"), VAR_10));


  VAR_11 = FUNC_11(VAR_9.data, VAR_9.size, VAR_6);
  if (! VAR_11)
    return FUNC_4(VAR_3, VAR_4);


  FUNC_2(FUNC_6(&VAR_12, VAR_11, VAR_6));
  *VAR_2 = VAR_12;
  return VAR_1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int transaction_t ;
struct TYPE_9__ {int db_txn; } ;
typedef TYPE_1__ trail_t ;
typedef int svn_skel_t ;
struct TYPE_10__ {TYPE_3__* fsap_data; } ;
typedef TYPE_2__ svn_fs_t ;
typedef int svn_error_t ;
struct TYPE_11__ {TYPE_7__* transactions; } ;
typedef TYPE_3__ base_fs_data_t ;
typedef int apr_pool_t ;
struct TYPE_12__ {int (* put ) (TYPE_7__*,int ,int *,int *,int ) ;} ;
typedef int DBT ;


 int * FUNC_0 (TYPE_2__*,int ,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_7__*,int ,int *,int *,int ) ;
 int FUNC_4 (int *,int *,int *) ;
 int FUNC_5 (int *,char const*) ;
 int FUNC_6 (TYPE_1__*,char*,char*) ;
 int FUNC_7 (int **,int const*,int *) ;

svn_error_t *
FUNC_8(svn_fs_t *VAR_0,
                    const transaction_t *VAR_1,
                    const char *VAR_2,
                    trail_t *VAR_3,
                    apr_pool_t *VAR_4)
{
  base_fs_data_t *VAR_5 = VAR_0->fsap_data;
  svn_skel_t *VAR_6;
  DBT VAR_7, VAR_8;


  FUNC_2(FUNC_7(&VAR_6, VAR_1, VAR_4));



  FUNC_5(&VAR_7, VAR_2);
  FUNC_4(&VAR_8, VAR_6, VAR_4);
  FUNC_6(VAR_3, "transactions", "put");
  return FUNC_0(VAR_0, FUNC_1("storing transaction record"),
                  VAR_5->transactions->put(VAR_5->transactions, VAR_3->db_txn,
                                         &VAR_7, &VAR_8, 0));
}

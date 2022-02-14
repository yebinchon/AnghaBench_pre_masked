
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_9__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_17__ {int db_txn; } ;
typedef TYPE_1__ trail_t ;
struct TYPE_18__ {TYPE_3__* fsap_data; } ;
typedef TYPE_2__ svn_fs_t ;
typedef int svn_error_t ;
struct TYPE_19__ {TYPE_9__* transactions; } ;
typedef TYPE_3__ base_fs_data_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;
struct TYPE_21__ {int (* get ) (TYPE_9__*,int ,TYPE_4__*,int ,int ) ;int (* put ) (TYPE_9__*,int ,TYPE_4__*,TYPE_4__*,int ) ;} ;
struct TYPE_20__ {int data; int size; } ;
typedef TYPE_4__ DBT ;


 int * FUNC_0 (TYPE_2__*,int ,int) ;
 int VAR_0 ;
 char* VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 char* FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (TYPE_9__*,int ,TYPE_4__*,int ,int ) ;
 int FUNC_5 (TYPE_9__*,int ,TYPE_4__*,TYPE_4__*,int ) ;
 int FUNC_6 (int ,int *,char*) ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (TYPE_4__*,char*) ;
 int FUNC_9 (TYPE_4__*,int *) ;
 int FUNC_10 (TYPE_1__*,char*,char*) ;

__attribute__((used)) static svn_error_t *
FUNC_11(const char **VAR_2,
                svn_fs_t *VAR_3,
                trail_t *VAR_4,
                apr_pool_t *VAR_5)
{
  base_fs_data_t *VAR_6 = VAR_3->fsap_data;
  DBT VAR_7, VAR_8;
  apr_size_t VAR_9;
  char VAR_10[VAR_0];
  int VAR_11;

  FUNC_8(&VAR_7, VAR_1);


  FUNC_10(VAR_4, "transactions", "get");
  FUNC_2(FUNC_0(VAR_3, FUNC_1("allocating new transaction ID (getting 'next-key')"),
                   VAR_6->transactions->get(VAR_6->transactions, VAR_4->db_txn,
                                          &VAR_7,
                                          FUNC_7(&VAR_8),
                                          0)));
  FUNC_9(&VAR_8, VAR_5);


  *VAR_2 = FUNC_3(VAR_5, VAR_8.data, VAR_8.size);


  VAR_9 = VAR_8.size;
  FUNC_6(VAR_8.data, &VAR_9, VAR_10);
  FUNC_8(&VAR_7, VAR_1);
  FUNC_8(&VAR_8, VAR_10);
  FUNC_10(VAR_4, "transactions", "put");
  VAR_11 = VAR_6->transactions->put(VAR_6->transactions, VAR_4->db_txn,
                                  &VAR_7, &VAR_8, 0);

  return FUNC_0(VAR_3, FUNC_1("bumping next transaction key"), VAR_11);
}

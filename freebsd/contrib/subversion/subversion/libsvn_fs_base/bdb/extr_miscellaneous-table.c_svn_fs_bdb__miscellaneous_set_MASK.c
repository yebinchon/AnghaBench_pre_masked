
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int db_txn; } ;
typedef TYPE_1__ trail_t ;
struct TYPE_11__ {TYPE_3__* fsap_data; } ;
typedef TYPE_2__ svn_fs_t ;
typedef int svn_error_t ;
struct TYPE_12__ {TYPE_7__* miscellaneous; } ;
typedef TYPE_3__ base_fs_data_t ;
typedef int apr_pool_t ;
struct TYPE_13__ {int (* put ) (TYPE_7__*,int ,int *,int *,int ) ;int (* del ) (TYPE_7__*,int ,int *,int ) ;} ;
typedef int DBT ;


 int * FUNC_0 (TYPE_2__*,int ,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_7__*,int ,int *,int ) ;
 int FUNC_3 (TYPE_7__*,int ,int *,int *,int ) ;
 int FUNC_4 (int *,char const*) ;
 int FUNC_5 (TYPE_1__*,char*,char*) ;

svn_error_t *
FUNC_6(svn_fs_t *VAR_0,
                              const char *VAR_1,
                              const char *VAR_2,
                              trail_t *VAR_3,
                              apr_pool_t *VAR_4)
{
  base_fs_data_t *VAR_5 = VAR_0->fsap_data;
  DBT VAR_6, VAR_7;

  FUNC_4(&VAR_6, VAR_1);
  if (VAR_2 == ((void*)0))
    {
      FUNC_5(VAR_3, "miscellaneous", "del");
      return FUNC_0(VAR_0, FUNC_1("deleting record from 'miscellaneous' table"),
                      VAR_5->miscellaneous->del(VAR_5->miscellaneous,
                                              VAR_3->db_txn, &VAR_6, 0));
    }
  else
    {
      FUNC_4(&VAR_7, VAR_2);
      FUNC_5(VAR_3, "miscellaneous", "add");
      return FUNC_0(VAR_0, FUNC_1("storing miscellaneous record"),
                      VAR_5->miscellaneous->put(VAR_5->miscellaneous,
                                              VAR_3->db_txn,
                                              &VAR_6, &VAR_7, 0));
    }
}

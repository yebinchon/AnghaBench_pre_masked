
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int db_txn; } ;
typedef TYPE_1__ trail_t ;
struct TYPE_12__ {TYPE_3__* fsap_data; } ;
typedef TYPE_2__ svn_fs_t ;
typedef int svn_error_t ;
struct TYPE_13__ {TYPE_7__* strings; } ;
typedef TYPE_3__ base_fs_data_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;
struct TYPE_14__ {int (* put ) (TYPE_7__*,int ,int ,int ,int ) ;} ;
typedef int DBT ;


 int * FUNC_0 (TYPE_2__*,int ,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,char const**,TYPE_1__*,int *) ;
 int FUNC_4 (TYPE_7__*,int ,int ,int ,int ) ;
 int FUNC_5 (int *,char const*,int ) ;
 int FUNC_6 (int *,char const*) ;
 int FUNC_7 (TYPE_1__*,char*,char*) ;

svn_error_t *
FUNC_8(svn_fs_t *VAR_0,
                          const char **VAR_1,
                          apr_size_t VAR_2,
                          const char *VAR_3,
                          trail_t *VAR_4,
                          apr_pool_t *VAR_5)
{
  base_fs_data_t *VAR_6 = VAR_0->fsap_data;
  DBT VAR_7, VAR_8;



  if (*VAR_1 == ((void*)0))
    {
      FUNC_2(FUNC_3(VAR_0, VAR_1, VAR_4, VAR_5));
    }


  FUNC_7(VAR_4, "strings", "put");
  return FUNC_0(VAR_0, FUNC_1("appending string"),
                  VAR_6->strings->put
                  (VAR_6->strings, VAR_4->db_txn,
                   FUNC_6(&VAR_7, *VAR_1),
                   FUNC_5(&VAR_8, VAR_3, VAR_2),
                   0));
}

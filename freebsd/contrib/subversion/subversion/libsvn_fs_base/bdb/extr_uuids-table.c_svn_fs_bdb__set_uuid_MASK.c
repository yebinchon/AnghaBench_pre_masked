
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int u_int32_t ;
struct TYPE_14__ {int db_txn; } ;
typedef TYPE_1__ trail_t ;
struct TYPE_15__ {TYPE_3__* fsap_data; } ;
typedef TYPE_2__ svn_fs_t ;
typedef int svn_error_t ;
typedef int idx ;
struct TYPE_16__ {TYPE_5__* uuids; } ;
typedef TYPE_3__ base_fs_data_t ;
typedef int apr_pool_t ;
struct TYPE_18__ {int (* put ) (TYPE_5__*,int ,TYPE_4__*,TYPE_4__*,int ) ;} ;
struct TYPE_17__ {int* data; int size; } ;
typedef TYPE_4__ DBT ;
typedef TYPE_5__ DB ;


 int * FUNC_0 (TYPE_2__*,int ,int ) ;
 int FUNC_1 (char*) ;
 int* FUNC_2 (int *,char const*,int) ;
 scalar_t__ FUNC_3 (char const*) ;
 int FUNC_4 (TYPE_5__*,int ,TYPE_4__*,TYPE_4__*,int ) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_1__*,char*,char*) ;

svn_error_t *FUNC_7(svn_fs_t *VAR_0,
                                  int VAR_1,
                                  const char *VAR_2,
                                  trail_t *VAR_3,
                                  apr_pool_t *VAR_4)
{
  base_fs_data_t *VAR_5 = VAR_0->fsap_data;
  DB *VAR_6 = VAR_5->uuids;
  DBT VAR_7;
  DBT VAR_8;

  FUNC_5(&VAR_7);
  VAR_7.data = &VAR_1;
  VAR_7.size = sizeof(VAR_1);

  FUNC_5(&VAR_8);
  VAR_8.size = (u_int32_t) FUNC_3(VAR_2);
  VAR_8.data = FUNC_2(VAR_4, VAR_2, VAR_8.size + 1);

  FUNC_6(VAR_3, "uuids", "put");
  return FUNC_0(VAR_0, FUNC_1("set repository uuid"),
                  VAR_6->put(VAR_6, VAR_3->db_txn, &VAR_7, &VAR_8, 0));
}

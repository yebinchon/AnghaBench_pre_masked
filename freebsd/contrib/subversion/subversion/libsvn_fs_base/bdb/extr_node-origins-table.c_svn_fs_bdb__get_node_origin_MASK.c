
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_12__ ;


struct TYPE_14__ {int db_txn; } ;
typedef TYPE_1__ trail_t ;
struct TYPE_15__ {TYPE_3__* fsap_data; } ;
typedef TYPE_2__ svn_fs_t ;
typedef int svn_fs_id_t ;
typedef int svn_error_t ;
struct TYPE_16__ {TYPE_12__* node_origins; } ;
typedef TYPE_3__ base_fs_data_t ;
typedef int apr_pool_t ;
struct TYPE_17__ {int size; int data; } ;
struct TYPE_13__ {int (* get ) (TYPE_12__*,int ,int ,int ,int ) ;} ;
typedef TYPE_4__ DBT ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (TYPE_12__*,int ,int ,int ,int ) ;
 int * FUNC_1 (TYPE_2__*,char const*) ;
 int * FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*,char const*) ;
 int FUNC_5 (TYPE_4__*,int *) ;
 int FUNC_6 (TYPE_1__*,char*,char*) ;

svn_error_t *FUNC_7(const svn_fs_id_t **VAR_2,
                                         svn_fs_t *VAR_3,
                                         const char *VAR_4,
                                         trail_t *VAR_5,
                                         apr_pool_t *VAR_6)
{
  base_fs_data_t *VAR_7 = VAR_3->fsap_data;
  DBT VAR_8, VAR_9;
  int VAR_10;

  FUNC_6(VAR_5, "node-origins", "get");
  VAR_10 = VAR_7->node_origins->get(VAR_7->node_origins, VAR_5->db_txn,
                                  FUNC_4(&VAR_8, VAR_4),
                                  FUNC_3(&VAR_9), 0);
  FUNC_5(&VAR_9, VAR_6);

  if (VAR_10 == VAR_0)
    return FUNC_1(VAR_3, VAR_4);

  *VAR_2 = FUNC_2(VAR_9.data, VAR_9.size, VAR_6);
  return VAR_1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int db_txn; } ;
typedef TYPE_1__ trail_t ;
struct TYPE_10__ {TYPE_3__* fsap_data; } ;
typedef TYPE_2__ svn_fs_t ;
typedef int svn_error_t ;
struct TYPE_11__ {TYPE_7__* node_origins; } ;
typedef TYPE_3__ base_fs_data_t ;
typedef int apr_pool_t ;
struct TYPE_12__ {int (* del ) (TYPE_7__*,int ,int *,int ) ;} ;
typedef int DBT ;


 int * FUNC_0 (TYPE_2__*,int ,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_7__*,int ,int *,int ) ;
 int FUNC_3 (int *,char const*) ;
 int FUNC_4 (TYPE_1__*,char*,char*) ;

svn_error_t *FUNC_5(svn_fs_t *VAR_0,
                                            const char *VAR_1,
                                            trail_t *VAR_2,
                                            apr_pool_t *VAR_3)
{
  base_fs_data_t *VAR_4 = VAR_0->fsap_data;
  DBT VAR_5;

  FUNC_3(&VAR_5, VAR_1);
  FUNC_4(VAR_2, "node-origins", "del");
  return FUNC_0(VAR_0, FUNC_1("deleting entry from 'node-origins' table"),
                  VAR_4->node_origins->del(VAR_4->node_origins,
                                         VAR_2->db_txn, &VAR_5, 0));
}

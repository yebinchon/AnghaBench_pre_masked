
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int * db_txn; } ;
typedef TYPE_1__ trail_t ;
typedef int svn_skel_t ;
struct TYPE_10__ {TYPE_3__* fsap_data; } ;
typedef TYPE_2__ svn_fs_t ;
typedef int svn_fs_id_t ;
typedef int svn_error_t ;
typedef int node_revision_t ;
struct TYPE_11__ {TYPE_7__* nodes; int format; } ;
typedef TYPE_3__ base_fs_data_t ;
typedef int apr_pool_t ;
struct TYPE_12__ {int (* put ) (TYPE_7__*,int *,int ,int ,int ) ;} ;
typedef int DB_TXN ;
typedef int DBT ;


 int * FUNC_0 (TYPE_2__*,int ,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_7__*,int *,int ,int ,int ) ;
 int FUNC_4 (int *,int const*,int *) ;
 int FUNC_5 (int *,int *,int *) ;
 int FUNC_6 (TYPE_1__*,char*,char*) ;
 int FUNC_7 (int **,int *,int ,int *) ;

svn_error_t *
FUNC_8(svn_fs_t *VAR_0,
                              const svn_fs_id_t *VAR_1,
                              node_revision_t *VAR_2,
                              trail_t *VAR_3,
                              apr_pool_t *VAR_4)
{
  base_fs_data_t *VAR_5 = VAR_0->fsap_data;
  DB_TXN *VAR_6 = VAR_3->db_txn;
  DBT VAR_7, VAR_8;
  svn_skel_t *VAR_9;


  FUNC_2(FUNC_7(&VAR_9, VAR_2,
                                                  VAR_5->format, VAR_4));
  FUNC_6(VAR_3, "nodes", "put");
  return FUNC_0(VAR_0, FUNC_1("storing node revision"),
                  VAR_5->nodes->put(VAR_5->nodes, VAR_6,
                                  FUNC_4(&VAR_7, VAR_1, VAR_4),
                                  FUNC_5(&VAR_8, VAR_9,
                                                           VAR_4),
                                  0));
}

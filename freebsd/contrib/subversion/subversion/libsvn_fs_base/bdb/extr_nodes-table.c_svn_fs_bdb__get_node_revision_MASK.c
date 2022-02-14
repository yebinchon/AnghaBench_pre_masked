
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_12__ ;


struct TYPE_15__ {int db_txn; } ;
typedef TYPE_1__ trail_t ;
typedef int svn_skel_t ;
struct TYPE_16__ {TYPE_3__* fsap_data; } ;
typedef TYPE_2__ svn_fs_t ;
typedef int svn_fs_id_t ;
typedef int svn_error_t ;
typedef int node_revision_t ;
struct TYPE_17__ {TYPE_12__* nodes; } ;
typedef TYPE_3__ base_fs_data_t ;
typedef int apr_pool_t ;
struct TYPE_18__ {int size; int data; } ;
struct TYPE_14__ {int (* get ) (TYPE_12__*,int ,int ,int ,int ) ;} ;
typedef TYPE_4__ DBT ;


 int FUNC_0 (TYPE_2__*,int ,int) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int * VAR_1 ;
 int FUNC_3 (TYPE_12__*,int ,int ,int ,int ) ;
 int * FUNC_4 (TYPE_2__*,int const*) ;
 int FUNC_5 (TYPE_4__*,int const*,int *) ;
 int FUNC_6 (int **,int *,int *) ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (TYPE_4__*,int *) ;
 int FUNC_9 (TYPE_1__*,char*,char*) ;
 int * FUNC_10 (int ,int ,int *) ;

svn_error_t *
FUNC_11(node_revision_t **VAR_2,
                              svn_fs_t *VAR_3,
                              const svn_fs_id_t *VAR_4,
                              trail_t *VAR_5,
                              apr_pool_t *VAR_6)
{
  base_fs_data_t *VAR_7 = VAR_3->fsap_data;
  node_revision_t *VAR_8;
  svn_skel_t *VAR_9;
  int VAR_10;
  DBT VAR_11, VAR_12;

  FUNC_9(VAR_5, "nodes", "get");
  VAR_10 = VAR_7->nodes->get(VAR_7->nodes, VAR_5->db_txn,
                           FUNC_5(&VAR_11, VAR_4, VAR_6),
                           FUNC_7(&VAR_12),
                           0);
  FUNC_8(&VAR_12, VAR_6);


  if (VAR_10 == VAR_0)
    return FUNC_4(VAR_3, VAR_4);


  FUNC_2(FUNC_0(VAR_3, FUNC_1("reading node revision"), VAR_10));



  if (! VAR_2)
    return VAR_1;


  VAR_9 = FUNC_10(VAR_12.data, VAR_12.size, VAR_6);


  FUNC_2(FUNC_6(&VAR_8, VAR_9, VAR_6));
  *VAR_2 = VAR_8;
  return VAR_1;
}

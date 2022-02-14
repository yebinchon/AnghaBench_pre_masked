
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int svn_fs_t ;
typedef int svn_fs_id_t ;
typedef int svn_error_t ;
struct TYPE_7__ {int * predecessor_id; scalar_t__ is_fresh_txn_root; int created_path; int kind; } ;
typedef TYPE_1__ node_revision_t ;
struct TYPE_8__ {int * fresh_root_predecessor_id; int created_path; int kind; int * node_pool; int id; int * fs; } ;
typedef TYPE_2__ dag_node_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 TYPE_2__* FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (TYPE_1__**,TYPE_2__*) ;
 int FUNC_4 (int const*,int *) ;

svn_error_t *
FUNC_5(dag_node_t **VAR_1,
                        svn_fs_t *VAR_2,
                        const svn_fs_id_t *VAR_3,
                        apr_pool_t *VAR_4)
{
  dag_node_t *VAR_5;
  node_revision_t *VAR_6;


  VAR_5 = FUNC_1(VAR_4, sizeof(*VAR_5));
  VAR_5->fs = VAR_2;
  VAR_5->id = FUNC_4(VAR_3, VAR_4);


  VAR_5->node_pool = VAR_4;
  FUNC_0(FUNC_3(&VAR_6, VAR_5));


  VAR_5->kind = VAR_6->kind;
  VAR_5->created_path = FUNC_2(VAR_4, VAR_6->created_path);

  if (VAR_6->is_fresh_txn_root)
    VAR_5->fresh_root_predecessor_id = VAR_6->predecessor_id;
  else
    VAR_5->fresh_root_predecessor_id = ((void*)0);


  *VAR_1 = VAR_5;
  return VAR_0;
}

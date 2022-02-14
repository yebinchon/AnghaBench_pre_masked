
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int trail_t ;
typedef int svn_fs_t ;
typedef int svn_fs_id_t ;
typedef int svn_error_t ;
struct TYPE_6__ {int created_path; int kind; } ;
typedef TYPE_1__ node_revision_t ;
struct TYPE_7__ {int created_path; int kind; int id; int * fs; } ;
typedef TYPE_2__ dag_node_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 TYPE_2__* FUNC_1 (int *,int) ;
 int FUNC_2 (int const*,int *) ;
 int FUNC_3 (TYPE_1__**,int *,int const*,int *,int *) ;

svn_error_t *
FUNC_4(dag_node_t **VAR_1,
                          svn_fs_t *VAR_2,
                          const svn_fs_id_t *VAR_3,
                          trail_t *VAR_4,
                          apr_pool_t *VAR_5)
{
  dag_node_t *VAR_6;
  node_revision_t *VAR_7;


  VAR_6 = FUNC_1(VAR_5, sizeof(*VAR_6));
  VAR_6->fs = VAR_2;
  VAR_6->id = FUNC_2(VAR_3, VAR_5);


  FUNC_0(FUNC_3(&VAR_7, VAR_2, VAR_3, VAR_4, VAR_5));


  VAR_6->kind = VAR_7->kind;
  VAR_6->created_path = VAR_7->created_path;


  *VAR_1 = VAR_6;
  return VAR_0;
}

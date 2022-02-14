
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_fs_t ;
typedef int svn_error_t ;
struct TYPE_4__ {char* created_path; int * fresh_root_predecessor_id; int kind; int * node_pool; int id; int * fs; } ;
typedef TYPE_1__ dag_node_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 TYPE_1__* FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int *,int ,int *,int *) ;
 int VAR_1 ;

svn_error_t *
FUNC_3(dag_node_t **VAR_2,
                             svn_fs_t *VAR_3,
                             svn_revnum_t VAR_4,
                             apr_pool_t *VAR_5)
{
  dag_node_t *VAR_6;


  VAR_6 = FUNC_1(VAR_5, sizeof(*VAR_6));
  VAR_6->fs = VAR_3;
  FUNC_0(FUNC_2(&VAR_6->id, VAR_3, VAR_4, VAR_5, VAR_5));


  VAR_6->node_pool = VAR_5;


  VAR_6->kind = VAR_1;
  VAR_6->created_path = "/";
  VAR_6->fresh_root_predecessor_id = ((void*)0);


  *VAR_2 = VAR_6;
  return VAR_0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int len; int data; } ;
typedef TYPE_1__ svn_stringbuf_t ;
struct TYPE_8__ {int * copy_src_path; int copy_inherit; struct TYPE_8__* parent; int entry; int node; } ;
typedef TYPE_2__ svn_fs_x__dag_path_t ;
typedef int dag_node_t ;
typedef int apr_pool_t ;


 TYPE_2__* FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static svn_fs_x__dag_path_t *
FUNC_3(dag_node_t *VAR_1,
                 const svn_stringbuf_t *VAR_2,
                 svn_fs_x__dag_path_t *VAR_3,
                 apr_pool_t *VAR_4)
{
  svn_fs_x__dag_path_t *VAR_5
    = FUNC_0(VAR_4, sizeof(*VAR_5));
  if (VAR_1)
    VAR_5->node = FUNC_2(VAR_1, VAR_4);
  VAR_5->entry = FUNC_1(VAR_4, VAR_2->data, VAR_2->len);
  VAR_5->parent = VAR_3;
  VAR_5->copy_inherit = VAR_0;
  VAR_5->copy_src_path = ((void*)0);
  return VAR_5;
}

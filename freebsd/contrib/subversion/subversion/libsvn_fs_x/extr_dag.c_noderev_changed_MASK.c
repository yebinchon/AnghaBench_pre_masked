
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_4__ {int node_revision; int fs; } ;
typedef TYPE_1__ dag_node_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static svn_error_t *
FUNC_3(dag_node_t *VAR_1,
                apr_pool_t *VAR_2)
{
  FUNC_0(FUNC_1(VAR_1->fs, VAR_1->node_revision,
                                      VAR_2));
  FUNC_2(VAR_1);

  return VAR_0;
}

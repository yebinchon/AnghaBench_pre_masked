
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_node_kind_t ;
struct TYPE_5__ {TYPE_1__* node_revision; } ;
typedef TYPE_2__ dag_node_t ;
struct TYPE_4__ {int kind; } ;



svn_node_kind_t
FUNC_0(dag_node_t *VAR_0)
{
  return VAR_0->node_revision->kind;
}

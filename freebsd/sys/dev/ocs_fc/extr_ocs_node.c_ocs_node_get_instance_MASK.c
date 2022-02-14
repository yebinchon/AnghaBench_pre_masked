
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_7__ {size_t nodes_count; TYPE_3__** nodes; } ;
typedef TYPE_1__ ocs_xport_t ;
struct TYPE_8__ {TYPE_1__* xport; } ;
typedef TYPE_2__ ocs_t ;
struct TYPE_9__ {scalar_t__ attached; } ;
typedef TYPE_3__ ocs_node_t ;


 int FUNC_0 (TYPE_2__*,char*,size_t) ;

ocs_node_t *
FUNC_1(ocs_t *VAR_0, uint32_t VAR_1)
{
 ocs_xport_t *VAR_2 = VAR_0->xport;
 ocs_node_t *VAR_3 = ((void*)0);

 if (VAR_1 >= (VAR_2->nodes_count)) {
  FUNC_0(VAR_0, "invalid index: %d\n", VAR_1);
  return ((void*)0);
 }
 VAR_3 = VAR_2->nodes[VAR_1];
 return VAR_3->attached ? VAR_3 : ((void*)0);
}

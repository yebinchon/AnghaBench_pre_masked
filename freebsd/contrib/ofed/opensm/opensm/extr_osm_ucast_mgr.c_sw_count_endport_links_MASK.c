
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int num_ports; scalar_t__ endport_links; int p_node; } ;
typedef TYPE_3__ osm_switch_t ;
struct TYPE_10__ {TYPE_2__* p_remote_physp; } ;
typedef TYPE_4__ osm_physp_t ;
struct TYPE_8__ {TYPE_1__* p_node; } ;
struct TYPE_7__ {int sw; } ;


 TYPE_4__* FUNC_0 (int ,int) ;

__attribute__((used)) static void FUNC_1(osm_switch_t * VAR_0)
{
 osm_physp_t *VAR_1;
 int VAR_2;

 VAR_0->endport_links = 0;
 for (VAR_2 = 1; VAR_2 < VAR_0->num_ports; VAR_2++) {
  VAR_1 = FUNC_0(VAR_0->p_node, VAR_2);
  if (VAR_1 && VAR_1->p_remote_physp && !VAR_1->p_remote_physp->p_node->sw)
   VAR_0->endport_links++;
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_10__ ;


struct TYPE_17__ {TYPE_10__* p_subn; int port_order_list; } ;
typedef TYPE_4__ osm_ucast_mgr_t ;
struct TYPE_18__ {int num_ports; int p_node; } ;
typedef TYPE_5__ osm_switch_t ;
struct TYPE_19__ {int flag; int use_scatter; int list_item; } ;
typedef TYPE_6__ osm_port_t ;
struct TYPE_20__ {TYPE_2__* p_remote_physp; } ;
typedef TYPE_7__ osm_physp_t ;
struct TYPE_16__ {int scatter_ports; } ;
struct TYPE_15__ {int port_guid; TYPE_1__* p_node; } ;
struct TYPE_14__ {int sw; } ;
struct TYPE_13__ {TYPE_3__ opt; } ;


 int FUNC_0 (int *,int *) ;
 TYPE_6__* FUNC_1 (TYPE_10__*,int ) ;
 TYPE_7__* FUNC_2 (int ,int) ;

__attribute__((used)) static void FUNC_3(osm_switch_t * VAR_0,
       osm_ucast_mgr_t * VAR_1)
{
 osm_port_t *VAR_2;
 osm_physp_t *VAR_3;
 int VAR_4;

 for (VAR_4 = 1; VAR_4 < VAR_0->num_ports; VAR_4++) {
  VAR_3 = FUNC_2(VAR_0->p_node, VAR_4);
  if (VAR_3 && VAR_3->p_remote_physp && !VAR_3->p_remote_physp->p_node->sw) {
   VAR_2 = FUNC_1(VAR_1->p_subn,
          VAR_3->p_remote_physp->
          port_guid);
   if (!VAR_2 || VAR_2->flag)
    continue;
   FUNC_0(&VAR_1->port_order_list,
          &VAR_2->list_item);
   VAR_2->flag = 1;
   VAR_2->use_scatter = VAR_1->p_subn->opt.scatter_ports;
  }
 }
}

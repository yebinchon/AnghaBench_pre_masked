
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int port_order_list; TYPE_2__* p_subn; } ;
typedef TYPE_3__ osm_ucast_mgr_t ;
struct TYPE_8__ {scalar_t__ flag; int list_item; int use_scatter; } ;
typedef TYPE_4__ osm_port_t ;
typedef int cl_map_item_t ;
struct TYPE_5__ {int scatter_ports; } ;
struct TYPE_6__ {TYPE_1__ opt; } ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static void FUNC_1(cl_map_item_t * VAR_0, void *VAR_1)
{
 osm_port_t *VAR_2 = (osm_port_t *) VAR_0;
 osm_ucast_mgr_t *VAR_3 = VAR_1;

 if (!VAR_2->flag) {
  VAR_2->use_scatter = VAR_3->p_subn->opt.scatter_ports;
  FUNC_0(&VAR_3->port_order_list, &VAR_2->list_item);
 } else
  VAR_2->flag = 0;
}

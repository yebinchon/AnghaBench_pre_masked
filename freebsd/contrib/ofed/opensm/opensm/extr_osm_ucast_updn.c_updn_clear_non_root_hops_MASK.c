
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {TYPE_1__* p_osm; } ;
typedef TYPE_4__ updn_t ;
struct updn_node {scalar_t__ rank; } ;
struct TYPE_14__ {unsigned int num_hops; int num_ports; scalar_t__* hops; } ;
typedef TYPE_5__ osm_switch_t ;
struct TYPE_15__ {TYPE_3__* p_node; } ;
typedef TYPE_6__ osm_port_t ;
struct TYPE_12__ {TYPE_2__* sw; } ;
struct TYPE_11__ {scalar_t__ priv; } ;
struct TYPE_10__ {int subn; } ;


 int FUNC_0 (scalar_t__,int,int ) ;
 TYPE_6__* FUNC_1 (int *,unsigned int) ;

__attribute__((used)) static void FUNC_2(updn_t * VAR_0, osm_switch_t * VAR_1)
{
 osm_port_t *VAR_2;
 unsigned VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->num_hops; VAR_3++)
  if (VAR_1->hops[VAR_3]) {
   VAR_2 = FUNC_1(&VAR_0->p_osm->subn, VAR_3);
   if (!VAR_2 || !VAR_2->p_node->sw
       || ((struct updn_node *)VAR_2->p_node->sw->priv)->
       rank != 0)
    FUNC_0(VAR_1->hops[VAR_3], 0xff, VAR_1->num_ports);
  }
}

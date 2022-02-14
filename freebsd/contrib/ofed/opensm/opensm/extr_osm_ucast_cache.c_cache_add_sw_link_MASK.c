
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_16__ {int p_log; int cache_sw_tbl; } ;
typedef TYPE_3__ osm_ucast_mgr_t ;
struct TYPE_17__ {size_t port_num; TYPE_7__* p_node; } ;
typedef TYPE_4__ osm_physp_t ;
struct TYPE_18__ {size_t num_ports; TYPE_2__* ports; int map_item; } ;
typedef TYPE_5__ cache_switch_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_19__ {TYPE_1__* sw; } ;
struct TYPE_15__ {scalar_t__ remote_lid_ho; scalar_t__ is_leaf; } ;
struct TYPE_14__ {int num_ports; } ;


 int FUNC_0 (int ,int ,char*,...) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 TYPE_5__* FUNC_3 (TYPE_3__*,scalar_t__) ;
 TYPE_5__* FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (TYPE_5__*) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int *,scalar_t__,int *) ;
 int FUNC_8 (TYPE_7__*,int ) ;
 int FUNC_9 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_10(osm_ucast_mgr_t * VAR_2, osm_physp_t *VAR_3,
         uint16_t VAR_4, boolean_t VAR_5)
{
 cache_switch_t *VAR_6;
 uint16_t VAR_7 = FUNC_6(FUNC_8(VAR_3->p_node, 0));

 FUNC_1(VAR_2->p_log);

 if (!VAR_7 || !VAR_4 || !VAR_3->port_num)
  goto Exit;

 FUNC_0(VAR_2->p_log, VAR_0,
  "Caching switch port: lid %u [port %u] -> lid %u (%s)\n",
  VAR_7, VAR_3->port_num, VAR_4, (VAR_5) ? "CA/RTR" : "SW");

 VAR_6 = FUNC_3(VAR_2, VAR_7);
 if (!VAR_6) {
  VAR_6 = FUNC_4(VAR_7, VAR_3->p_node->sw->num_ports);
  if (!VAR_6) {
   FUNC_0(VAR_2->p_log, VAR_1,
    "ERR AD01: Out of memory - cache is invalid\n");
   FUNC_9(VAR_2);
   goto Exit;
  }
  FUNC_7(&VAR_2->cache_sw_tbl, VAR_7,
          &VAR_6->map_item);
 }

 if (VAR_3->port_num >= VAR_6->num_ports) {
  FUNC_0(VAR_2->p_log, VAR_1,
   "ERR AD02: Wrong switch? - cache is invalid\n");
  FUNC_9(VAR_2);
  goto Exit;
 }

 if (VAR_5)
  FUNC_5(VAR_6);

 if (VAR_6->ports[VAR_3->port_num].remote_lid_ho == 0) {

  VAR_6->ports[VAR_3->port_num].remote_lid_ho = VAR_4;
  VAR_6->ports[VAR_3->port_num].is_leaf = VAR_5;
 }
Exit:
 FUNC_2(VAR_2->p_log);
}

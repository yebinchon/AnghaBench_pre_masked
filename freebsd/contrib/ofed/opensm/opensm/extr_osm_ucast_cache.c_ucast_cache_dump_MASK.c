
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int p_log; int cache_sw_tbl; } ;
typedef TYPE_2__ osm_ucast_mgr_t ;
struct TYPE_9__ {unsigned int num_ports; TYPE_1__* ports; scalar_t__ dropped; int map_item; } ;
typedef TYPE_3__ cache_switch_t ;
struct TYPE_7__ {char* remote_lid_ho; scalar_t__ is_leaf; } ;


 int FUNC_0 (int ,int ,char*,...) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 unsigned int FUNC_4 (TYPE_3__*) ;
 scalar_t__ FUNC_5 (TYPE_3__*) ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(osm_ucast_mgr_t * VAR_1)
{
 cache_switch_t *VAR_2;
 unsigned VAR_3;

 FUNC_1(VAR_1->p_log);

 if (!FUNC_3(VAR_1->p_log, VAR_0))
  goto Exit;

 FUNC_0(VAR_1->p_log, VAR_0,
  "Dumping missing nodes/links as logged by unicast cache:\n");
 for (VAR_2 = (cache_switch_t *) FUNC_7(&VAR_1->cache_sw_tbl);
      VAR_2 != (cache_switch_t *) FUNC_6(&VAR_1->cache_sw_tbl);
      VAR_2 = (cache_switch_t *) FUNC_8(&VAR_2->map_item)) {

  FUNC_0(VAR_1->p_log, VAR_0,
   "\t Switch lid %u %s%s\n",
   FUNC_4(VAR_2),
   (FUNC_5(VAR_2)) ? "[leaf switch] " : "",
   (VAR_2->dropped) ? "[whole switch missing]" : "");

  for (VAR_3 = 1; VAR_3 < VAR_2->num_ports; VAR_3++)
   if (VAR_2->ports[VAR_3].remote_lid_ho > 0)
    FUNC_0(VAR_1->p_log,
     VAR_0,
     "\t     - port %u -> lid %u %s\n",
     VAR_3, VAR_2->ports[VAR_3].remote_lid_ho,
     (VAR_2->ports[VAR_3].is_leaf) ?
     "[remote node is leaf]" : "");
 }
Exit:
 FUNC_2(VAR_1->p_log);
}

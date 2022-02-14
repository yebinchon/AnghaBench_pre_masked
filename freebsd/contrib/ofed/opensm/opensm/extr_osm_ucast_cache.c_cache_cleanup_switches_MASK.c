
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int cache_sw_tbl; int cache_valid; } ;
typedef TYPE_2__ osm_ucast_mgr_t ;
struct TYPE_8__ {unsigned int num_ports; int map_item; TYPE_1__* ports; } ;
typedef TYPE_3__ cache_switch_t ;
typedef int boolean_t ;
struct TYPE_6__ {scalar_t__ remote_lid_ho; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static void FUNC_5(osm_ucast_mgr_t * VAR_2)
{
 cache_switch_t *VAR_3;
 cache_switch_t *VAR_4;
 unsigned VAR_5;
 boolean_t VAR_6;

 if (!VAR_2->cache_valid)
  return;

 VAR_4 = (cache_switch_t *) FUNC_2(&VAR_2->cache_sw_tbl);
 while (VAR_4 !=
        (cache_switch_t *) FUNC_1(&VAR_2->cache_sw_tbl)) {
  VAR_3 = VAR_4;
  VAR_4 = (cache_switch_t *) FUNC_3(&VAR_3->map_item);

  VAR_6 = VAR_0;
  for (VAR_5 = 1; VAR_5 < VAR_3->num_ports; VAR_5++)
   if (VAR_3->ports[VAR_5].remote_lid_ho)
    VAR_6 = VAR_1;

  if (!VAR_6) {
   FUNC_4(&VAR_2->cache_sw_tbl,
         &VAR_3->map_item);
   FUNC_0(VAR_3);
  }
 }
}

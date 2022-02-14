
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int p_log; int cache_sw_tbl; scalar_t__ cache_valid; } ;
typedef TYPE_1__ osm_ucast_mgr_t ;
struct TYPE_6__ {int map_item; } ;
typedef TYPE_2__ cache_switch_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void FUNC_8(osm_ucast_mgr_t * VAR_2)
{
 cache_switch_t *VAR_3;
 cache_switch_t *VAR_4;

 FUNC_1(VAR_2->p_log);

 if (!VAR_2->cache_valid)
  goto Exit;

 VAR_2->cache_valid = VAR_0;

 VAR_4 = (cache_switch_t *) FUNC_5(&VAR_2->cache_sw_tbl);
 while (VAR_4 !=
        (cache_switch_t *) FUNC_4(&VAR_2->cache_sw_tbl)) {
  VAR_3 = VAR_4;
  VAR_4 = (cache_switch_t *) FUNC_6(&VAR_3->map_item);
  FUNC_3(VAR_3);
 }
 FUNC_7(&VAR_2->cache_sw_tbl);

 FUNC_0(VAR_2->p_log, VAR_1, "Unicast Cache invalidated\n");
Exit:
 FUNC_2(VAR_2->p_log);
}

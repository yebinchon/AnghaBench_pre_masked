
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_3__ {int cache_sw_tbl; } ;
typedef TYPE_1__ osm_ucast_mgr_t ;
typedef int cache_switch_t ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int ) ;

__attribute__((used)) static cache_switch_t *FUNC_2(osm_ucast_mgr_t * VAR_0, uint16_t VAR_1)
{
 cache_switch_t *VAR_2 = (cache_switch_t *)
     FUNC_1(&VAR_0->cache_sw_tbl, VAR_1);
 if (VAR_2 == (cache_switch_t *)
     FUNC_0(&VAR_0->cache_sw_tbl))
  VAR_2 = ((void*)0);

 return VAR_2;
}

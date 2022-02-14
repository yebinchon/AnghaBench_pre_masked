
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int across_to_list; int across_from_list; int group_list; } ;
typedef TYPE_1__ osm_qos_sl2vl_scope_t ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (int *,int) ;

osm_qos_sl2vl_scope_t *FUNC_2()
{
 osm_qos_sl2vl_scope_t *VAR_0 =
     (osm_qos_sl2vl_scope_t *) FUNC_0(1, sizeof(osm_qos_sl2vl_scope_t));
 if (VAR_0) {
  FUNC_1(&VAR_0->group_list, 10);
  FUNC_1(&VAR_0->across_from_list, 10);
  FUNC_1(&VAR_0->across_to_list, 10);
 }
 return VAR_0;
}

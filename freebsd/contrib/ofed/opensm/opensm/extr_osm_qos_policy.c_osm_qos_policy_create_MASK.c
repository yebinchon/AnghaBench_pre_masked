
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int osm_subn_t ;
struct TYPE_4__ {int * p_subn; int qos_match_rules; int qos_levels; int sl2vl_tables; int vlarb_tables; int port_groups; } ;
typedef TYPE_1__ osm_qos_policy_t ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;

osm_qos_policy_t * FUNC_4(osm_subn_t * VAR_0)
{
 osm_qos_policy_t * VAR_1 = (osm_qos_policy_t *)FUNC_1(1, sizeof(osm_qos_policy_t));
 if (!VAR_1)
  return ((void*)0);

 FUNC_2(&VAR_1->port_groups);
 FUNC_3(&VAR_1->port_groups, 10);

 FUNC_2(&VAR_1->vlarb_tables);
 FUNC_3(&VAR_1->vlarb_tables, 10);

 FUNC_2(&VAR_1->sl2vl_tables);
 FUNC_3(&VAR_1->sl2vl_tables, 10);

 FUNC_2(&VAR_1->qos_levels);
 FUNC_3(&VAR_1->qos_levels, 10);

 FUNC_2(&VAR_1->qos_match_rules);
 FUNC_3(&VAR_1->qos_match_rules, 10);

 VAR_1->p_subn = VAR_0;
 FUNC_0(VAR_1);

 return VAR_1;
}

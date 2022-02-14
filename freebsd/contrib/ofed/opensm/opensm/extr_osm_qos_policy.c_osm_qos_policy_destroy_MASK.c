
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int osm_qos_vlarb_scope_t ;
typedef int osm_qos_sl2vl_scope_t ;
typedef int osm_qos_port_group_t ;
struct TYPE_4__ {scalar_t__ p_node_hash; int qos_match_rules; int qos_levels; int sl2vl_tables; int vlarb_tables; int port_groups; } ;
typedef TYPE_1__ osm_qos_policy_t ;
typedef int osm_qos_match_rule_t ;
typedef int osm_qos_level_t ;
typedef scalar_t__ cl_list_iterator_t ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (scalar_t__) ;

void FUNC_13(osm_qos_policy_t * VAR_0)
{
 cl_list_iterator_t VAR_1;
 osm_qos_port_group_t *VAR_2 = ((void*)0);
 osm_qos_vlarb_scope_t *VAR_3 = ((void*)0);
 osm_qos_sl2vl_scope_t *VAR_4 = ((void*)0);
 osm_qos_level_t *VAR_5 = ((void*)0);
 osm_qos_match_rule_t *VAR_6 = ((void*)0);

 if (!VAR_0)
  return;

 VAR_1 = FUNC_2(&VAR_0->port_groups);
 while (VAR_1 != FUNC_1(&VAR_0->port_groups)) {
  VAR_2 =
      (osm_qos_port_group_t *) FUNC_4(VAR_1);
  if (VAR_2)
   FUNC_8(VAR_2);
  VAR_1 = FUNC_3(VAR_1);
 }
 FUNC_5(&VAR_0->port_groups);
 FUNC_0(&VAR_0->port_groups);

 VAR_1 = FUNC_2(&VAR_0->vlarb_tables);
 while (VAR_1 != FUNC_1(&VAR_0->vlarb_tables)) {
  VAR_3 =
      (osm_qos_vlarb_scope_t *) FUNC_4(VAR_1);
  if (VAR_3)
   FUNC_11(VAR_3);
  VAR_1 = FUNC_3(VAR_1);
 }
 FUNC_5(&VAR_0->vlarb_tables);
 FUNC_0(&VAR_0->vlarb_tables);

 VAR_1 = FUNC_2(&VAR_0->sl2vl_tables);
 while (VAR_1 != FUNC_1(&VAR_0->sl2vl_tables)) {
  VAR_4 =
      (osm_qos_sl2vl_scope_t *) FUNC_4(VAR_1);
  if (VAR_4)
   FUNC_10(VAR_4);
  VAR_1 = FUNC_3(VAR_1);
 }
 FUNC_5(&VAR_0->sl2vl_tables);
 FUNC_0(&VAR_0->sl2vl_tables);

 VAR_1 = FUNC_2(&VAR_0->qos_levels);
 while (VAR_1 != FUNC_1(&VAR_0->qos_levels)) {
  VAR_5 = (osm_qos_level_t *) FUNC_4(VAR_1);
  if (VAR_5)
   FUNC_9(VAR_5);
  VAR_1 = FUNC_3(VAR_1);
 }
 FUNC_5(&VAR_0->qos_levels);
 FUNC_0(&VAR_0->qos_levels);

 VAR_1 = FUNC_2(&VAR_0->qos_match_rules);
 while (VAR_1 != FUNC_1(&VAR_0->qos_match_rules)) {
  VAR_6 =
      (osm_qos_match_rule_t *) FUNC_4(VAR_1);
  if (VAR_6)
   FUNC_7(VAR_6);
  VAR_1 = FUNC_3(VAR_1);
 }
 FUNC_5(&VAR_0->qos_match_rules);
 FUNC_0(&VAR_0->qos_match_rules);

 if (VAR_0->p_node_hash)
  FUNC_12(VAR_0->p_node_hash);

 FUNC_6(VAR_0);

 VAR_0 = ((void*)0);
}

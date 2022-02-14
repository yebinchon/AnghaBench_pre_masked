
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int st_data_t ;
struct TYPE_6__ {int p_node_hash; TYPE_1__* p_subn; } ;
typedef TYPE_2__ osm_qos_policy_t ;
struct TYPE_7__ {scalar_t__ print_desc; int map_item; } ;
typedef TYPE_3__ osm_node_t ;
typedef int cl_qmap_t ;
struct TYPE_5__ {int node_guid_tbl; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ,int ,int *) ;

__attribute__((used)) static void
FUNC_8(osm_qos_policy_t * VAR_0)
{
 osm_node_t * VAR_1;
 cl_qmap_t * VAR_2 = &VAR_0->p_subn->node_guid_tbl;

 VAR_0->p_node_hash = FUNC_5();
 FUNC_0(VAR_0->p_node_hash);

 if (!VAR_2 || !FUNC_1(VAR_2))
  return;

 for (VAR_1 = (osm_node_t *) FUNC_3(VAR_2);
      VAR_1 != (osm_node_t *) FUNC_2(VAR_2);
      VAR_1 = (osm_node_t *) FUNC_4(&VAR_1->map_item)) {
  if (!FUNC_7(VAR_0->p_node_hash,
         (st_data_t)VAR_1->print_desc, ((void*)0)))
   FUNC_6(VAR_0->p_node_hash,
      (st_data_t)VAR_1->print_desc,
      (st_data_t)VAR_1);
 }
}

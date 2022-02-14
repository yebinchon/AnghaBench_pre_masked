
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {TYPE_7__* p_node; } ;
typedef TYPE_2__ osm_switch_t ;
struct TYPE_12__ {scalar_t__ lid; int map_item; } ;
typedef TYPE_3__ ftree_sw_t ;
struct TYPE_13__ {scalar_t__ lft_max_lid; int sw_tbl; } ;
typedef TYPE_4__ ftree_fabric_t ;
struct TYPE_10__ {int node_guid; } ;
struct TYPE_14__ {TYPE_1__ node_info; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,int ,int *) ;
 scalar_t__ FUNC_2 (TYPE_7__*) ;
 TYPE_3__* FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_4(ftree_fabric_t * VAR_1, osm_switch_t * VAR_2)
{
 ftree_sw_t *VAR_3;

 FUNC_0(FUNC_2(VAR_2->p_node) == VAR_0);

 VAR_3 = FUNC_3(VAR_2);
 if (!VAR_3)
  return;

 FUNC_1(&VAR_1->sw_tbl, VAR_2->p_node->node_info.node_guid,
         &VAR_3->map_item);


 if (VAR_3->lid > VAR_1->lft_max_lid)
  VAR_1->lft_max_lid = VAR_3->lid;
}

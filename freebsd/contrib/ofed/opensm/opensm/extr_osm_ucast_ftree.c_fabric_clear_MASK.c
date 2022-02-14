
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int item; } ;
typedef TYPE_1__ name_map_item_t ;
struct TYPE_12__ {int map_item; } ;
typedef TYPE_2__ ftree_sw_tbl_element_t ;
struct TYPE_13__ {int map_item; } ;
typedef TYPE_3__ ftree_sw_t ;
struct TYPE_14__ {int map_item; } ;
typedef TYPE_4__ ftree_hca_t ;
struct TYPE_15__ {scalar_t__ leaf_switches_num; int fabric_built; TYPE_1__* leaf_switches; scalar_t__ lft_max_lid; scalar_t__ max_cn_per_leaf; scalar_t__ max_switch_rank; scalar_t__ leaf_switch_rank; scalar_t__ ca_ports; scalar_t__ cn_num; int io_guid_tbl; int cn_guid_tbl; int sw_by_tuple_tbl; int sw_tbl; int hca_tbl; } ;
typedef TYPE_5__ ftree_fabric_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_8(ftree_fabric_t * VAR_1)
{
 ftree_hca_t *VAR_2;
 ftree_hca_t *VAR_3;
 ftree_sw_t *VAR_4;
 ftree_sw_t *VAR_5;
 ftree_sw_tbl_element_t *VAR_6;
 ftree_sw_tbl_element_t *VAR_7;
 name_map_item_t *VAR_8, *VAR_9;

 if (!VAR_1)
  return;



 VAR_3 = (ftree_hca_t *) FUNC_1(&VAR_1->hca_tbl);
 while (VAR_3 != (ftree_hca_t *) FUNC_0(&VAR_1->hca_tbl)) {
  VAR_2 = VAR_3;
  VAR_3 = (ftree_hca_t *) FUNC_2(&VAR_2->map_item);
  FUNC_5(VAR_2);
 }
 FUNC_3(&VAR_1->hca_tbl);



 VAR_5 = (ftree_sw_t *) FUNC_1(&VAR_1->sw_tbl);
 while (VAR_5 != (ftree_sw_t *) FUNC_0(&VAR_1->sw_tbl)) {
  VAR_4 = VAR_5;
  VAR_5 = (ftree_sw_t *) FUNC_2(&VAR_4->map_item);
  FUNC_6(VAR_4);
 }
 FUNC_3(&VAR_1->sw_tbl);



 VAR_7 =
     (ftree_sw_tbl_element_t *) FUNC_1(&VAR_1->sw_by_tuple_tbl);
 while (VAR_7 != (ftree_sw_tbl_element_t *)
        FUNC_0(&VAR_1->sw_by_tuple_tbl)) {
  VAR_6 = VAR_7;
  VAR_7 = (ftree_sw_tbl_element_t *)
      FUNC_2(&VAR_6->map_item);
  FUNC_7(VAR_6);
 }
 FUNC_3(&VAR_1->sw_by_tuple_tbl);


 VAR_9 =
     (name_map_item_t *) FUNC_1(&VAR_1->cn_guid_tbl);
 while (VAR_9 !=
        (name_map_item_t *) FUNC_0(&VAR_1->cn_guid_tbl)) {
  VAR_8 = VAR_9;
  VAR_9 =
      (name_map_item_t *) FUNC_2(&VAR_8->item);
  FUNC_4(VAR_8);
 }
 FUNC_3(&VAR_1->cn_guid_tbl);


 VAR_9 =
     (name_map_item_t *) FUNC_1(&VAR_1->io_guid_tbl);
 while (VAR_9 !=
        (name_map_item_t *) FUNC_0(&VAR_1->io_guid_tbl)) {
  VAR_8 = VAR_9;
  VAR_9 =
      (name_map_item_t *) FUNC_2(&VAR_8->item);
  FUNC_4(VAR_8);
 }
 FUNC_3(&VAR_1->io_guid_tbl);


 if ((VAR_1->leaf_switches_num > 0) && (VAR_1->leaf_switches))
  FUNC_4(VAR_1->leaf_switches);

 VAR_1->leaf_switches_num = 0;
 VAR_1->cn_num = 0;
 VAR_1->ca_ports = 0;
 VAR_1->leaf_switch_rank = 0;
 VAR_1->max_switch_rank = 0;
 VAR_1->max_cn_per_leaf = 0;
 VAR_1->lft_max_lid = 0;
 VAR_1->leaf_switches = ((void*)0);
 VAR_1->fabric_built = VAR_0;

}

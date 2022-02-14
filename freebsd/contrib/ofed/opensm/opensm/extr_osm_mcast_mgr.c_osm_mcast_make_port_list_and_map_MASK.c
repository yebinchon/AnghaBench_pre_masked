
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {TYPE_7__* port; int mcm_port_tbl; } ;
typedef TYPE_1__ osm_mgrp_t ;
struct TYPE_11__ {int mgrp_list; } ;
typedef TYPE_2__ osm_mgrp_box_t ;
typedef TYPE_1__ osm_mcm_port_t ;
struct TYPE_12__ {int map_item; int list_item; } ;
typedef TYPE_4__ osm_mcast_work_obj_t ;
typedef int cl_qmap_t ;
typedef int cl_qlist_t ;
typedef int cl_map_item_t ;
typedef int cl_list_item_t ;
struct TYPE_13__ {int guid; } ;


 TYPE_1__* FUNC_0 (int *,TYPE_1__*,int *) ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int * FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;
 int * FUNC_7 (int *,int ) ;
 int * FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int ,int *) ;
 int * FUNC_11 (int *) ;
 TYPE_4__* FUNC_12 (TYPE_7__*) ;

int FUNC_13(cl_qlist_t * VAR_0, cl_qmap_t * VAR_1,
         osm_mgrp_box_t * VAR_2)
{
 cl_map_item_t *VAR_3;
 cl_list_item_t *VAR_4;
 osm_mgrp_t *VAR_5;
 osm_mcm_port_t *VAR_6;
 osm_mcast_work_obj_t *VAR_7;

 FUNC_9(VAR_1);
 FUNC_3(VAR_0);

 for (VAR_4 = FUNC_2(&VAR_2->mgrp_list);
      VAR_4 != FUNC_1(&VAR_2->mgrp_list);
      VAR_4 = FUNC_5(VAR_4)) {
  VAR_5 = FUNC_0(VAR_4, VAR_5, VAR_4);
  for (VAR_3 = FUNC_8(&VAR_5->mcm_port_tbl);
       VAR_3 != FUNC_6(&VAR_5->mcm_port_tbl);
       VAR_3 = FUNC_11(VAR_3)) {


   VAR_6 = FUNC_0(VAR_3, VAR_6, VAR_3);
   if (FUNC_7(VAR_1, VAR_6->port->guid) !=
       FUNC_6(VAR_1))
    continue;
   VAR_7 = FUNC_12(VAR_6->port);
   if (!VAR_7)
    return -1;
   FUNC_4(VAR_0, &VAR_7->list_item);
   FUNC_10(VAR_1, VAR_6->port->guid,
           &VAR_7->map_item);
  }
 }
 return 0;
}

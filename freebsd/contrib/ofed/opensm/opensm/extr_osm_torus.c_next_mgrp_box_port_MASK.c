
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int osm_port_t ;
struct TYPE_7__ {int * port; int mcm_port_tbl; } ;
typedef TYPE_1__ osm_mgrp_t ;
struct TYPE_8__ {int mgrp_list; } ;
typedef TYPE_2__ osm_mgrp_box_t ;
typedef TYPE_1__ osm_mcm_port_t ;
typedef int cl_map_item_t ;
typedef int cl_list_item_t ;


 TYPE_1__* FUNC_0 (int *,TYPE_1__*,int ) ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static
osm_port_t *FUNC_7(osm_mgrp_box_t *VAR_2,
          cl_list_item_t **VAR_3,
          cl_map_item_t **VAR_4)
{
 osm_mgrp_t *VAR_5;
 osm_mcm_port_t *VAR_6;
 osm_port_t *VAR_7 = ((void*)0);
 cl_map_item_t *VAR_8 = *VAR_4;
 cl_list_item_t *VAR_9 = *VAR_3;

next_mgrp:
 if (!VAR_9)
  VAR_9 = FUNC_2(&VAR_2->mgrp_list);
 if (VAR_9 == FUNC_1(&VAR_2->mgrp_list)) {
  VAR_9 = ((void*)0);
  goto out;
 }
 VAR_5 = FUNC_0(VAR_9, VAR_5, VAR_0);

 if (!VAR_8)
  VAR_8 = FUNC_5(&VAR_5->mcm_port_tbl);
 if (VAR_8 == FUNC_4(&VAR_5->mcm_port_tbl)) {
  VAR_8 = ((void*)0);
  VAR_9 = FUNC_3(VAR_9);
  goto next_mgrp;
 }
 VAR_6 = FUNC_0(VAR_8, VAR_6, VAR_1);
 VAR_8 = FUNC_6(VAR_8);
 VAR_7 = VAR_6->port;
out:
 *VAR_3 = VAR_9;
 *VAR_4 = VAR_8;
 return VAR_7;
}

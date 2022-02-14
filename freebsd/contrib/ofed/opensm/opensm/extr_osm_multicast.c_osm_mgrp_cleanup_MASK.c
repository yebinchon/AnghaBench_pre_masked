
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_20__ {TYPE_3__* p_osm; int ** mboxes; int mgrp_mgid_tbl; } ;
typedef TYPE_4__ osm_subn_t ;
struct TYPE_21__ {int mlid; int list_item; int map_item; scalar_t__ well_known; int mcm_port_tbl; int mcm_alias_port_tbl; scalar_t__ full_members; } ;
typedef TYPE_5__ osm_mgrp_t ;
struct TYPE_22__ {int mgrp_list; } ;
typedef TYPE_6__ osm_mgrp_box_t ;
struct TYPE_23__ {int list_item; TYPE_1__* port; int map_item; } ;
typedef TYPE_7__ osm_mcm_port_t ;
struct TYPE_24__ {int map_item; } ;
typedef TYPE_8__ osm_mcm_alias_guid_t ;
struct TYPE_18__ {int dirty; } ;
struct TYPE_19__ {TYPE_2__ sa; } ;
struct TYPE_17__ {int mcm_list; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 size_t FUNC_2 (int ) ;
 int FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (TYPE_5__*) ;
 int FUNC_8 (TYPE_6__*) ;
 TYPE_6__* FUNC_9 (TYPE_4__*,int ) ;
 int FUNC_10 (TYPE_8__**) ;
 int FUNC_11 (TYPE_7__*) ;

void FUNC_12(osm_subn_t * VAR_2, osm_mgrp_t * VAR_3)
{
 osm_mgrp_box_t *VAR_4;
 osm_mcm_alias_guid_t *VAR_5;
 osm_mcm_port_t *VAR_6;

 if (VAR_3->full_members)
  return;

 while (FUNC_4(&VAR_3->mcm_alias_port_tbl)) {
  VAR_5 = (osm_mcm_alias_guid_t *) FUNC_5(&VAR_3->mcm_alias_port_tbl);
  FUNC_6(&VAR_3->mcm_alias_port_tbl, &VAR_5->map_item);
  FUNC_10(&VAR_5);
 }

 while (FUNC_4(&VAR_3->mcm_port_tbl)) {
  VAR_6 = (osm_mcm_port_t *) FUNC_5(&VAR_3->mcm_port_tbl);
  FUNC_6(&VAR_3->mcm_port_tbl, &VAR_6->map_item);
  FUNC_3(&VAR_6->port->mcm_list,
         &VAR_6->list_item);
  FUNC_11(VAR_6);
 }

 if (VAR_3->well_known)
  return;

 FUNC_0(&VAR_2->mgrp_mgid_tbl, &VAR_3->map_item);

 VAR_4 = FUNC_9(VAR_2, VAR_3->mlid);
 FUNC_3(&VAR_4->mgrp_list, &VAR_3->list_item);
 if (FUNC_1(&VAR_4->mgrp_list)) {
  VAR_2->mboxes[FUNC_2(VAR_3->mlid) - VAR_0] = ((void*)0);
  FUNC_8(VAR_4);
 }
 FUNC_7(VAR_3);

 VAR_2->p_osm->sa.dirty = VAR_1;
}

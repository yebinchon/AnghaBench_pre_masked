
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int osm_subn_t ;
typedef int osm_port_t ;
struct TYPE_10__ {int mcm_alias_port_tbl; } ;
typedef TYPE_2__ osm_mgrp_t ;
struct TYPE_11__ {TYPE_1__* p_base_mcm_port; int map_item; } ;
typedef TYPE_3__ osm_mcm_alias_guid_t ;
typedef int osm_log_t ;
struct TYPE_12__ {int scope_state; } ;
typedef TYPE_4__ ib_member_rec_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_9__ {int * port; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int *,TYPE_2__*,TYPE_3__*,TYPE_4__*) ;

void FUNC_4(osm_subn_t * VAR_1, osm_log_t * VAR_2, osm_mgrp_t * VAR_3,
     osm_port_t * VAR_4)
{
 osm_mcm_alias_guid_t *VAR_5, *VAR_6;
 ib_member_rec_t VAR_7;
 boolean_t VAR_8 = VAR_0;

 VAR_6 = (osm_mcm_alias_guid_t *) FUNC_1(&VAR_3->mcm_alias_port_tbl);
 while (VAR_6 != (osm_mcm_alias_guid_t *) FUNC_0(&VAR_3->mcm_alias_port_tbl) &&
       !VAR_8) {
  VAR_5 = VAR_6;
  VAR_6 = (osm_mcm_alias_guid_t *) FUNC_2(&VAR_6->map_item);
  if (VAR_5->p_base_mcm_port->port == VAR_4) {
   VAR_7.scope_state = 0xf;
   VAR_8 = FUNC_3(VAR_1, VAR_2, VAR_3, VAR_5,
          &VAR_7);
  }
 }
}

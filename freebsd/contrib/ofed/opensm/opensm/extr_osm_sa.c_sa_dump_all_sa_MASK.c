
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct opensm_dump_context {int * file; TYPE_2__* p_osm; } ;
struct TYPE_6__ {int sa_sr_list; int sa_infr_list; int mgrp_mgid_tbl; int port_guid_tbl; } ;
struct TYPE_7__ {TYPE_1__ subn; int log; } ;
typedef TYPE_2__ osm_opensm_t ;
struct TYPE_8__ {int map_item; } ;
typedef TYPE_3__ osm_mgrp_t ;
typedef int FILE ;


 int FUNC_0 (int *,int ,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,struct opensm_dump_context*) ;
 int FUNC_5 (int *,int ,struct opensm_dump_context*) ;
 int VAR_1 ;
 int FUNC_6 (TYPE_3__*,struct opensm_dump_context*) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_7(osm_opensm_t * VAR_4, FILE * VAR_5)
{
 struct opensm_dump_context VAR_6;
 osm_mgrp_t *VAR_7;

 VAR_6.p_osm = VAR_4;
 VAR_6.file = VAR_5;
 FUNC_0(&VAR_4->log, VAR_0, "Dump guidinfo\n");
 FUNC_5(&VAR_4->subn.port_guid_tbl,
      VAR_2, &VAR_6);
 FUNC_0(&VAR_4->log, VAR_0, "Dump multicast\n");
 for (VAR_7 = (osm_mgrp_t *) FUNC_2(&VAR_4->subn.mgrp_mgid_tbl);
      VAR_7 != (osm_mgrp_t *) FUNC_1(&VAR_4->subn.mgrp_mgid_tbl);
      VAR_7 = (osm_mgrp_t *) FUNC_3(&VAR_7->map_item))
  FUNC_6(VAR_7, &VAR_6);
 FUNC_0(&VAR_4->log, VAR_0, "Dump inform\n");
 FUNC_4(&VAR_4->subn.sa_infr_list,
       VAR_1, &VAR_6);
 FUNC_0(&VAR_4->log, VAR_0, "Dump services\n");
 FUNC_4(&VAR_4->subn.sa_sr_list,
       VAR_3, &VAR_6);
}

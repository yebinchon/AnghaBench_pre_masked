
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint16_t ;
typedef int switch_t ;
struct TYPE_13__ {int p_node; int map_item; } ;
typedef TYPE_3__ osm_switch_t ;
struct TYPE_11__ {scalar_t__ lash_start_vl; } ;
struct TYPE_14__ {TYPE_1__ opt; int sw_guid_tbl; } ;
typedef TYPE_4__ osm_subn_t ;
struct TYPE_15__ {int port_info; scalar_t__ p_remote_physp; } ;
typedef TYPE_5__ osm_physp_t ;
typedef int osm_log_t ;
struct TYPE_16__ {int num_switches; TYPE_2__* p_osm; scalar_t__ vl_min; int * switches; } ;
typedef TYPE_6__ lash_t ;
typedef int ib_port_info_t ;
struct TYPE_12__ {TYPE_4__ subn; int log; } ;


 int FUNC_0 (int *,int ,char*,scalar_t__,scalar_t__,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (int ,int) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 TYPE_5__* FUNC_8 (int ,int) ;
 int FUNC_9 (TYPE_6__*,int,TYPE_3__*) ;

__attribute__((used)) static int FUNC_10(lash_t * VAR_2)
{
 int VAR_3, VAR_4 = 0;
 uint8_t VAR_5;
 osm_subn_t *VAR_6 = &VAR_2->p_osm->subn;
 osm_switch_t *VAR_7, *VAR_8;
 osm_log_t *VAR_9 = &VAR_2->p_osm->log;

 VAR_2->num_switches = FUNC_2(&VAR_6->sw_guid_tbl);

 VAR_2->switches = FUNC_1(VAR_2->num_switches, sizeof(switch_t *));
 if (!VAR_2->switches)
  return -1;

 VAR_5 = 5;

 VAR_7 = (osm_switch_t *) FUNC_4(&VAR_6->sw_guid_tbl);
 while (VAR_7 != (osm_switch_t *) FUNC_3(&VAR_6->sw_guid_tbl)) {
  uint16_t VAR_10;
  VAR_8 = VAR_7;
  VAR_7 = (osm_switch_t *) FUNC_5(&VAR_8->map_item);

  VAR_2->switches[VAR_4] = FUNC_9(VAR_2, VAR_4, VAR_8);
  if (!VAR_2->switches[VAR_4])
   return -1;
  VAR_4++;

  VAR_10 = FUNC_7(VAR_8->p_node);


  for (VAR_3 = 1; VAR_3 < VAR_10; VAR_3++) {
   osm_physp_t *VAR_11 =
       FUNC_8(VAR_8->p_node, VAR_3);

   if (VAR_11
       && VAR_11->p_remote_physp) {

    ib_port_info_t *VAR_12 =
        &VAR_11->port_info;
    uint8_t VAR_13 =
        FUNC_6(VAR_12);
    if (VAR_13 && VAR_13 < VAR_5)
     VAR_5 = VAR_13;
   }
  }
 }

 VAR_5 = 1 << (VAR_5 - 1);
 if (VAR_5 > 15)
  VAR_5 = 15;

 if (VAR_2->p_osm->subn.opt.lash_start_vl >= VAR_5) {
  FUNC_0(VAR_9, VAR_0, "ERR 4D03: "
   "Start VL(%d) too high for min operational vl(%d)\n",
   VAR_2->p_osm->subn.opt.lash_start_vl, VAR_5);
  return -1;
 }

 VAR_2->vl_min = VAR_5 - VAR_2->p_osm->subn.opt.lash_start_vl;

 FUNC_0(VAR_9, VAR_1,
  "min operational vl(%d) start vl(%d) max_switches(%d)\n",
  VAR_2->vl_min, VAR_2->p_osm->subn.opt.lash_start_vl,
  VAR_2->num_switches);
 return 0;
}

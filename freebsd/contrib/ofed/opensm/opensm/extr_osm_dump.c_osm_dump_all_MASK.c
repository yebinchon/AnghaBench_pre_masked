
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ qos; scalar_t__ scatter_ports; } ;
struct TYPE_12__ {int node_guid_tbl; int port_guid_tbl; TYPE_1__ opt; int sw_guid_tbl; } ;
struct TYPE_13__ {int log; TYPE_3__ subn; TYPE_2__* routing_engine_used; } ;
typedef TYPE_4__ osm_opensm_t ;
struct TYPE_11__ {scalar_t__ update_sl2vl; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int *,int ,TYPE_4__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (TYPE_4__*,char*,int *,int ,TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*,int ) ;
 int FUNC_4 (scalar_t__) ;
 int VAR_10 ;

void FUNC_5(osm_opensm_t * VAR_11)
{
 if (FUNC_0(&VAR_11->log, VAR_1)) {

  FUNC_2(VAR_11, "opensm-lid-matrix.dump",
          &VAR_11->subn.sw_guid_tbl, VAR_3,
          VAR_11);
  FUNC_2(VAR_11, "opensm-lfts.dump",
          &VAR_11->subn.sw_guid_tbl, VAR_7,
          VAR_11);
  if (FUNC_0(&VAR_11->log, VAR_0))
   FUNC_1(VAR_10, &VAR_11->subn.sw_guid_tbl,
      VAR_8, VAR_11);



  if (VAR_11->subn.opt.scatter_ports)
   FUNC_4(VAR_11->subn.opt.scatter_ports);

  FUNC_2(VAR_11, "opensm.fdbs",
          &VAR_11->subn.sw_guid_tbl,
          VAR_9, VAR_11);

  FUNC_2(VAR_11, "opensm.mcfdbs",
          &VAR_11->subn.sw_guid_tbl,
          VAR_4, VAR_11);

  if (VAR_11->subn.opt.qos ||
      (VAR_11->routing_engine_used &&
       VAR_11->routing_engine_used->update_sl2vl))
   FUNC_2(VAR_11, "opensm-sl2vl.dump",
           &VAR_11->subn.port_guid_tbl,
           VAR_5, VAR_11);
 }
 FUNC_2(VAR_11, "opensm-subnet.lst",
         &VAR_11->subn.node_guid_tbl, VAR_6,
         VAR_11);
 if (FUNC_0(&VAR_11->log, VAR_2))
  FUNC_3(VAR_11, VAR_10);
}

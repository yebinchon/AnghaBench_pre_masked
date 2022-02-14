
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int port_order_list; TYPE_2__* p_subn; int p_log; } ;
typedef TYPE_3__ osm_ucast_mgr_t ;
struct TYPE_8__ {scalar_t__ port_prof_ignore_file; scalar_t__ guid_routing_order_file; } ;
struct TYPE_9__ {int sw_guid_tbl; int port_guid_tbl; TYPE_1__ opt; } ;


 int FUNC_0 (int ,int ,char*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,TYPE_3__*) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_4 (scalar_t__,int ,TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_6(osm_ucast_mgr_t * VAR_7)
{
 FUNC_1(&VAR_7->port_order_list);

 if (VAR_7->p_subn->opt.guid_routing_order_file) {
  FUNC_0(VAR_7->p_log, VAR_0,
   "Fetching guid routing order file \'%s\'\n",
   VAR_7->p_subn->opt.guid_routing_order_file);

  if (FUNC_4(VAR_7->p_subn->opt.guid_routing_order_file,
       VAR_2, VAR_7))
   FUNC_0(VAR_7->p_log, VAR_1, "ERR 3A0D: "
    "cannot parse guid routing order file \'%s\'\n",
    VAR_7->p_subn->opt.guid_routing_order_file);
 }
 FUNC_5(VAR_7);

 if (VAR_7->p_subn->opt.port_prof_ignore_file) {
  FUNC_3(&VAR_7->p_subn->sw_guid_tbl,
       VAR_4, ((void*)0));
  if (FUNC_4(VAR_7->p_subn->opt.port_prof_ignore_file,
       VAR_5, VAR_7)) {
   FUNC_0(VAR_7->p_log, VAR_1, "ERR 3A0E: "
    "cannot parse port prof ignore file \'%s\'\n",
    VAR_7->p_subn->opt.port_prof_ignore_file);
  }
 }

 FUNC_3(&VAR_7->p_subn->port_guid_tbl,
      VAR_3, VAR_7);

 FUNC_3(&VAR_7->p_subn->sw_guid_tbl, VAR_6,
      VAR_7);

 FUNC_2(&VAR_7->port_order_list);

 return 0;
}

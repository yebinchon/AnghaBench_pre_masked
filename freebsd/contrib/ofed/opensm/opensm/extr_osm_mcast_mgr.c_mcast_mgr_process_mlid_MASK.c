
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint16_t ;
struct osm_routing_engine {scalar_t__ (* mcast_build_stree ) (int ,int *) ;int context; } ;
struct TYPE_8__ {int p_log; TYPE_3__* p_subn; } ;
typedef TYPE_2__ osm_sm_t ;
typedef int osm_mgrp_box_t ;
typedef scalar_t__ ib_api_status_t ;
struct TYPE_9__ {TYPE_1__* p_osm; } ;
struct TYPE_7__ {struct osm_routing_engine* routing_engine_used; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ,char*,int ,...) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (TYPE_2__*,int *) ;
 int FUNC_6 (TYPE_2__*,int ) ;
 int * FUNC_7 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_8 (int ,int *) ;

__attribute__((used)) static ib_api_status_t FUNC_9(osm_sm_t * VAR_3, uint16_t VAR_4)
{
 ib_api_status_t VAR_5 = VAR_0;
 struct osm_routing_engine *VAR_6 = VAR_3->p_subn->p_osm->routing_engine_used;
 osm_mgrp_box_t *VAR_7;

 FUNC_1(VAR_3->p_log);

 FUNC_0(VAR_3->p_log, VAR_1,
  "Processing multicast group with mlid 0x%X\n", VAR_4);




 FUNC_6(VAR_3, VAR_4);

 VAR_7 = FUNC_7(VAR_3->p_subn, FUNC_3(VAR_4));
 if (VAR_7) {
  if (VAR_6 && VAR_6->mcast_build_stree)
   VAR_5 = VAR_6->mcast_build_stree(VAR_6->context, VAR_7);
  else
   VAR_5 = FUNC_5(VAR_3, VAR_7);

  if (VAR_5 != VAR_0)
   FUNC_0(VAR_3->p_log, VAR_2, "ERR 0A17: "
    "Unable to create spanning tree (%s) for mlid "
    "0x%x\n", FUNC_4(VAR_5), VAR_4);
 }

 FUNC_2(VAR_3->p_log);
 return VAR_5;
}

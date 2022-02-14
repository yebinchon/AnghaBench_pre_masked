
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct osm_routing_engine {int ucast_build_fwd_tables; int build_lid_matrices; int * context; } ;
struct TYPE_4__ {int ucast_mgr; } ;
struct TYPE_5__ {TYPE_1__ sm; } ;
typedef TYPE_2__ osm_opensm_t ;


 int VAR_0 ;
 int VAR_1 ;

int FUNC_0(struct osm_routing_engine *VAR_2, osm_opensm_t * VAR_3)
{
 VAR_2->context = &VAR_3->sm.ucast_mgr;
 VAR_2->build_lid_matrices = VAR_0;
 VAR_2->ucast_build_fwd_tables = VAR_1;
 return 0;
}

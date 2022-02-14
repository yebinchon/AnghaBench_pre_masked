
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct osm_routing_engine {int destroy; int ucast_build_fwd_tables; int build_lid_matrices; void* context; } ;
struct TYPE_7__ {int p_subn; } ;
struct TYPE_8__ {TYPE_1__ ucast_mgr; } ;
struct TYPE_9__ {TYPE_2__ sm; } ;
typedef TYPE_3__ osm_opensm_t ;
struct TYPE_10__ {int p_subn; TYPE_3__* p_osm; } ;
typedef TYPE_4__ ftree_fabric_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_4__* FUNC_0 () ;

int FUNC_1(struct osm_routing_engine *VAR_3, osm_opensm_t * VAR_4)
{
 ftree_fabric_t *VAR_5 = FUNC_0();
 if (!VAR_5)
  return -1;

 VAR_5->p_osm = VAR_4;
 VAR_5->p_subn = VAR_4->sm.ucast_mgr.p_subn;

 VAR_3->context = (void *)VAR_5;
 VAR_3->build_lid_matrices = VAR_0;
 VAR_3->ucast_build_fwd_tables = VAR_2;
 VAR_3->destroy = VAR_1;

 return 0;
}

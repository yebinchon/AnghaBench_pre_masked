
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct torus_context {int dummy; } ;
struct osm_routing_engine {int destroy; int mcast_build_stree; int path_sl; int update_vlarb; int update_sl2vl; int build_lid_matrices; int ucast_build_fwd_tables; struct torus_context* context; } ;
typedef int osm_opensm_t ;


 int VAR_0 ;
 struct torus_context* FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

int FUNC_1(struct osm_routing_engine *VAR_7,
         osm_opensm_t *VAR_8)
{
 struct torus_context *VAR_9;

 VAR_9 = FUNC_0(VAR_8);
 if (!VAR_9)
  return -1;

 VAR_7->context = VAR_9;
 VAR_7->ucast_build_fwd_tables = VAR_0;
 VAR_7->build_lid_matrices = VAR_6;
 VAR_7->update_sl2vl = VAR_4;
 VAR_7->update_vlarb = VAR_5;
 VAR_7->path_sl = VAR_3;
 VAR_7->mcast_build_stree = VAR_2;
 VAR_7->destroy = VAR_1;
 return 0;
}

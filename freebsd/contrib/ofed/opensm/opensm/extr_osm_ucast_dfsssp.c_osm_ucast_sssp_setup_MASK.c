
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct osm_routing_engine {int destroy; int mcast_build_stree; int ucast_build_fwd_tables; int build_lid_matrices; void* context; } ;
typedef int osm_opensm_t ;
typedef int dfsssp_context_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;

int FUNC_1(struct osm_routing_engine *VAR_5, osm_opensm_t * VAR_6)
{

 dfsssp_context_t *VAR_7 =
     FUNC_0(VAR_6, VAR_0);
 if (!VAR_7) {
  return 1;
 }


 VAR_5->context = (void *)VAR_7;
 VAR_5->build_lid_matrices = VAR_2;
 VAR_5->ucast_build_fwd_tables = VAR_3;
 VAR_5->mcast_build_stree = VAR_4;
 VAR_5->destroy = VAR_1;

 return 0;
}

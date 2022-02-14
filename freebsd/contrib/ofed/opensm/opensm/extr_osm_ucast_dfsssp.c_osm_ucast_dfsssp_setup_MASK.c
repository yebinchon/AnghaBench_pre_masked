
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct osm_routing_engine {int destroy; int path_sl; int mcast_build_stree; int ucast_build_fwd_tables; int build_lid_matrices; void* context; } ;
typedef int osm_opensm_t ;
typedef int dfsssp_context_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct osm_routing_engine *VAR_6, osm_opensm_t * VAR_7)
{

 dfsssp_context_t *VAR_8 =
     FUNC_0(VAR_7, VAR_0);
 if (!VAR_8) {
  return 1;
 }


 VAR_6->context = (void *)VAR_8;
 VAR_6->build_lid_matrices = VAR_2;
 VAR_6->ucast_build_fwd_tables = VAR_3;
 VAR_6->mcast_build_stree = VAR_4;
 VAR_6->path_sl = VAR_5;
 VAR_6->destroy = VAR_1;




 FUNC_1(FUNC_2(((void*)0)));

 return 0;
}

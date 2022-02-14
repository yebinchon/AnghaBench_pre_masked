
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct osm_routing_engine {int destroy; int path_sl; int ucast_build_fwd_tables; int * context; } ;
typedef int osm_opensm_t ;
typedef int lash_t ;


 int VAR_0 ;
 int * FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_1(struct osm_routing_engine *VAR_3, osm_opensm_t *VAR_4)
{
 lash_t *VAR_5 = FUNC_0(VAR_4);
 if (!VAR_5)
  return -1;

 VAR_3->context = VAR_5;
 VAR_3->ucast_build_fwd_tables = VAR_2;
 VAR_3->path_sl = VAR_0;
 VAR_3->destroy = VAR_1;

 return 0;
}

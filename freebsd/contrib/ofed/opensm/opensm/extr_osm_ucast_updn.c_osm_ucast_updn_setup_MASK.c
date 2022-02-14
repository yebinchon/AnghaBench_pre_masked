
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * p_osm; } ;
typedef TYPE_1__ updn_t ;
struct osm_routing_engine {int build_lid_matrices; int destroy; TYPE_1__* context; } ;
typedef int osm_opensm_t ;


 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;

int FUNC_2(struct osm_routing_engine *VAR_2, osm_opensm_t *VAR_3)
{
 updn_t *VAR_4;

 VAR_4 = FUNC_0(sizeof(updn_t));
 if (!VAR_4)
  return -1;
 FUNC_1(VAR_4, 0, sizeof(updn_t));

 VAR_4->p_osm = VAR_3;

 VAR_2->context = VAR_4;
 VAR_2->destroy = VAR_0;
 VAR_2->build_lid_matrices = VAR_1;

 return 0;
}

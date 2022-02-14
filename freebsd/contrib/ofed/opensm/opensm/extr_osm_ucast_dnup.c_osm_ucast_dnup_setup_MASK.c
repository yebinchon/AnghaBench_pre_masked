
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct osm_routing_engine {int build_lid_matrices; int destroy; TYPE_2__* context; } ;
struct TYPE_6__ {int log; } ;
typedef TYPE_1__ osm_opensm_t ;
struct TYPE_7__ {TYPE_1__* p_osm; } ;
typedef TYPE_2__ dnup_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_2 (int) ;
 int FUNC_3 (TYPE_2__*,int ,int) ;

int FUNC_4(struct osm_routing_engine *VAR_2, osm_opensm_t *VAR_3)
{
 dnup_t *VAR_4;

 FUNC_0(&VAR_3->log);

 VAR_4 = FUNC_2(sizeof(dnup_t));
 if (!VAR_4)
  return -1;
 FUNC_3(VAR_4, 0, sizeof(dnup_t));

 VAR_4->p_osm = VAR_3;

 VAR_2->context = VAR_4;
 VAR_2->destroy = VAR_0;
 VAR_2->build_lid_matrices = VAR_1;

 FUNC_1(&VAR_3->log);
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {TYPE_5__* node; } ;
typedef TYPE_4__ switch_t ;
typedef int osm_log_t ;
struct TYPE_13__ {unsigned int num_links; TYPE_6__** links; } ;
typedef TYPE_5__ mesh_node_t ;
struct TYPE_14__ {int switch_id; int* ports; int link_id; int num_ports; } ;
typedef TYPE_6__ link_t ;
struct TYPE_15__ {TYPE_4__** switches; TYPE_3__* p_osm; } ;
typedef TYPE_7__ lash_t ;
struct TYPE_9__ {scalar_t__ do_mesh_analysis; } ;
struct TYPE_10__ {TYPE_1__ opt; } ;
struct TYPE_11__ {TYPE_2__ subn; int log; } ;


 int FUNC_0 (int *,int ,char*,int,int,int) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(lash_t * VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
 osm_log_t *VAR_5 = &VAR_1->p_osm->log;
 unsigned VAR_6 = VAR_1->switches[VAR_2]->node->num_links;
 switch_t *VAR_7 = VAR_1->switches[VAR_2];
 mesh_node_t *VAR_8 = VAR_7->node;
 switch_t *VAR_9;
 link_t *VAR_10;
 unsigned int VAR_11;







 if (VAR_1->p_osm->subn.opt.do_mesh_analysis) {
  if (VAR_2 == VAR_3)
   return;


  for (VAR_11 = 0; VAR_11 < VAR_6; VAR_11++) {
   VAR_10 = VAR_8->links[VAR_11];

   if (VAR_8->links[VAR_11]->switch_id == VAR_3) {
    VAR_10->ports[VAR_10->num_ports++] = VAR_4;
    return;
   }
  }
 }

 VAR_10 = VAR_8->links[VAR_6];
 VAR_10->switch_id = VAR_3;
 VAR_10->link_id = -1;
 VAR_10->ports[VAR_10->num_ports++] = VAR_4;

 VAR_9 = VAR_1->switches[VAR_3];
 for (VAR_11 = 0; VAR_11 < VAR_9->node->num_links; VAR_11++) {
  if (VAR_9->node->links[VAR_11]->switch_id == VAR_2) {
   VAR_9->node->links[VAR_11]->link_id = VAR_6;
   VAR_10->link_id = VAR_11;
   break;
  }
 }

 VAR_8->num_links++;

 FUNC_0(VAR_5, VAR_0,
  "LASH connect: %d, %d, %d\n", VAR_2, VAR_3, VAR_4);
}

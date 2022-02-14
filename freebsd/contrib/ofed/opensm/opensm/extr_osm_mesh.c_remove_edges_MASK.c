
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


typedef int osm_log_t ;
struct TYPE_14__ {int type; unsigned int num_links; TYPE_2__** links; } ;
typedef TYPE_6__ mesh_node_t ;
struct TYPE_15__ {int num_switches; TYPE_5__** switches; TYPE_1__* p_osm; } ;
typedef TYPE_7__ lash_t ;
struct TYPE_13__ {TYPE_4__* p_sw; TYPE_6__* node; } ;
struct TYPE_12__ {TYPE_3__* p_node; } ;
struct TYPE_11__ {int print_desc; } ;
struct TYPE_10__ {size_t switch_id; } ;
struct TYPE_9__ {int log; } ;


 int FUNC_0 (int *,int ,char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(lash_t *VAR_1)
{
 osm_log_t *VAR_2 = &VAR_1->p_osm->log;
 int VAR_3;
 mesh_node_t *VAR_4, *VAR_5;
 unsigned VAR_6;

 FUNC_1(VAR_2);

 for (VAR_3 = 0; VAR_3 < VAR_1->num_switches; VAR_3++) {
  VAR_4 = VAR_1->switches[VAR_3]->node;
  if (!VAR_4->type)
   continue;

  for (VAR_6 = 0; VAR_6 < VAR_4->num_links; VAR_6++) {
   VAR_5 = VAR_1->switches[VAR_4->links[VAR_6]->switch_id]->node;

   if (VAR_5->num_links > VAR_4->num_links) {
    FUNC_0(VAR_2, VAR_0,
     "removed edge switch %s\n",
     VAR_1->switches[VAR_3]->p_sw->p_node->print_desc);
    VAR_4->type = -1;
    break;
   }
  }
 }

 FUNC_2(VAR_2);
}

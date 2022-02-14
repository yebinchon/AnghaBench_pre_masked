
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {TYPE_5__* node; TYPE_2__* p_sw; } ;
typedef TYPE_4__ switch_t ;
typedef int osm_log_t ;
struct TYPE_15__ {TYPE_3__** links; void* axes; } ;
typedef TYPE_5__ mesh_node_t ;
typedef int link_t ;
struct TYPE_16__ {TYPE_1__* p_osm; } ;
typedef TYPE_6__ lash_t ;
struct TYPE_13__ {int switch_id; } ;
struct TYPE_12__ {unsigned int num_ports; } ;
struct TYPE_11__ {int log; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 void* FUNC_3 (unsigned int,int) ;
 int FUNC_4 (TYPE_6__*,TYPE_4__*) ;

int FUNC_5(lash_t *VAR_2, switch_t *VAR_3)
{
 osm_log_t *VAR_4 = &VAR_2->p_osm->log;
 unsigned VAR_5;
 mesh_node_t *VAR_6;
 unsigned VAR_7 = VAR_3->p_sw->num_ports;

 FUNC_1(VAR_4);

 if (!(VAR_6 = VAR_3->node = FUNC_3(1, sizeof(mesh_node_t) + VAR_7 * sizeof(link_t *))))
  goto err;

 for (VAR_5 = 0; VAR_5 < VAR_7; VAR_5++)
  if (!(VAR_6->links[VAR_5] = FUNC_3(1, sizeof(link_t) + VAR_7 * sizeof(int))))
   goto err;

 if (!(VAR_6->axes = FUNC_3(VAR_7, sizeof(int))))
  goto err;

 for (VAR_5 = 0; VAR_5 < VAR_7; VAR_5++) {
  VAR_6->links[VAR_5]->switch_id = VAR_0;
 }

 FUNC_2(VAR_4);
 return 0;

err:
 FUNC_4(VAR_2, VAR_3);
 FUNC_0(VAR_4, VAR_1,
  "Failed allocating mesh node - out of memory\n");
 FUNC_2(VAR_4);
 return -1;
}

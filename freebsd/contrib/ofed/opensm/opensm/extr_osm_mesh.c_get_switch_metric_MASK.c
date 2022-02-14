
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {TYPE_4__* node; } ;
typedef TYPE_3__ switch_t ;
typedef int osm_log_t ;
struct TYPE_12__ {unsigned int num_links; int temp; int** matrix; int poly; TYPE_2__** links; } ;
typedef TYPE_4__ mesh_node_t ;
struct TYPE_13__ {int num_switches; TYPE_3__** switches; TYPE_1__* p_osm; } ;
typedef TYPE_5__ lash_t ;
struct TYPE_10__ {int switch_id; } ;
struct TYPE_9__ {int log; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (TYPE_5__*,unsigned int,int**,int *) ;
 int** FUNC_3 (TYPE_5__*,unsigned int) ;
 int FUNC_4 (int**,unsigned int) ;

__attribute__((used)) static int FUNC_5(lash_t *VAR_1, int VAR_2)
{
 osm_log_t *VAR_3 = &VAR_1->p_osm->log;
 int VAR_4 = -1;
 unsigned int VAR_5, VAR_6, VAR_7;
 int VAR_8, VAR_9, VAR_10;
 switch_t *VAR_11 = VAR_1->switches[VAR_2];
 switch_t *VAR_12, *VAR_13, *VAR_14;
 int **VAR_15;
 mesh_node_t *VAR_16 = VAR_11->node;
 unsigned int VAR_17 = VAR_16->num_links;

 FUNC_0(VAR_3);

 do {
  if (!(VAR_15 = FUNC_3(VAR_1, VAR_17)))
   break;

  for (VAR_5 = 0; VAR_5 < VAR_17; VAR_5++) {
   VAR_8 = VAR_16->links[VAR_5]->switch_id;
   VAR_12 = VAR_1->switches[VAR_8];


   for (VAR_9 = 0; VAR_9 < VAR_1->num_switches; VAR_9++)
    VAR_1->switches[VAR_9]->node->temp = VAR_0;

   VAR_12->node->temp = 0;

   do {
    VAR_7 = 0;

    for (VAR_9 = 0; VAR_9 < VAR_1->num_switches; VAR_9++) {
     VAR_13 = VAR_1->switches[VAR_9];
     if (VAR_13->node->temp == VAR_0)
      continue;
     for (VAR_6 = 0; VAR_6 < VAR_13->node->num_links; VAR_6++) {
      VAR_10 = VAR_13->node->links[VAR_6]->switch_id;
      VAR_14 = VAR_1->switches[VAR_10];

      if (VAR_10 == VAR_2)
       continue;

      if ((VAR_13->node->temp + 1) < VAR_14->node->temp) {
       VAR_14->node->temp = VAR_13->node->temp + 1;
       VAR_7++;
      }
     }
    }
   } while (VAR_7);

   for (VAR_6 = 0; VAR_6 < VAR_17; VAR_6++) {
    VAR_9 = VAR_16->links[VAR_6]->switch_id;
    VAR_13 = VAR_1->switches[VAR_9];
    VAR_15[VAR_5][VAR_6] = VAR_13->node->temp;
   }
  }

  if (FUNC_2(VAR_1, VAR_17, VAR_15, &VAR_16->poly)) {
   FUNC_4(VAR_15, VAR_17);
   VAR_15 = ((void*)0);
   break;
  }

  VAR_4 = 0;
 } while (0);

 VAR_16->matrix = VAR_15;

 FUNC_1(VAR_3);
 return VAR_4;
}

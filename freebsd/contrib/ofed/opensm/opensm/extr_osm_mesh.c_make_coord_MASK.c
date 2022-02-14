
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {TYPE_3__* node; } ;
typedef TYPE_4__ switch_t ;
typedef int osm_log_t ;
struct TYPE_13__ {unsigned int dimension; } ;
typedef TYPE_5__ mesh_t ;
struct TYPE_14__ {int num_switches; TYPE_4__** switches; TYPE_1__* p_osm; } ;
typedef TYPE_6__ lash_t ;
struct TYPE_11__ {int* coord; unsigned int num_links; int* axes; TYPE_2__** links; } ;
struct TYPE_10__ {size_t switch_id; } ;
struct TYPE_9__ {int log; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*,...) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int* FUNC_3 (unsigned int,int) ;
 scalar_t__ FUNC_4 (int,int) ;

__attribute__((used)) static int FUNC_5(lash_t *VAR_3, mesh_t *VAR_4, int VAR_5)
{
 osm_log_t *VAR_6 = &VAR_3->p_osm->log;
 unsigned int VAR_7, VAR_8, VAR_9;
 int VAR_10;
 switch_t *VAR_11, *VAR_12;
 unsigned int VAR_13;
 unsigned int VAR_14 = VAR_4->dimension;
 int VAR_15 = VAR_3->num_switches;
 int VAR_16 = 0, VAR_17 = 0;

 FUNC_1(VAR_6);

 for (VAR_10 = 0; VAR_10 < VAR_15; VAR_10++) {
  VAR_11 = VAR_3->switches[VAR_10];

  VAR_11->node->coord = FUNC_3(VAR_14, sizeof(int));
  if (!VAR_11->node->coord) {
   FUNC_0(VAR_6, VAR_2,
    "Failed allocating coord - out of memory\n");
   FUNC_2(VAR_6);
   return -1;
  }

  for (VAR_7 = 0; VAR_7 < VAR_14; VAR_7++)
   VAR_11->node->coord[VAR_7] = (VAR_10 == VAR_5) ? 0 : VAR_0;

  for (VAR_7 = 0; VAR_7 < VAR_11->node->num_links; VAR_7++)
   if (VAR_11->node->axes[VAR_7] == 0)
    VAR_17++;
   else
    VAR_16++;
 }

 FUNC_0(VAR_6, VAR_1, "%d/%d unassigned/assigned axes\n",
  VAR_17, VAR_16);

 do {
  VAR_13 = 0;

  for (VAR_10 = 0; VAR_10 < VAR_15; VAR_10++) {
   VAR_11 = VAR_3->switches[VAR_10];

   if (VAR_11->node->coord[0] == VAR_0)
    continue;

   for (VAR_8 = 0; VAR_8 < VAR_11->node->num_links; VAR_8++) {
    if (!VAR_11->node->axes[VAR_8])
     continue;

    VAR_12 = VAR_3->switches[VAR_11->node->links[VAR_8]->switch_id];

    for (VAR_9 = 0; VAR_9 < VAR_14; VAR_9++) {
     int VAR_18 = VAR_11->node->coord[VAR_9];
     unsigned VAR_19 = VAR_11->node->axes[VAR_8] - 1;

     if (VAR_9 == VAR_19/2)
      VAR_18 += (VAR_19 & 1)? -1 : +1;

     if (FUNC_4(VAR_18, VAR_12->node->coord[VAR_9])) {
      VAR_12->node->coord[VAR_9] = VAR_18;
      VAR_13++;
     }
    }
   }
  }
 } while (VAR_13);

 FUNC_2(VAR_6);
 return 0;
}

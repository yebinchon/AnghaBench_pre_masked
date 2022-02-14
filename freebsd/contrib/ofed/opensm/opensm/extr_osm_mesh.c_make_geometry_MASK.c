
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {TYPE_3__* node; } ;
typedef TYPE_4__ switch_t ;
typedef int osm_log_t ;
struct TYPE_13__ {int num_switches; TYPE_4__** switches; TYPE_2__* p_osm; } ;
typedef TYPE_5__ lash_t ;
struct TYPE_11__ {int** matrix; unsigned int num_links; scalar_t__* axes; TYPE_1__** links; } ;
struct TYPE_10__ {int log; } ;
struct TYPE_9__ {int link_id; int switch_id; } ;


 int FUNC_0 (int *,int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (TYPE_4__*,scalar_t__) ;
 int FUNC_4 (TYPE_5__*,int) ;

__attribute__((used)) static void FUNC_5(lash_t *VAR_1, int VAR_2)
{
 osm_log_t *VAR_3 = &VAR_1->p_osm->log;
 int VAR_4 = VAR_1->num_switches;
 int VAR_5, VAR_6;
 switch_t *VAR_7, *VAR_8, *VAR_9, *VAR_10;
 unsigned int VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;
 unsigned int VAR_17;

 FUNC_1(VAR_3);

 VAR_7 = VAR_1->switches[VAR_2];

 if (!VAR_7->node->matrix)
  goto done;




 FUNC_4(VAR_1, VAR_2);
 VAR_10 = VAR_1->switches[VAR_2];





 do {
  VAR_17 = 0;


  for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
   VAR_8 = VAR_1->switches[VAR_5];
   VAR_15 = VAR_8->node->num_links;




   if (VAR_15 < VAR_10->node->num_links && VAR_15 <= 2)
    continue;




   if (!VAR_8->node->matrix)
    continue;

   for (VAR_11 = 0; VAR_11 < VAR_15; VAR_11++) {
    if (!VAR_8->node->axes[VAR_11])
     continue;





    VAR_16 = 0;
    for (VAR_12 = 0; VAR_12 < VAR_15; VAR_12++) {
     if (VAR_12 == VAR_11)
      continue;

     if (VAR_8->node->matrix[VAR_11][VAR_12] != 2)
      VAR_16++;
    }

    if (VAR_16 != 1) {
     continue;
    }

    for (VAR_12 = 0; VAR_12 < VAR_15; VAR_12++) {
     if (VAR_12 == VAR_11)
      continue;


     if (VAR_8->node->matrix[VAR_11][VAR_12] != 2 &&
         VAR_8->node->matrix[VAR_11][VAR_12] <= 4) {
      if (VAR_8->node->axes[VAR_12]) {
       if (VAR_8->node->axes[VAR_12] != FUNC_3(VAR_10, VAR_8->node->axes[VAR_11])) {
        FUNC_0(VAR_3, VAR_0,
         "phase 1 mismatch\n");
       }
      } else {
       VAR_8->node->axes[VAR_12] = FUNC_3(VAR_10, VAR_8->node->axes[VAR_11]);
       VAR_17++;
      }
     }
    }
   }
  }


  for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
   VAR_8 = VAR_1->switches[VAR_5];
   VAR_15 = VAR_8->node->num_links;

   if (!VAR_8->node->matrix)
    continue;

   for (VAR_11 = 0; VAR_11 < VAR_15; VAR_11++) {
    int VAR_18 = VAR_8->node->links[VAR_11]->link_id;

    if (!VAR_8->node->axes[VAR_11])
     continue;

    if (VAR_18 == -1) {
     FUNC_0(VAR_3, VAR_0,
      "no reverse link\n");
     continue;
    }

    VAR_6 = VAR_8->node->links[VAR_11]->switch_id;
    VAR_9 = VAR_1->switches[VAR_6];

    if (!VAR_9->node->matrix)
     continue;

    if (!VAR_9->node->axes[VAR_18]) {



     VAR_9->node->axes[VAR_18] = FUNC_3(VAR_10, VAR_8->node->axes[VAR_11]);
     VAR_17++;
    } else {
     if (VAR_9->node->axes[VAR_18] != FUNC_3(VAR_10, VAR_8->node->axes[VAR_11])) {
      FUNC_0(VAR_3, VAR_0,
       "phase 2 mismatch\n");
     }
    }
   }
  }


  for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
   VAR_7 = VAR_1->switches[VAR_5];
   VAR_15 = VAR_7->node->num_links;

   if (!VAR_7->node->matrix)
    continue;

   for (VAR_11 = 0; VAR_11 < VAR_15; VAR_11++) {
    if (!VAR_7->node->axes[VAR_11])
     continue;

    for (VAR_12 = 0; VAR_12 < VAR_15; VAR_12++) {
     if (VAR_11 == VAR_12 || !VAR_7->node->axes[VAR_12] || VAR_7->node->matrix[VAR_11][VAR_12] != 2)
      continue;

     VAR_8 = VAR_1->switches[VAR_7->node->links[VAR_11]->switch_id];
     VAR_9 = VAR_1->switches[VAR_7->node->links[VAR_12]->switch_id];





     for (VAR_13 = 0; VAR_13 < VAR_8->node->num_links; VAR_13++) {
      if (VAR_8->node->links[VAR_13]->switch_id == VAR_5)
       continue;

      for (VAR_14 = 0; VAR_14 < VAR_9->node->num_links; VAR_14++) {
       if (VAR_9->node->links[VAR_14]->switch_id == VAR_5)
        continue;

       if (VAR_8->node->links[VAR_13]->switch_id == VAR_9->node->links[VAR_14]->switch_id) {
        if (VAR_8->node->axes[VAR_13]) {
         if (VAR_8->node->axes[VAR_13] != VAR_7->node->axes[VAR_12]) {
          FUNC_0(VAR_3, VAR_0, "phase 3 mismatch\n");
         }
        } else {
         VAR_8->node->axes[VAR_13] = VAR_7->node->axes[VAR_12];
         VAR_17++;
        }

        if (VAR_9->node->axes[VAR_14]) {
         if (VAR_9->node->axes[VAR_14] != VAR_7->node->axes[VAR_11]) {
          FUNC_0(VAR_3, VAR_0, "phase 3 mismatch\n");
         }
        } else {
         VAR_9->node->axes[VAR_14] = VAR_7->node->axes[VAR_11];
         VAR_17++;
        }
        goto next_j;
       }
      }
     }
next_j:
     ;
    }
   }
  }
 } while (VAR_17);

done:
 FUNC_2(VAR_3);
}

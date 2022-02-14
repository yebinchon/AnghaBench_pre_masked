
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {TYPE_3__* node; } ;
typedef TYPE_4__ switch_t ;
typedef int osm_log_t ;
struct TYPE_11__ {int num_switches; TYPE_4__** switches; TYPE_1__* p_osm; } ;
typedef TYPE_5__ lash_t ;
typedef int buf ;
struct TYPE_9__ {int dimension; int* coord; int num_links; TYPE_2__** links; } ;
struct TYPE_8__ {size_t switch_id; } ;
struct TYPE_7__ {int log; } ;


 int FUNC_0 (int *,int ,char*,char*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (char*,int,char*,...) ;
 int FUNC_4 (char*,char*) ;

__attribute__((used)) static void FUNC_5(lash_t *VAR_1)
{
 osm_log_t *VAR_2 = &VAR_1->p_osm->log;
 int VAR_3;
 int VAR_4 = VAR_1->num_switches;
 int VAR_5;
 int VAR_6, VAR_7, VAR_8, VAR_9;
 switch_t *VAR_10, *VAR_11;
 char VAR_12[256];

 FUNC_1(VAR_2);

 for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++) {
  VAR_10 = VAR_1->switches[VAR_3];
  VAR_5 = VAR_10->node->dimension;
  VAR_9 = FUNC_4(VAR_12, "[");
  for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
   VAR_9 += FUNC_3(VAR_12 + VAR_9, sizeof(VAR_12) - VAR_9,
          "%2d", VAR_10->node->coord[VAR_6]);
   if (VAR_9 > sizeof(VAR_12))
    VAR_9 = sizeof(VAR_12);
   if (VAR_6 != VAR_5 - 1) {
    VAR_9 += FUNC_3(VAR_12 + VAR_9, sizeof(VAR_12) - VAR_9, "%s", ",");
    if (VAR_9 > sizeof(VAR_12))
     VAR_9 = sizeof(VAR_12);
   }
  }
  VAR_9 += FUNC_3(VAR_12 + VAR_9, sizeof(VAR_12) - VAR_9, "]");
  if (VAR_9 > sizeof(VAR_12))
   VAR_9 = sizeof(VAR_12);
  for (VAR_7 = 0; VAR_7 < VAR_10->node->num_links; VAR_7++) {
   VAR_11 = VAR_1->switches[VAR_10->node->links[VAR_7]->switch_id];
   VAR_9 += FUNC_3(VAR_12 + VAR_9, sizeof(VAR_12) - VAR_9, " [%d]->[", VAR_7);
   if (VAR_9 > sizeof(VAR_12))
    VAR_9 = sizeof(VAR_12);
   for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++) {
    VAR_9 += FUNC_3(VAR_12 + VAR_9, sizeof(VAR_12) - VAR_9, "%2d",
           VAR_11->node->coord[VAR_8]);
    if (VAR_9 > sizeof(VAR_12))
     VAR_9 = sizeof(VAR_12);
    if (VAR_8 != VAR_5 - 1) {
     VAR_9 += FUNC_3(VAR_12 + VAR_9, sizeof(VAR_12) - VAR_9,
            ",");
     if (VAR_9 > sizeof(VAR_12))
      VAR_9 = sizeof(VAR_12);
    }
   }
   VAR_9 += FUNC_3(VAR_12 + VAR_9, sizeof(VAR_12) - VAR_9, "]");
   if (VAR_9 > sizeof(VAR_12))
    VAR_9 = sizeof(VAR_12);
  }
  FUNC_0(VAR_2, VAR_0, "%s\n", VAR_12);
 }

 FUNC_2(VAR_2);
}

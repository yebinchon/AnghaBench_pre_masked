
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {TYPE_2__* node; } ;
typedef TYPE_3__ switch_t ;
typedef int osm_log_t ;
struct TYPE_11__ {int dimension; int* size; int* dim_order; } ;
typedef TYPE_4__ mesh_t ;
struct TYPE_12__ {int num_switches; TYPE_3__** switches; TYPE_1__* p_osm; } ;
typedef TYPE_5__ lash_t ;
struct TYPE_9__ {int* coord; } ;
struct TYPE_8__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,char*) ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int* FUNC_3 (int,int) ;

__attribute__((used)) static int FUNC_4(lash_t *VAR_3, mesh_t *VAR_4)
{
 osm_log_t *VAR_5 = &VAR_3->p_osm->log;
 int VAR_6, VAR_7;
 int VAR_8;
 switch_t *VAR_9;
 int VAR_10 = VAR_4->dimension;
 int VAR_11 = VAR_3->num_switches;
 int VAR_12[VAR_1];
 int VAR_13[VAR_1];
 int VAR_14[VAR_1];
 int VAR_15;
 int VAR_16;

 FUNC_1(VAR_5);

 VAR_4->size = FUNC_3(VAR_10, sizeof(int));
 if (!VAR_4->size) {
  FUNC_0(VAR_5, VAR_2,
   "Failed allocating size - out of memory\n");
  FUNC_2(VAR_5);
  return -1;
 }

 for (VAR_6 = 0; VAR_6 < VAR_10; VAR_6++) {
  VAR_12[VAR_6] = -VAR_0;
  VAR_13[VAR_6] = VAR_0;
 }

 for (VAR_8 = 0; VAR_8 < VAR_11; VAR_8++) {
  VAR_9 = VAR_3->switches[VAR_8];

  for (VAR_6 = 0; VAR_6 < VAR_10; VAR_6++) {
   if (VAR_9->node->coord[VAR_6] == VAR_0)
    continue;
   if (VAR_9->node->coord[VAR_6] > VAR_12[VAR_6])
    VAR_12[VAR_6] = VAR_9->node->coord[VAR_6];
   if (VAR_9->node->coord[VAR_6] < VAR_13[VAR_6])
    VAR_13[VAR_6] = VAR_9->node->coord[VAR_6];
  }
 }

 for (VAR_6 = 0; VAR_6 < VAR_10; VAR_6++)
  VAR_4->size[VAR_6] = VAR_14[VAR_6] = VAR_12[VAR_6] - VAR_13[VAR_6] + 1;





 for (VAR_7 = 0; VAR_7 < VAR_10; VAR_7++) {
  VAR_15 = -1;
  VAR_16 = -1;

  for (VAR_6 = 0; VAR_6 < VAR_10; VAR_6++) {
   if (VAR_14[VAR_6] > VAR_15) {
    VAR_15 = VAR_14[VAR_6];
    VAR_16 = VAR_6;
   }
  }

  VAR_4->dim_order[VAR_7] = VAR_16;
  VAR_14[VAR_16] = -1;
 }

 FUNC_2(VAR_5);
 return 0;
}

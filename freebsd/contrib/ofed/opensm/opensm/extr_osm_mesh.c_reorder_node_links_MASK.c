
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {TYPE_4__* node; } ;
typedef TYPE_2__ switch_t ;
typedef int osm_log_t ;
struct TYPE_11__ {int dimension; int* dim_order; } ;
typedef TYPE_3__ mesh_t ;
struct TYPE_12__ {int num_links; scalar_t__* coord; int* axes; int ** links; } ;
typedef TYPE_4__ mesh_node_t ;
typedef int link_t ;
struct TYPE_13__ {TYPE_2__** switches; TYPE_1__* p_osm; } ;
typedef TYPE_5__ lash_t ;
struct TYPE_9__ {int log; } ;


 int FUNC_0 (int *,int ,char*) ;
 int VAR_0 ;
 void* FUNC_1 (int,int) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (TYPE_2__*,int) ;

__attribute__((used)) static int FUNC_4(lash_t *VAR_1, mesh_t *VAR_2, int VAR_3)
{
 osm_log_t *VAR_4 = &VAR_1->p_osm->log;
 switch_t *VAR_5 = VAR_1->switches[VAR_3];
 mesh_node_t *VAR_6 = VAR_5->node;
 int VAR_7 = VAR_6->num_links;
 link_t **VAR_8;
 int *VAR_9;
 int VAR_10, VAR_11, VAR_12, VAR_13;
 int VAR_14;
 int VAR_15 = 0;
 int VAR_16 = VAR_2->dimension;

 if (!(VAR_8 = FUNC_1(VAR_7, sizeof(link_t *)))) {
  FUNC_0(VAR_4, VAR_0,
   "Failed allocating links array - out of memory\n");
  return -1;
 }

 if (!(VAR_9 = FUNC_1(VAR_7, sizeof(int)))) {
  FUNC_2(*VAR_8);
  FUNC_0(VAR_4, VAR_0,
   "Failed allocating axes array - out of memory\n");
  return -1;
 }




 for (VAR_10 = 0; VAR_10 < VAR_16; VAR_10++) {
  VAR_11 = VAR_2->dim_order[VAR_10];
  for (VAR_12 = 1; VAR_12 <= 2; VAR_12++) {
   VAR_14 = 2*VAR_11 + VAR_12;

   if (VAR_6->coord[VAR_11] > 0)
    VAR_14 = FUNC_3(VAR_5, VAR_14);

   for (VAR_13 = 0; VAR_13 < VAR_7; VAR_13++) {
    if (!VAR_6->links[VAR_13])
     continue;
    if (VAR_6->axes[VAR_13] == VAR_14) {
     VAR_8[VAR_15] = VAR_6->links[VAR_13];
     VAR_9[VAR_15] = VAR_6->axes[VAR_13];
     VAR_6->links[VAR_13] = ((void*)0);
     VAR_15++;
    }
   }
  }
 }




 for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++) {
  if (!VAR_6->links[VAR_10])
   continue;

  VAR_8[VAR_15] = VAR_6->links[VAR_10];
  VAR_9[VAR_15] = VAR_6->axes[VAR_10];
  VAR_6->links[VAR_10] = ((void*)0);
  VAR_15++;
 }

 for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++) {
  VAR_6->links[VAR_10] = VAR_8[VAR_10];
  VAR_6->axes[VAR_10] = VAR_9[VAR_10];
 }

 FUNC_2(*VAR_8);
 FUNC_2(VAR_9);

 return 0;
}

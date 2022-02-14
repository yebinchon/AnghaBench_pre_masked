
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int osm_log_t ;
struct TYPE_9__ {int num_links; int** matrix; int dimension; int* axes; } ;
typedef TYPE_3__ mesh_node_t ;
struct TYPE_10__ {TYPE_2__** switches; TYPE_1__* p_osm; } ;
typedef TYPE_4__ lash_t ;
struct TYPE_8__ {TYPE_3__* node; } ;
struct TYPE_7__ {int log; } ;


 int FUNC_0 (int *,int ,char*,char*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 int FUNC_4 (TYPE_4__*,char*,int,int) ;

__attribute__((used)) static void FUNC_5(lash_t *VAR_1, int VAR_2)
{
 osm_log_t *VAR_3 = &VAR_1->p_osm->log;
 mesh_node_t *VAR_4 = VAR_1->switches[VAR_2]->node;
 int VAR_5 = VAR_4->num_links;
 int VAR_6, VAR_7, VAR_8;

 FUNC_1(VAR_3);

 if (!VAR_4->matrix || !VAR_4->dimension)
  goto done;

 for (VAR_8 = 1; VAR_8 <= 2*VAR_4->dimension; VAR_8++) {



  for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
   if (!VAR_4->axes[VAR_6])
    break;
  }

  VAR_4->axes[VAR_6] = VAR_8++;




  for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
   if (VAR_4->axes[VAR_7] || VAR_7 == VAR_6)
    continue;

   if (VAR_4->matrix[VAR_6][VAR_7] != 2)
    break;
  }

  if (VAR_7 != VAR_5) {
   VAR_4->axes[VAR_7] = VAR_8;
  }
 }

 if (FUNC_3(VAR_3, VAR_0)) {
  char VAR_9[256], *VAR_10;

  for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
   VAR_10 = VAR_9;
   FUNC_4(VAR_1, VAR_10, VAR_2, VAR_6);
   FUNC_0(VAR_3, VAR_0, "%s", VAR_9);
  }
 }

done:
 FUNC_2(VAR_3);
}

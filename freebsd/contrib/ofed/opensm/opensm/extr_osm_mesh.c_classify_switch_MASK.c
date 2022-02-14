
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {TYPE_2__* node; } ;
typedef TYPE_3__ switch_t ;
typedef int osm_log_t ;
struct TYPE_12__ {int num_class; size_t* class_type; int* class_count; } ;
typedef TYPE_4__ mesh_t ;
struct TYPE_13__ {TYPE_3__** switches; TYPE_1__* p_osm; } ;
typedef TYPE_5__ lash_t ;
struct TYPE_10__ {int poly; int num_links; } ;
struct TYPE_9__ {int log; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,int ,TYPE_3__*) ;

__attribute__((used)) static void FUNC_3(lash_t *VAR_0, mesh_t *VAR_1, int VAR_2)
{
 osm_log_t *VAR_3 = &VAR_0->p_osm->log;
 int VAR_4;
 switch_t *VAR_5 = VAR_0->switches[VAR_2];
 switch_t *VAR_6;

 FUNC_0(VAR_3);

 if (!VAR_5->node->poly)
  goto done;

 for (VAR_4 = 0; VAR_4 < VAR_1->num_class; VAR_4++) {
  VAR_6 = VAR_0->switches[VAR_1->class_type[VAR_4]];

  if (FUNC_2(VAR_5->node->num_links, VAR_5->node->poly, VAR_6))
   continue;

  VAR_1->class_count[VAR_4]++;
  goto done;
 }

 VAR_1->class_type[VAR_1->num_class] = VAR_2;
 VAR_1->class_count[VAR_1->num_class] = 1;
 VAR_1->num_class++;

done:
 FUNC_1(VAR_3);
}

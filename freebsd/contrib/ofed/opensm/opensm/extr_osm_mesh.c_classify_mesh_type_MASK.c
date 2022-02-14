
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_2__* node; } ;
typedef TYPE_3__ switch_t ;
struct mesh_info {int dimension; int poly; int degree; } ;
typedef int osm_log_t ;
struct TYPE_10__ {TYPE_3__** switches; TYPE_1__* p_osm; } ;
typedef TYPE_4__ lash_t ;
struct TYPE_8__ {int type; int dimension; int poly; } ;
struct TYPE_7__ {int log; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct mesh_info* VAR_0 ;
 scalar_t__ FUNC_2 (int ,int ,TYPE_3__*) ;

__attribute__((used)) static void FUNC_3(lash_t *VAR_1, int VAR_2)
{
 osm_log_t *VAR_3 = &VAR_1->p_osm->log;
 int VAR_4;
 switch_t *VAR_5 = VAR_1->switches[VAR_2];
 const struct mesh_info *VAR_6;

 FUNC_0(VAR_3);

 if (!VAR_5->node->poly)
  goto done;

 for (VAR_4 = 1; (VAR_6 = &VAR_0[VAR_4])->dimension != -1; VAR_4++) {
  if (FUNC_2(VAR_6->degree, VAR_6->poly, VAR_5))
   continue;

  VAR_5->node->type = VAR_4;
  VAR_5->node->dimension = VAR_6->dimension;
  FUNC_1(VAR_3);
  return;
 }

done:
 VAR_5->node->type = 0;
 FUNC_1(VAR_3);
 return;
}

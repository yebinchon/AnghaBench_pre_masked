
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int osm_log_t ;
typedef int mesh_t ;
struct TYPE_13__ {int num_switches; TYPE_3__** switches; TYPE_1__* p_osm; } ;
typedef TYPE_4__ lash_t ;
struct TYPE_12__ {TYPE_2__* node; } ;
struct TYPE_11__ {scalar_t__ num_links; scalar_t__ type; } ;
struct TYPE_10__ {int log; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_4__*,int) ;
 int FUNC_3 (TYPE_4__*,int *,int) ;
 scalar_t__ FUNC_4 (TYPE_4__*,int) ;
 int FUNC_5 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_6(lash_t *VAR_1, mesh_t *VAR_2)
{
 osm_log_t *VAR_3 = &VAR_1->p_osm->log;
 int VAR_4;
 int VAR_5 = 0;

 FUNC_0(VAR_3);

 for (VAR_4 = 0; VAR_4 < VAR_1->num_switches; VAR_4++) {




  if (VAR_1->switches[VAR_4]->node->num_links > VAR_0)
   continue;

  if (FUNC_4(VAR_1, VAR_4)) {
   VAR_5 = -1;
   goto Exit;
  }
  FUNC_2(VAR_1, VAR_4);
 }

 FUNC_5(VAR_1);

 for (VAR_4 = 0; VAR_4 < VAR_1->num_switches; VAR_4++) {
  if (VAR_1->switches[VAR_4]->node->type < 0)
   continue;
  FUNC_3(VAR_1, VAR_2, VAR_4);
 }

Exit:
 FUNC_1(VAR_3);
 return VAR_5;
}

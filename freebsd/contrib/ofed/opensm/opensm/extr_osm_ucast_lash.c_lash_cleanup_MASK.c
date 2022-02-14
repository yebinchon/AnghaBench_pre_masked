
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int * priv; int map_item; } ;
typedef TYPE_2__ osm_switch_t ;
struct TYPE_9__ {int sw_guid_tbl; } ;
typedef TYPE_3__ osm_subn_t ;
struct TYPE_10__ {int num_switches; scalar_t__* switches; TYPE_1__* p_osm; } ;
typedef TYPE_4__ lash_t ;
struct TYPE_7__ {TYPE_3__ subn; } ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__*) ;
 int FUNC_4 (TYPE_4__*,scalar_t__) ;

__attribute__((used)) static void FUNC_5(lash_t * VAR_0)
{
 osm_subn_t *VAR_1 = &VAR_0->p_osm->subn;
 osm_switch_t *VAR_2, *VAR_3;


 VAR_2 = (osm_switch_t *) FUNC_1(&VAR_1->sw_guid_tbl);
 while (VAR_2 != (osm_switch_t *) FUNC_0(&VAR_1->sw_guid_tbl)) {
  VAR_3 = VAR_2;
  VAR_2 = (osm_switch_t *) FUNC_2(&VAR_3->map_item);
  VAR_3->priv = ((void*)0);
 }

 if (VAR_0->switches) {
  unsigned VAR_4;
  for (VAR_4 = 0; ((int)VAR_4) < VAR_0->num_switches; VAR_4++)
   if (VAR_0->switches[VAR_4])
    FUNC_4(VAR_0, VAR_0->switches[VAR_4]);
  FUNC_3(VAR_0->switches);
 }
 VAR_0->switches = ((void*)0);
}

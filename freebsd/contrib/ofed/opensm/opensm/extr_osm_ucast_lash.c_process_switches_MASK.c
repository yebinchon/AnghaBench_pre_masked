
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int map_item; } ;
typedef TYPE_2__ osm_switch_t ;
struct TYPE_10__ {int sw_guid_tbl; } ;
typedef TYPE_3__ osm_subn_t ;
struct TYPE_11__ {TYPE_1__* p_osm; } ;
typedef TYPE_4__ lash_t ;
struct TYPE_8__ {TYPE_3__ subn; } ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (TYPE_4__*,TYPE_2__*) ;

__attribute__((used)) static void FUNC_4(lash_t * VAR_0)
{
 osm_switch_t *VAR_1, *VAR_2;
 osm_subn_t *VAR_3 = &VAR_0->p_osm->subn;



 VAR_2 = (osm_switch_t *) FUNC_1(&VAR_3->sw_guid_tbl);
 while (VAR_2 != (osm_switch_t *) FUNC_0(&VAR_3->sw_guid_tbl)) {
  VAR_1 = VAR_2;
  VAR_2 = (osm_switch_t *) FUNC_2(&VAR_1->map_item);

  FUNC_3(VAR_0, VAR_1);
 }
}

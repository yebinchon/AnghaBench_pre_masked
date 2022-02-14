
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int mcast_tbl; } ;
typedef TYPE_2__ osm_switch_t ;
struct TYPE_7__ {TYPE_1__* p_subn; } ;
typedef TYPE_3__ osm_sm_t ;
typedef int cl_map_item_t ;
struct TYPE_5__ {int max_mcast_lid_ho; int sw_guid_tbl; scalar_t__* mboxes; } ;


 int VAR_0 ;
 int * FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int) ;

__attribute__((used)) static int FUNC_4(osm_sm_t * VAR_1)
{
 int VAR_2;
 cl_map_item_t *VAR_3;
 osm_switch_t *VAR_4;

 for (VAR_2 = VAR_1->p_subn->max_mcast_lid_ho - VAR_0; VAR_2 >= 0;
      VAR_2--)
  if (VAR_1->p_subn->mboxes[VAR_2])
   break;
 if (VAR_2 < 0)
  return 0;


 for (VAR_3 = FUNC_1(&VAR_1->p_subn->sw_guid_tbl);
      VAR_3 != FUNC_0(&VAR_1->p_subn->sw_guid_tbl);
      VAR_3 = FUNC_2(VAR_3)) {
  VAR_4 = (osm_switch_t *) VAR_3;
  if (FUNC_3(&VAR_4->mcast_tbl, VAR_2))
   return -1;
 }
 return 0;
}

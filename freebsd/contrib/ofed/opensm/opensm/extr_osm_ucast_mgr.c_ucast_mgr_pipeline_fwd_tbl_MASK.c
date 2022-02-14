
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int max_lid; TYPE_1__* p_subn; } ;
typedef TYPE_2__ osm_ucast_mgr_t ;
typedef int osm_switch_t ;
typedef int cl_qmap_t ;
typedef int cl_map_item_t ;
struct TYPE_5__ {int sw_guid_tbl; } ;


 int VAR_0 ;
 int * FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *,TYPE_2__*,unsigned int) ;

__attribute__((used)) static void FUNC_4(osm_ucast_mgr_t * VAR_1)
{
 cl_qmap_t *VAR_2;
 cl_map_item_t *VAR_3;
 unsigned VAR_4, VAR_5 = VAR_1->max_lid / VAR_0 + 1;

 VAR_2 = &VAR_1->p_subn->sw_guid_tbl;
 for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++)
  for (VAR_3 = FUNC_1(VAR_2); VAR_3 != FUNC_0(VAR_2);
       VAR_3 = FUNC_2(VAR_3))
   FUNC_3((osm_switch_t *)VAR_3, VAR_1, VAR_4);
}

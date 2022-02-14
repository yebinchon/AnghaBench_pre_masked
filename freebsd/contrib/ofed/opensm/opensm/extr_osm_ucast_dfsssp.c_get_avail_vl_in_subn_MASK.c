
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_8__ {TYPE_1__* p_subn; } ;
typedef TYPE_2__ osm_ucast_mgr_t ;
struct TYPE_9__ {int p_node; } ;
typedef TYPE_3__ osm_switch_t ;
struct TYPE_10__ {int port_info; scalar_t__ p_remote_physp; } ;
typedef TYPE_4__ osm_physp_t ;
typedef int cl_qmap_t ;
typedef int cl_map_item_t ;
struct TYPE_7__ {int sw_guid_tbl; } ;


 int * FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 TYPE_4__* FUNC_5 (int ,int) ;

__attribute__((used)) static uint8_t FUNC_6(osm_ucast_mgr_t * VAR_0)
{
 uint32_t VAR_1 = 0;
 uint8_t VAR_2 = 0xFF, VAR_3 = 0;
 cl_qmap_t *VAR_4 = &VAR_0->p_subn->sw_guid_tbl;
 cl_map_item_t *VAR_5 = ((void*)0);
 osm_switch_t *VAR_6 = ((void*)0);


 for (VAR_5 = FUNC_1(VAR_4); VAR_5 != FUNC_0(VAR_4);
      VAR_5 = FUNC_2(VAR_5)) {
  VAR_6 = (osm_switch_t *) VAR_5;


  for (VAR_1 = 1; VAR_1 < FUNC_4(VAR_6->p_node); VAR_1++) {
   osm_physp_t *VAR_7 =
       FUNC_5(VAR_6->p_node, VAR_1);

   if (VAR_7 && VAR_7->p_remote_physp) {
    VAR_3 =
        FUNC_3(&VAR_7->
           port_info);
    if (VAR_3
        && VAR_3 < VAR_2)
     VAR_2 = VAR_3;
   }
  }
 }


 VAR_2 = 1 << (VAR_2 - 1);


 if (VAR_2 > 15)
  VAR_2 = 15;
 if (VAR_2 < 1)
  VAR_2 = 1;

 return VAR_2;
}

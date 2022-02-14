
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* p_subn; } ;
typedef TYPE_2__ osm_ucast_mgr_t ;
struct TYPE_7__ {int * priv; } ;
typedef TYPE_3__ osm_port_t ;
typedef int cl_qmap_t ;
typedef int cl_map_item_t ;
struct TYPE_5__ {int port_guid_tbl; } ;


 int * FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(osm_ucast_mgr_t * VAR_0)
{
 cl_qmap_t *VAR_1 = &VAR_0->p_subn->port_guid_tbl;
 osm_port_t *VAR_2;
 cl_map_item_t *VAR_3;
 for (VAR_3 = FUNC_1(VAR_1); VAR_3 != FUNC_0(VAR_1);
      VAR_3 = FUNC_2(VAR_3)) {
  VAR_2 = (osm_port_t *) VAR_3;
  if (VAR_2->priv) {
   FUNC_3(VAR_2->priv);
   VAR_2->priv = ((void*)0);
  }
 }
}
